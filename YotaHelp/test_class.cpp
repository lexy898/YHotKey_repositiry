#include "test_class.h"

Test_class::Test_class()
{

}

bool Test_class::connect_to_DB(QString value)
{
    p=value;
    myDB = QSqlDatabase::addDatabase("QSQLITE");
    myDB.setDatabaseName(value);
    QFileInfo checkFile(value);
    if (checkFile.isFile())
    {
        if(myDB.open())
            return true;
    }
        else return false;
    emit connect_to_DB(value);
}

