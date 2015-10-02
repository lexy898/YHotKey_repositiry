#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QApplication>
#include <QMainWindow>
#include <QDebug>
#include <QtSql>
#include <QFileInfo>
#include <QMessageBox>
#include <QClipboard>
#include <QDialog>
#include <QDate>
#include "statisticdialog.h"
#include "dialog_hi_bye.h"
#include "for_sqlite.h"


namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    int flag; //показывает что выбрал пользователь. (добавить)
              //1-добавить Hi
              //2-добавить Bye
              //3-добавить few
              //4-конструктор

    void work_with_hello_line();
signals:
    void statistic_activated();

private slots:
    void on_hello_clicked();

    void on_settings_internet_clicked();

    void on_settings_mms_clicked();

    void on_activation_clicked();

    void on_speedtest_clicked();

    void on_Edit_clicked();

    void on_Save_clicked();

    void on_Old_clicked();

    void on_statistic_clicked();

    void on_add_clicked();

    void fill_hello();

    void fill_hi();

    void fill_bye();

    void fill_few();

    void fill_buttons();

    void on_minus_clicked();

    void on_add_Hi_clicked();

    void on_add_Bye_clicked();

    int show_Hi_Yes_Dialog();

    void show_Constructor_Dialog();

    int get_Flag();

    QString give_Selected_Button();

    void on_minus_Hi_clicked();

    void on_minus_Bye_clicked();

    void on_helloButton_clicked();

    void on_byeButton_clicked();

    void on_add_few_clicked();

    void on_minus_few_clicked();

    void on_few_clicked();

    void on_constructor_clicked();

    void on_b1_clicked();

    void on_b2_clicked();

    void on_b3_clicked();

    void on_b4_clicked();

    void on_b5_clicked();

    void on_b6_clicked();

    void on_b7_clicked();

    void on_b8_clicked();

private:
    Ui::MainWindow *ui;
    For_Sqlite DB;
    QSqlQuery qry;
    QPointer<StatisticDialog> DialogStatistic;
    QString selected_button; //выбранная кнопка
    bool constructor_Mode=false; //режим конструктора
    void text_out(QString button_name);
    void for_different(QString param);
    void but_off();
    void set_Icons_And_Tooltips();
    void activation_Form(bool flag); //вкл.откл элементов формы в режиме конструктора
};



#endif // MAINWINDOW_H
