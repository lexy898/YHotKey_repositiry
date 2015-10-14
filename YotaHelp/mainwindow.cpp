#include "mainwindow.h"
#include "ui_mainwindow.h"



QClipboard *clipboard = QApplication::clipboard();

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->lblResult->setText("<font color=green><b>[+]</b></font>Status...");
    ui->statusBar->addPermanentWidget(ui->lblResult);
    ui->hello_Edit_2->setVisible(0);
    set_Icons_And_Tooltips();
    connect(ui->b1,SIGNAL(clicked(bool)),this,SLOT(any_template_clicked()));
    connect(ui->b2,SIGNAL(clicked(bool)),this,SLOT(any_template_clicked()));
    connect(ui->b3,SIGNAL(clicked(bool)),this,SLOT(any_template_clicked()));
    connect(ui->b4,SIGNAL(clicked(bool)),this,SLOT(any_template_clicked()));
    connect(ui->b5,SIGNAL(clicked(bool)),this,SLOT(any_template_clicked()));
    connect(ui->b6,SIGNAL(clicked(bool)),this,SLOT(any_template_clicked()));
    connect(ui->b7,SIGNAL(clicked(bool)),this,SLOT(any_template_clicked()));
    connect(ui->b8,SIGNAL(clicked(bool)),this,SLOT(any_template_clicked()));
    connect(ui->settings_internet,SIGNAL(clicked(bool)),this,SLOT(for_different()));
    connect(ui->settings_mms,SIGNAL(clicked(bool)),this,SLOT(for_different()));
    connect(ui->activation,SIGNAL(clicked(bool)),this,SLOT(for_different()));
    connect(ui->speedtest,SIGNAL(clicked(bool)),this,SLOT(for_different()));

    if (DB.connect_to_DB("db.sqlite",true))
    {
        ui->lblResult->setText("<font color=green><b>[+]</b></font> Соединение с базой данных установлено");
        fill_hello();
        fill_hi();
        fill_bye();
        fill_few();
        fill_buttons();
    }
    else ui->lblResult->setText("<font color=red><b>[ ! ]</b></font> База данных не существует");
}

MainWindow::~MainWindow()
{
    delete ui;
    DB.connect_to_DB("db.sqlite",false);
    qDebug() << "Clothing the connection to database file on exit";
}

void MainWindow::on_hello_clicked()
{
    ui->comboBox->setEnabled(ui->hello->isChecked());
    ui->add->setEnabled(ui->hello->isChecked());
    ui->minus->setEnabled(ui->hello->isChecked());
    ui->hello_Edit_2->clear();
    ui->hello_Edit_2->setVisible(0);
    ui->comboBox->setVisible(1);
    ui->minus->setIcon(QIcon(":/ico/minus.png"));
    ui->add->setIcon(QIcon(":/ico/add.png"));
    ui->minus->setToolTip("<b>Удалить</b> выбранную строку приветствия");
    ui->add->setToolTip("<b>Добавить</b> приветствие");
    ui->add->setChecked(0);

}

void MainWindow::text_out(QString button_name)
{
    ui->textEdit->clear();
    ui->Edit->setEnabled(1);
    QDate dt = QDate::currentDate();
    selected_button=button_name;
    qry = DB.on_key_pressed(button_name);
    if (qry.first())
    {
        ui->lblResult->setText("<font color=green><b>[+]</b></font>"+button_name);
        if (ui->hello->isChecked()) {
            ui->textEdit->insertPlainText(ui->comboBox->currentText()+"\n");
        }
        ui->textEdit->insertPlainText(qry.value(1).toString());
        QApplication::clipboard()->setText(ui->textEdit->toPlainText());
        qry.exec("INSERT INTO statistic (button,Day) values(\'"+ qry.value(0).toString() + "\',\'"+ dt.toString("yyyy.MM.dd") + "\')");
        if (ui->hello->isChecked()==1)
            work_with_hello_line();
    } else {
        ui->lblResult->setText("<font color=red><b>[-]</b></font> Что-то пошло не так");
    }
}

void MainWindow::for_different()
{
    QPushButton *obj = (QPushButton*) sender();
    QString param=obj->text();
    if (ui->Android->isChecked()){
        param+="_"+ui->Android->text();
        text_out(param);
    }
    if (ui->iOS->isChecked()){
        param+="_"+ui->iOS->text();
        text_out(param);
    }
    if (ui->Samsung->isChecked()){
        param+="_"+ui->Samsung->text();
        text_out(param);
    }
}

