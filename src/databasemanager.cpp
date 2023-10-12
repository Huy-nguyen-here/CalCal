#include "include/databasemanager.h"

QSqlDatabase DatabaseManager::mydb;

QSqlDatabase& DatabaseManager::getDatabase()
{
    if (!mydb.isValid()) {
        mydb = QSqlDatabase::addDatabase("QSQLITE");
        mydb.setDatabaseName("F:/Project/Software Engineering/CalCalFull/data/CalCaldb.db");

        if (!mydb.open()) {
            qDebug() << "Không thể mở kết nối cơ sở dữ liệu:" << mydb.lastError();
        }
    }

    return mydb;
}
