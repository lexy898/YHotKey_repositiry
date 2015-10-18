#ifndef STATISTICDIALOG_H
#define STATISTICDIALOG_H

#include <QDialog>
#include <QDate>
#include <QtSql>
#include <QTableWidget>
#include <QMessageBox>
#include <for_sqlite.h>

namespace Ui {
class StatisticDialog;
}

class StatisticDialog : public QDialog
{
    Q_OBJECT

public:
    explicit StatisticDialog(QWidget *parent = 0);
    ~StatisticDialog();

private slots:

    void my_slot();

    void on_DeletStatistic_clicked();

    void show_statistic();

    void show_statistic_2();

private:
    Ui::StatisticDialog *ui;
    For_Sqlite DB;
    QSqlQuery qry, count_qry;
};

#endif // STATISTICDIALOG_H