void MainWindow::but_off()
{
    ui->Edit->setEnabled(1);
    ui->Save->setEnabled(0);
    ui->Old->setEnabled(0);
    ui->textEdit->setReadOnly(1);
}

void MainWindow::set_Icons_And_Tooltips()
{
    ui->minus->setIcon(QIcon(":/ico/minus.png"));
    ui->minus_Hi->setIcon(QIcon(":/ico/minus.png"));
    ui->minus_Bye->setIcon(QIcon(":/ico/minus.png"));
    ui->minus_few->setIcon(QIcon(":/ico/minus.png"));
    ui->add->setIcon(QIcon(":/ico/add.png"));
    ui->add_Hi->setIcon(QIcon(":/ico/add.png"));
    ui->add_Bye->setIcon(QIcon(":/ico/add.png"));
    ui->add_few->setIcon(QIcon(":/ico/add.png"));
    ui->constructor->setIcon(QIcon(":/ico/constructor.png"));
    ui->minus->setToolTip("<b>Удалить</b> выбранную строку приветствия");
    ui->add->setToolTip("<b>Добавить</b> приветствие");
    ui->constructor->setToolTip("Это <b>Конструктор</b>, с помощью него ты можешь редактировать значения кнопок");
}

void MainWindow::activation_Form(bool flag)
{
    ui->groupBox->setEnabled(flag);
    ui->groupBox_3->setEnabled(flag);
    ui->groupBox_4->setEnabled(flag);
    ui->groupBox_6->setEnabled(flag);
    ui->textEdit->setEnabled(flag);
    ui->statistic->setEnabled(flag);
    work_with_hello_line();
}

void MainWindow::any_template_clicked()
{
    QPushButton *obj = (QPushButton*) sender();
    if (constructor_Mode)
    {
      selected_button=obj->objectName();
      show_Constructor_Dialog();
      return;
    }
    text_out(obj->text());
}

void MainWindow::on_Edit_clicked()
{
    ui->textEdit->setReadOnly(0);
    ui->textEdit->moveCursor(QTextCursor::End);
    ui->Save->setEnabled(1);
    ui->Old->setEnabled(1);
    ui->Edit->setEnabled(0);
    ui->hello->setChecked(0);
    ui->comboBox->setEnabled(0);
    qry = DB.on_key_pressed(selected_button);
    if (qry.next()){
        ui->textEdit->clear();
        ui->textEdit->insertPlainText(qry.value(1).toString());
    }
    QApplication::clipboard()->setText(ui->textEdit->toPlainText());

}


void MainWindow::on_Save_clicked()
{
    DB.update_DB(ui->textEdit->toPlainText(),selected_button);
    but_off();
    QApplication::clipboard()->setText(ui->textEdit->toPlainText());
}

void MainWindow::on_Old_clicked()
{
    DB.update_DB(selected_button);
    ui->Edit->setEnabled(1);
    ui->Save->setEnabled(0);
    ui->textEdit->setReadOnly(1);
    qry = DB.on_key_pressed(selected_button);
    if (qry.next()){
        ui->textEdit->clear();
        if (ui->hello->isChecked()) {
            ui->textEdit->insertPlainText(ui->comboBox->currentText()+"\n");
        }
        ui->textEdit->insertPlainText(qry.value(1).toString());
    }
    but_off();
}

void MainWindow::on_statistic_clicked()
{
    if(DialogStatistic)
    {
        DialogStatistic->activateWindow();
    }
    else
    {
        DialogStatistic = new StatisticDialog(this);
        DialogStatistic->setAttribute(Qt::WA_DeleteOnClose, true);
        DialogStatistic->show();
        connect(this, SIGNAL(statistic_activated()), DialogStatistic, SLOT(my_slot()));
        statistic_activated();
    }
}


