#include "dialog_hi_bye.h"
#include "ui_dialog_hi_bye.h"

Dialog_Hi_Bye::Dialog_Hi_Bye(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog_Hi_Bye)
{
    ui->setupUi(this);
    connect(ui->ok,SIGNAL(clicked(bool)),this,SLOT(ok()));
    connect(ui->cancel,SIGNAL(clicked(bool)),this,SLOT(reject()));
}

Dialog_Hi_Bye::~Dialog_Hi_Bye()
{
    delete ui;
}

QString Dialog_Hi_Bye::get_title()
{
    return ui->text_1->toPlainText().trimmed();
}

QString Dialog_Hi_Bye::get_text()
{
    return ui->text_2->toPlainText().trimmed();
}

void Dialog_Hi_Bye::ok()
{
    if (ui->text_1->toPlainText().isEmpty())
    {
        QMessageBox* pmb = new QMessageBox(QMessageBox::Warning,"Пустое значение",
                                           "Название не введено",
                                           QMessageBox::Yes);
        pmb->exec();
        delete pmb;
        ui->text_1->setFocus();
        return;
    }
    if (ui->text_1->toPlainText().length() >150)
    {
        QMessageBox* pmb = new QMessageBox(QMessageBox::Warning,"over 9000",
                                           "Будем кратки. Мир перенаселён словами.",
                                           QMessageBox::Yes);
        pmb->exec();
        delete pmb;
        ui->text_2->setFocus();
        return;
    }
    if (ui->text_2->toPlainText().isEmpty())
    {
        QMessageBox* pmb = new QMessageBox(QMessageBox::Warning,"Пустое значение",
                                           "Текст не введен",
                                           QMessageBox::Yes);
        pmb->exec();
        delete pmb;
        ui->text_2->setFocus();
        return;
    }
    if (ui->text_2->toPlainText().length() >1000)
    {
        QMessageBox* pmb = new QMessageBox(QMessageBox::Warning,"over 9000",
                                           "Нужно уметь коротко говорить о длинных вещах.",
                                           QMessageBox::Yes);
        pmb->exec();
        delete pmb;
        ui->text_2->setFocus();
        return;
    }
    switch (take_Flag()) {
    case 1:
    {
        if (DB.check_for_add(2, get_title()))
        {
            QMessageBox* pmb = new QMessageBox(QMessageBox::Warning,"!",
                                               "Такое название уже есть.",
                                               QMessageBox::Cancel);
            pmb->exec();
            delete pmb;
            ui->text_1->clear();
            ui->text_1->setFocus();
            return;
        }
        DB.add_to_DB(1,get_title(),get_text());
        this->accept();
        break;
    }
    case 2:
    {
        if (DB.check_for_add(3, get_title()))
        {
            QMessageBox* pmb = new QMessageBox(QMessageBox::Warning,"!",
                                               "Такое название уже есть.",
                                               QMessageBox::Cancel);
            pmb->exec();
            delete pmb;
            ui->text_1->clear();
            ui->text_1->setFocus();
            return;
        }
        DB.add_to_DB(2,get_title(),get_text());
        this->accept();
        break;
    }

    case 3:
    {
        if (DB.check_for_add(4, get_title()))
        {
            QMessageBox* pmb = new QMessageBox(QMessageBox::Warning,"!",
                                               "Такое название уже есть.",
                                               QMessageBox::Cancel);
            pmb->exec();
            delete pmb;
            ui->text_1->clear();
            ui->text_1->setFocus();
            return;
        }
        DB.add_to_DB(3,get_title(),get_text());
        this->accept();
        break;
    }
    case 4:
    {
        if (DB.check_for_add(4, get_title()))
        {
            QMessageBox* pmb = new QMessageBox(QMessageBox::Warning,"!",
                                               "Такое название уже есть.",
                                               QMessageBox::Cancel);
            pmb->exec();
            delete pmb;
            ui->text_1->clear();
            ui->text_1->setFocus();
            return;
        }
        DB.constructor(get_Selected_Button(),get_title(),get_text());
        this->accept();
        break;
    }
    }
}

