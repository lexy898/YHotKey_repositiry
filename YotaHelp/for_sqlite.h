#ifndef FOR_SQLITE_H
#define FOR_SQLITE_H

#include <QObject>
#include <QFileInfo>
#include <QtSql>

class For_Sqlite : public QObject
{
    Q_OBJECT
public:
    For_Sqlite();

public slots:
   bool connect_to_DB(QString value, bool key);              //соединение и разъединение с БД
   QSqlQuery requests(unsigned short int id);                //обработка запросов
   bool delete_from_DB(unsigned short int id, QString value);//удаление из таблицы
   bool add_to_DB(QString value);                            //добавление в таблицу
   bool add_to_DB(unsigned short int id,QString title,QString text);//добавление в таблицу Hi/Bye/Tble1
   QSqlQuery get_Hi_Bye(unsigned short int id,QString value);//получение Значения Hi/Bye
   bool check_for_add(unsigned short int id, QString value); //проверка на необходимость добавления
   QSqlQuery on_key_pressed(QString button);                 //получение текста при нажатии на кнопку
   bool update_DB(QString value);                            //изменение текста, соответствующего кнопке
   bool update_DB(QString value, QString button);            // ----.----.----.-----
   QSqlQuery statistic_DB(QString button, QString dateA, QString dateB);//Статистика по диапазону дат
   QSqlQuery statistic_DB(QString button, QString day);      //Статистика за день
   bool constructor(QString selected_Button,QString title,QString text);//Конструктор
private:
   QSqlDatabase myDB;
};

#endif // FOR_SQLITE_H
