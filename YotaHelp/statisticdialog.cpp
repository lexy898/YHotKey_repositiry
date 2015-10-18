#include "statisticdialog.h"
#include "ui_statisticdialog.h"

StatisticDialog::StatisticDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::StatisticDialog)
{
    ui->setupUi(this);
    connect(ui->GetStatisticBtn,SIGNAL(clicked(bool)),this,SLOT(show_statistic()));
    connect(ui->GetStatisticBtn_2,SIGNAL(clicked(bool)),this,SLOT(show_statistic_2()));
}

StatisticDialog::~StatisticDialog()
{
    delete ui;
}


void StatisticDialog::show_statistic()
{
    ui->tableWidget->clear();
    ui->tableWidget->setRowCount(0);
    ui->tableWidget->setHorizontalHeaderLabels(QStringList()<<"Запрос"<<"Количество");
    ui->label_statistic->setText("<font color=blue><b>Статистика с "+ ui->dateEdit->date().toString("dd.MM.yyyy") +
                                 " по " +ui->dateEdit_2->date().toString("dd.MM.yyyy")+":</b></font>");
    qry = DB.requests(4);
    while (qry.next())
    {
        ui->tableWidget->insertRow(ui->tableWidget->rowCount());
        ui->tableWidget->setCurrentCell(ui->tableWidget->rowCount()-1,0);
        ui->tableWidget->setItem(ui->tableWidget->currentRow(),0,new QTableWidgetItem(qry.value(1).toString()));
        count_qry =DB.statistic_DB(qry.value(0).toString(),ui->dateEdit->date().toString("yyyy.MM.dd"),ui->dateEdit_2->date().toString("yyyy.MM.dd"));
        if (count_qry.first())
        {
            ui->tableWidget->setCurrentCell(ui->tableWidget->rowCount()-1,1);
            ui->tableWidget->setItem(ui->tableWidget->currentRow(),1,new QTableWidgetItem(count_qry.value(0).toString()));
        }
    }
    ui->tableWidget->setCurrentCell(0,1);
    int summ(0);
    for(int i(0); i<ui->tableWidget->rowCount();i++)
    {
        summ+=ui->tableWidget->currentItem()->text().toInt();
        ui->tableWidget->setCurrentCell(i+1,1);
    }
    ui->tableWidget->insertRow(ui->tableWidget->rowCount());
    ui->tableWidget->setCurrentCell(ui->tableWidget->rowCount()-1,0);
    ui->tableWidget->setItem(ui->tableWidget->currentRow(),0,new QTableWidgetItem("Итого"));
    ui->tableWidget->setCurrentCell(ui->tableWidget->rowCount()-1,1);
    ui->tableWidget->setItem(ui->tableWidget->currentRow(),1,new QTableWidgetItem(QString::number(summ)));
}

void StatisticDialog::show_statistic_2()
{
    ui->tableWidget_2->clear();
    ui->tableWidget_2->setRowCount(0);
    ui->tableWidget_2->setHorizontalHeaderLabels(QStringList()<<"Запрос"<<"Количество");
    ui->label_statistic_2->setText("<font color=blue><b>Статистика за "+ ui->dateEdit_3->date().toString("dd.MM.yyyy")+":</b></font>");
    qry = DB.requests(4);
    while (qry.next())
    {
        ui->tableWidget_2->insertRow(ui->tableWidget_2->rowCount());
        ui->tableWidget_2->setCurrentCell(ui->tableWidget_2->rowCount()-1,0);
        ui->tableWidget_2->setItem(ui->tableWidget_2->currentRow(),0,new QTableWidgetItem(qry.value(1).toString()));
        count_qry = DB.statistic_DB(qry.value(0).toString(),ui->dateEdit_3->date().toString("yyyy.MM.dd"));
        if (count_qry.first())
        {
            ui->tableWidget_2->setCurrentCell(ui->tableWidget_2->rowCount()-1,1);
            ui->tableWidget_2->setItem(ui->tableWidget_2->currentRow(),1,new QTableWidgetItem(count_qry.value(0).toString()));
        }
    }
    ui->tableWidget_2->setCurrentCell(0,1);
    int summ(0);
    for(int i(0); i<ui->tableWidget_2->rowCount();i++)
    {
        summ+=ui->tableWidget_2->currentItem()->text().toInt();
        ui->tableWidget_2->setCurrentCell(i+1,1);
    }
    ui->tableWidget_2->insertRow(ui->tableWidget_2->rowCount());
    ui->tableWidget_2->setCurrentCell(ui->tableWidget_2->rowCount()-1,0);
    ui->tableWidget_2->setItem(ui->tableWidget_2->currentRow(),0,new QTableWidgetItem("Итого"));
    ui->tableWidget_2->setCurrentCell(ui->tableWidget_2->rowCount()-1,1);
    ui->tableWidget_2->setItem(ui->tableWidget_2->currentRow(),1,new QTableWidgetItem(QString::number(summ)));
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