void MainWindow::on_add_clicked()
{
    if (ui->add->isChecked()==0)
    {
        if (ui->hello_Edit_2->text().trimmed().isEmpty()){
            QMessageBox* pmb = new QMessageBox(QMessageBox::Information,"!",
                                               "Поле ввода осталось пустым.",
                                               QMessageBox::Cancel);
            pmb->exec();
            delete pmb;
            ui->hello_Edit_2->setFocus();
            ui->add->setChecked(1);
            return;
        }
        if (DB.check_for_add(1, ui->hello_Edit_2->text().trimmed())){
            QMessageBox* pmb = new QMessageBox(QMessageBox::Information,"!",
                                               "Такое значение уже есть.",
                                               QMessageBox::Cancel);
            pmb->exec();
            delete pmb;
            ui->hello_Edit_2->clear();
            ui->hello_Edit_2->setFocus();
            ui->add->setChecked(1);
            return;
        }
        DB.add_to_DB(ui->hello_Edit_2->text().trimmed());
        ui->minus->setIcon(QIcon(":/ico/minus.png"));
        ui->add->setIcon(QIcon(":/ico/add.png"));
        ui->minus->setToolTip("<b>Удалить</b> выбранную строку приветствия");
        ui->add->setToolTip("<b>Добавить</b> приветствие");
        ui->comboBox->setVisible(1);
        ui->hello_Edit_2->setVisible(0);
        fill_hello();
    }
    else
    {
        ui->minus->setIcon(QIcon(":/ico/cancel.png"));
        ui->add->setIcon(QIcon(":/ico/save.png"));
        ui->minus->setToolTip("<b>Отмена");
        ui->add->setToolTip("<b>Сохранить");
        ui->comboBox->setVisible(0);
        ui->hello_Edit_2->setVisible(1);
        ui->hello_Edit_2->setFocus();
        ui->hello_Edit_2->clear();
    }
}

void MainWindow::fill_hello()
{
    ui->comboBox->clear();
    qry = DB.requests(1);
    while (qry.next()){
        ui->comboBox->addItem(qry.value(0).toString());
    }
}

void MainWindow::fill_hi()
{
    ui->comboHi->clear();
    qry = DB.requests(2);
    while (qry.next()){
        ui->comboHi->addItem(qry.value(0).toString());
    }
}

void MainWindow::fill_bye()
{
    ui->comboBye->clear();
    qry = DB.requests(3);
    while (qry.next()){
        ui->comboBye->addItem(qry.value(0).toString());
    }
}

void MainWindow::fill_few()
{
    ui->combo_few->clear();
    qry = DB.requests(8);
    while (qry.next()){
        ui->combo_few->addItem(qry.value(0).toString());
    }
}

void MainWindow::fill_buttons()
{
    qry = DB.requests(9);
    while (qry.next())
    {
        if (ui->b1->objectName() == qry.value(1).toString())
            ui->b1->setText(qry.value(0).toString());
    }
    qry.seek(0);
    while (qry.next())
    {
        if (ui->b2->objectName() == qry.value(1).toString())
            ui->b2->setText(qry.value(0).toString());
    }
    qry.seek(0);
    while (qry.next())
    {
        if (ui->b3->objectName() == qry.value(1).toString())
            ui->b3->setText(qry.value(0).toString());
    }
    qry.seek(0);
    while (qry.next())
    {
        if (ui->b4->objectName() == qry.value(1).toString())
            ui->b4->setText(qry.value(0).toString());
    }
    qry.seek(0);
    while (qry.next())
    {
        if (ui->b5->objectName() == qry.value(1).toString())
            ui->b5->setText(qry.value(0).toString());
    }
    qry.seek(0);
    while (qry.next())
    {
        if (ui->b6->objectName() == qry.value(1).toString())
            ui->b6->setText(qry.value(0).toString());
    }
    qry.seek(0);
    while (qry.next())
    {
        if (ui->b7->objectName() == qry.value(1).toString())
            ui->b7->setText(qry.value(0).toString());
    }
    qry.seek(0);
    while (qry.next())
    {
        if (ui->b8->objectName() == qry.value(1).toString())
            ui->b8->setText(qry.value(0).toString());
    }
    qry.seek(0);
}

