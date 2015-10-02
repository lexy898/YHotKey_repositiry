#ifndef DIALOG_HI_BYE_H
#define DIALOG_HI_BYE_H

#include <QDialog>
#include <QMessageBox>
#include <for_sqlite.h>

namespace Ui {
class Dialog_Hi_Bye;
}

class Dialog_Hi_Bye : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog_Hi_Bye(QWidget *parent = 0);
    ~Dialog_Hi_Bye();

signals:
    int take_Flag();
    QString get_Selected_Button();
public slots:
    QString get_title();
    QString get_text();
    void ok();

private:
    Ui::Dialog_Hi_Bye *ui;
    For_Sqlite DB;
};

#endif // DIALOG_HI_BYE_H
