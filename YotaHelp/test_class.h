#ifndef TEST_CLASS_H
#define TEST_CLASS_H

#include <QObject>
#include <QFileInfo>
#include <QtSql>

class Test_class : public QObject
{
    Q_OBJECT
public:
    Test_class();

public slots:
   bool connect_to_DB(QString value);

private:
   QString p;
   QSqlDatabase myDB;
};

#endif // TEST_CLASS_H