void MainWindow::on_minus_clicked()
{
    if (ui->add->isChecked()==0)
    {
        if (ui->comboBox->currentText().isEmpty()){
            QMessageBox* pmb = new QMessageBox(QMessageBox::Information,"!",
                                               "Удалять нечего.",
                                               QMessageBox::Cancel);
            pmb->exec();
            delete pmb;
            return;
        }
        QMessageBox* pmbx =
                new QMessageBox(QMessageBox::Question,
                                "Предупреждение",
                                "Удалить <u>"+ui->comboBox->currentText()+"</u>?",
                                QMessageBox::Yes | QMessageBox::No);
        int n = pmbx->exec();
        delete pmbx;
        if (n == QMessageBox::Yes) {
            DB.delete_from_DB(1, ui->comboBox->currentText());
            fill_hello();
        }
    }
    else
    {
        ui->minus->setIcon(QIcon(":/ico/minus.png"));
        ui->add->setIcon(QIcon(":/ico/add.png"));
        ui->minus->setToolTip("<b>Удалить</b> выбранную строку приветствия");
        ui->add->setToolTip("<b>Добавить</b> приветствие");
        ui->comboBox->setVisible(1);
        ui->hello_Edit_2->setVisible(0);
        ui->add->setChecked(0);
    }
}

void MainWindow::on_add_Hi_clicked()
{
    flag = 1;
    if (show_Hi_Yes_Dialog()==1){
        QMessageBox* pmb = new QMessageBox(QMessageBox::Information,"Результат",
                                           "Сохранено",
                                           QMessageBox::Yes);
        pmb->exec();
        delete pmb;
        fill_hi();
    }
}

void MainWindow::on_add_Bye_clicked()
{
    flag = 2;
    if (show_Hi_Yes_Dialog()==1){
        QMessageBox* pmb = new QMessageBox(QMessageBox::Information,"Результат",
                                           "Сохранено",
                                           QMessageBox::Yes);
        pmb->exec();
        delete pmb;
        fill_bye();
    }
}

int MainWindow::show_Hi_Yes_Dialog()
{   int i(0);
        Dialog_Hi_Bye *Hi_Bye_Dialog = new Dialog_Hi_Bye();
        Hi_Bye_Dialog->setModal(true);
        Hi_Bye_Dialog->show();
        Hi_Bye_Dialog->activateWindow();
        Hi_Bye_Dialog->setAttribute(Qt::WA_DeleteOnClose, true);
        connect(Hi_Bye_Dialog,SIGNAL(take_Flag()),this,SLOT(get_Flag()));
        connect(Hi_Bye_Dialog,SIGNAL(get_Selected_Button()),this,SLOT(give_Selected_Button()));
        i = Hi_Bye_Dialog->exec();
        return i;
}

void MainWindow::show_Constructor_Dialog()
{
    flag = 4;
    if (show_Hi_Yes_Dialog()==1){
        QMessageBox* pmb = new QMessageBox(QMessageBox::Information,"Результат",
                                           "Сохранено",
                                           QMessageBox::Yes);
        pmb->exec();
        delete pmb;
        fill_buttons();
    }
}

int MainWindow::get_Flag()
{
    return flag;
}

QString MainWindow::give_Selected_Button()
{
    return selected_button;
}

void MainWindow::on_minus_Hi_clicked()
{
    if (ui->comboHi->currentText().isEmpty()){
        QMessageBox* pmb = new QMessageBox(QMessageBox::Information,"!",
                                           "Удалять нечего.",
                                           QMessageBox::Cancel);
        pmb->exec();
        delete pmb;
        return;
    }
    QMessageBox* pmbx =
            new QMessageBox(QMessageBox::Question,
                            "Предупреждение",
                            "Удалить <u>"+ui->comboHi->currentText()+"</u>?",
                            QMessageBox::Yes | QMessageBox::No);
    int n = pmbx->exec();
    delete pmbx;
    if (n == QMessageBox::Yes) {
        DB.delete_from_DB(2, ui->comboHi->currentText());
        fill_hi();
    }
}

void MainWindow::on_minus_Bye_clicked()
{
    if (ui->comboBye->currentText().isEmpty()){
        QMessageBox* pmb = new QMessageBox(QMessageBox::Information,"!",
                                           "Удалять нечего.",
                                           QMessageBox::Cancel);
        pmb->exec();
        delete pmb;
        return;
    }
    QMessageBox* pmbx =
            new QMessageBox(QMessageBox::Question,
                            "Предупреждение",
                            "Удалить <u>"+ui->comboBye->currentText()+"</u>?",
                            QMessageBox::Yes | QMessageBox::No);
    int n = pmbx->exec();
    delete pmbx;
    if (n == QMessageBox::Yes) {
        DB.delete_from_DB(3, ui->comboBye->currentText());
        fill_bye();
    }
}

