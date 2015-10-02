#include "statisticdialog.h"
#include "ui_statisticdialog.h"

StatisticDialog::StatisticDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::StatisticDialog)
{
    ui->setupUi(this);
}

StatisticDialog::~StatisticDialog()
{
    delete ui;
}


void StatisticDialog::on_pushButton_clicked()
{
    ui->tableWidget->clear();
    ui->tableWidget->setRowCount(0);
    ui->tableWidget->setHorizontalHeaderItem(0,new QTableWidgetItem("Запрос"));
    ui->tableWidget->setHorizontalHeaderItem(1,new QTableWidgetItem("количество"));
    ui->label_statistic->setText("<font color=blue><b>Статистика с "+ ui->dateEdit->date().toString("dd.MM.yyyy") +
                                 " по " +ui->dateEdit_2->date().toString("dd.MM.yyyy")+":</b></font>");
    ui->tableWidget->insertRow(0);
    qry = DB.requests(4);
    while (qry.next())
    {
        ui->tableWidget->insertRow(ui->tableWidget->rowCount());
        ui->tableWidget->setCurrentCell(ui->tableWidget->rowCount()-1,0);
        ui->tableWidget->setItem(ui->tableWidget->currentRow()-1,0,new QTableWidgetItem(qry.value(1).toString()));
        count_qry =DB.statistic_DB(qry.value(0).toString(),ui->dateEdit->date().toString("yyyy.MM.dd"),ui->dateEdit_2->date().toString("yyyy.MM.dd"));
        if (count_qry.first())
        {
            ui->tableWidget->setCurrentCell(ui->tableWidget->rowCount()-1,1);
            ui->tableWidget->setItem(ui->tableWidget->currentRow()-1,1,new QTableWidgetItem(count_qry.value(0).toString()));
        }
    }
    ui->tableWidget->setCurrentCell(0,0);//возвращает выделение 1ой ячейки
}

void StatisticDialog::on_pushButton_2_clicked()
{
    ui->tableWidget_2->clear();
    ui->tableWidget_2->setRowCount(0);
    ui->tableWidget_2->setHorizontalHeaderItem(0,new QTableWidgetItem("Запрос"));
    ui->tableWidget_2->setHorizontalHeaderItem(1,new QTableWidgetItem("количество"));
    ui->label_statistic_2->setText("<font color=blue><b>Статистика за "+ ui->dateEdit_3->date().toString("dd.MM.yyyy")+":</b></font>");
    ui->tableWidget_2->insertRow(0);
    qry = DB.requests(4);
    while (qry.next())
    {
        ui->tableWidget_2->insertRow(ui->tableWidget_2->rowCount());
        ui->tableWidget_2->setCurrentCell(ui->tableWidget_2->rowCount()-1,0);
        ui->tableWidget_2->setItem(ui->tableWidget_2->currentRow()-1,0,new QTableWidgetItem(qry.value(1).toString()));
        count_qry = DB.statistic_DB(qry.value(0).toString(),ui->dateEdit_3->date().toString("yyyy.MM.dd"));
        if (count_qry.first())
        {
            ui->tableWidget_2->setCurrentCell(ui->tableWidget_2->rowCount()-1,1);
            ui->tableWidget_2->setItem(ui->tableWidget_2->currentRow()-1,1,new QTableWidgetItem(count_qry.value(0).toString()));
        }
    }
    ui->tableWidget_2->setCurrentCell(0,0);//возвращает выделение 1ой ячейки
}


void StatisticDialog::my_slot()
{
    QDate dt = QDate::currentDate();
    qry = DB.requests(5); //минимальная дата
    if (qry.next()){
        ui->dateEdit->setDate(qry.value(0).toDate());
    }
    qry = DB.requests(6); //максимальная дата
    if (qry.next()){
        ui->dateEdit_2->setDate(qry.value(0).toDate());
    }
    ui->dateEdit_3->setDate(dt);
}


void StatisticDialog::on_DeletStatistic_clicked()
{
    QMessageBox* pmbx =
            new QMessageBox(QMessageBox::Question,
                            "Предупреждение",
                            "Ты правда хочешь удалить всю статистику <u>безвозвратно</u>?",
                            QMessageBox::Yes | QMessageBox::No);
    int n = pmbx->exec();
    delete pmbx;
    if (n == QMessageBox::Yes) {
        DB.requests(7); //удаление статистики
        QMessageBox* pmb = new QMessageBox(QMessageBox::Information,"Результат",
                                           "Вся статистика была успешно удалена",
                                           QMessageBox::Yes);
        pmb->exec();
        delete pmb;
    }
}
