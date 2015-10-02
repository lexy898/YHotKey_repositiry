#include "for_sqlite.h"

For_Sqlite::For_Sqlite()
{

}


bool For_Sqlite::connect_to_DB(QString value, bool key)
{
    switch (key) {
    case true:
    {
        myDB = QSqlDatabase::addDatabase("QSQLITE");
        myDB.setDatabaseName(value);
        QFileInfo checkFile(value);
        if (checkFile.isFile())
        {
            if(myDB.open())
            {
                return true;
                break;
            }
            else
            {
                 return false;
                 break;
            }
        }
        else
            return false;
        break;
    }
    case false:
    {
        myDB.close();
        break;
    }
    }
}

QSqlQuery For_Sqlite::requests(unsigned short int id)
{
    //1-fill_hello
    //2-fill_hi
    //3-fill_bye
    //4-statistic
    //5-min
    //6-max
    //7-delete
    //8-few
    //9-fill buttons
    QSqlQuery qry;
    switch (id) {
    case 1:
    {
        qry.exec("SELECT hello FROM string_hello");
        break;
    }
    case 2:
    {
        qry.exec("SELECT hello_name FROM hello");
        break;
    }
    case 3:
    {
        qry.exec("SELECT bye_name FROM bye");
        break;
    }

    case 4:
    {
        qry.exec("SELECT id,button FROM Table1");
        break;
    }

    case 5:
    {
        qry.exec("SELECT MIN(Day) FROM statistic");
        break;
    }

    case 6:
    {
        qry.exec("SELECT MAX(Day) FROM statistic");
        break;
    }
    case 7:
    {
        qry.exec("DELETE FROM statistic");
        qry.exec("REINDEX statistic");
        qry.exec("VACUUM");
        break;
    }
    case 8:
    {
        qry.exec("SELECT button FROM Table1 WHERE few=1");
        break;
    }
    case 9:
    {
        qry.exec("SELECT button,objectName FROM Table1 WHERE objectName != \'NULL\'");
        break;
    }
    }
    return qry;
}

bool For_Sqlite::delete_from_DB(unsigned short int id, QString value)
{
    //1- minus
    //2-minus Hi
    //3-minus Bye
    //4-minus few
    QSqlQuery qry;
    switch (id) {
    case 1:
    {
        qry.exec("DELETE FROM string_hello WHERE hello= \'"+value+"\'");
        return true;
        break;
    }
    case 2:
    {
        qry.exec("DELETE FROM hello WHERE hello_name= \'"+value+"\'");
        return true;
        break;
    }
    case 3:
    {
        qry.exec("DELETE FROM bye WHERE bye_name= \'"+value+"\'");
        return true;
        break;
    }

    case 4:
    {
        qry.exec("DELETE FROM Table1 WHERE button= \'"+value+"\'");
        return true;
        break;
    }

    }
}

bool For_Sqlite::add_to_DB(QString value)
{
    QSqlQuery qry;
        qry.exec("INSERT INTO string_hello (hello) VALUES(\'"+value+"\')");
        return true;
}

bool For_Sqlite::add_to_DB(unsigned short id, QString title,QString text)
{
    //1-Hi
    //2-Bye
    //3-few
    QSqlQuery qry;
    switch(id){
    case 1:
    {
        qry.exec("INSERT INTO hello (hello_name,hello_text) VALUES(\'"+title+"\',\'"+text+"\')");
        break;
    }
    case 2:
    {
        qry.exec("INSERT INTO bye (bye_name,bye_text) VALUES(\'"+title+"\',\'"+text+"\')");
        break;
    }
    case 3:
    {
        qry.exec("INSERT INTO Table1 (button,text,old,few) VALUES(\'"+title+"\',\'"+text+"\',\'"+text+"\',\'1\')");
        break;
    }
    }

}

QSqlQuery For_Sqlite::get_Hi_Bye(unsigned short id, QString value)
{
    //1-Hi
    //2-Bye
    QSqlQuery qry;
    switch(id){
    case 1:
    {
        qry.exec("SELECT hello_name,hello_text FROM hello WHERE hello_name=\'"+value+"\' ");
        break;
    }
    case 2:
    {
        qry.exec("SELECT bye_name,bye_text FROM bye WHERE bye_name=\'"+value+"\' ");
        break;
    }
    }
    return qry;
}

bool For_Sqlite::check_for_add(unsigned short id, QString value)
{
    //    1-hello
    //    2-Hi
    //    3-Bye
    //    4-few
    QSqlQuery qry;
    switch (id){
    case 1:
    {
        qry.exec("SELECT hello FROM string_hello WHERE hello= \'"+value+"\'");
        break;
    }
    case 2:
    {
        qry.exec("SELECT hello_name FROM hello WHERE hello_name= \'"+value+"\'");
        break;
    }
    case 3:
    {
        qry.exec("SELECT bye_name FROM bye WHERE bye_name= \'"+value+"\'");
        break;
    }
    case 4:
    {
        qry.exec("SELECT button FROM Table1 WHERE button= \'"+value+"\'");
        break;
    }
    }
    if (qry.next())
        return true;
    else
        return false;
}

QSqlQuery For_Sqlite::on_key_pressed(QString button)
{
    QSqlQuery qry;
    qry.exec("SELECT id,text FROM Table1 WHERE button=\'"+ button + "\'");
    return qry;
}

bool For_Sqlite::update_DB(QString value)
{
    QSqlQuery qry;
    if (qry.exec("UPDATE Table1 SET text = Old WHERE button = \'"+value+"\'"))
        return true;
    else
        return false;
}

bool For_Sqlite::update_DB(QString value, QString button)
{
    QSqlQuery qry;
    if (qry.exec("UPDATE Table1 SET text = \'"+value+"\' WHERE button = \'"+button+"\'"))
        return true;
    else
        return false;
}

QSqlQuery For_Sqlite::statistic_DB(QString button, QString dateA, QString dateB)
{
    QSqlQuery qry;
    qry.exec("SELECT COUNT (button) FROM statistic WHERE button = \'"+button+
             "\' AND Day BETWEEN \'"+dateA+"\' AND \'"+dateB+"\'");
    return qry;
}

QSqlQuery For_Sqlite::statistic_DB(QString button, QString day)
{
    QSqlQuery qry;
    qry.exec("SELECT COUNT (button) FROM statistic WHERE button = \'"+button+
                           "\' AND Day = \'"+day+"\'");
    return qry;
}

bool For_Sqlite::constructor(QString selected_Button, QString title, QString text)
{
    QSqlQuery qry;
    qry.exec("UPDATE Table1 SET button= \'"+title+"\', text= \'"+text+"\', Old=\'"+text+"\' WHERE objectName = \'"+selected_Button+"\'");
}