void MainWindow::work_with_hello_line()
{
    but_off();
    ui->hello->setChecked(0);
    ui->comboBox->setEnabled(0);
    ui->comboBox->setVisible(1);
    ui->hello_Edit_2->clear();
    ui->hello_Edit_2->setVisible(0);
    ui->add->setEnabled(0);
    ui->minus->setEnabled(0);
    ui->minus->setIcon(QIcon(":/ico/minus.png"));
    ui->add->setIcon(QIcon(":/ico/add.png"));
    ui->add->setToolTip("");
    ui->minus->setToolTip("");
    ui->add->setChecked(0);
}

void MainWindow::on_helloButton_clicked()
{
    ui->textEdit->clear();
    ui->Edit->setEnabled(0);
    qry = DB.get_Hi_Bye(1,ui->comboHi->currentText());
    if (qry.first())
    {
        ui->lblResult->setText("<font color=green><b>[+]</b></font>"+ui->comboHi->currentText());
        if (ui->hello->isChecked()) {
            ui->textEdit->insertPlainText(ui->comboBox->currentText()+"\n");
        }
        ui->textEdit->insertPlainText(qry.value(1).toString());
        QApplication::clipboard()->setText(ui->textEdit->toPlainText());
        work_with_hello_line();
        ui->Edit->setEnabled(0);
    } else {
        ui->lblResult->setText("<font color=red><b>[-]</b></font> Что-то пошло не так");
    }
}

void MainWindow::on_byeButton_clicked()
{
    ui->textEdit->clear();
    ui->Edit->setEnabled(0);
    qry = DB.get_Hi_Bye(2,ui->comboBye->currentText());
    if (qry.first())
    {
        ui->lblResult->setText("<font color=green><b>[+]</b></font>"+ui->comboBye->currentText());
        ui->textEdit->insertPlainText(qry.value(1).toString());
        QApplication::clipboard()->setText(ui->textEdit->toPlainText());
        work_with_hello_line();
        ui->Edit->setEnabled(0);
    } else {
        ui->lblResult->setText("<font color=red><b>[-]</b></font> Что-то пошло не так");
    }
}

void MainWindow::on_add_few_clicked()
{
    flag = 3;
    if (show_Hi_Yes_Dialog()==1){
        QMessageBox* pmb = new QMessageBox(QMessageBox::Information,"Результат",
                                           "Сохранено",
                                           QMessageBox::Yes);
        pmb->exec();
        delete pmb;
        fill_few();
    }
}

void MainWindow::on_minus_few_clicked()
{
    if (ui->combo_few->currentText().isEmpty()){
        QMessageBox* pmb = new QMessageBox(QMessageBox::Information,"!",
                                           "Удалять нечего.",
                                           QMessageBox::Cancel);
        pmb->exec();
        delete pmb;
        return;
    }
    QMessageBox* pmbx =
            new QMessageBox(QMessageBox::Question,
                            "Предупреждение",
                            "Удалить <u>"+ui->combo_few->currentText()+"</u>?",
                            QMessageBox::Yes | QMessageBox::No);
    int n = pmbx->exec();
    delete pmbx;
    if (n == QMessageBox::Yes) {
        DB.delete_from_DB(4, ui->combo_few->currentText());
        fill_few();
    }
}

void MainWindow::on_few_clicked()
{
    if (ui->combo_few->currentText().isEmpty())
        return;
    text_out(ui->combo_few->currentText());
}

void MainWindow::on_constructor_clicked()
{
    if (ui->constructor->isChecked() != true)
    {
        constructor_Mode=false;
        activation_Form(true);
        ui->constructor->setIcon(QIcon(":/ico/constructor.png"));
        ui->constructor->setToolTip("Это <b>Конструктор</b>, с помощью него ты можешь редактировать значения кнопок");
        ui->lblResult->setText("<font color=green><b>[+]</b></font>");
        ui->Edit->setEnabled(0);
    }
    else
    {
        constructor_Mode=true;
        ui->constructor->setIcon(QIcon(":/ico/cancel.png"));
        ui->lblResult->setText("<font color=green><b>[+]</b></font> Режим конструктора");
        ui->constructor->setToolTip("Выйти из режима конструктора");
        activation_Form(false);
    }
}
