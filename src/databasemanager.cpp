#include "include/databasemanager.h"

QSqlDatabase DatabaseManager::mydb;

QSqlDatabase& DatabaseManager::getDatabase()
{
    if (!mydb.isValid()) {
        mydb = QSqlDatabase::addDatabase("QSQLITE");

        QString databasePath = QCoreApplication::applicationDirPath() + "/CalCaldb.db";
        mydb.setDatabaseName(databasePath);

        if (!mydb.open()) {
            qDebug() << "Không thể mở kết nối cơ sở dữ liệu:" << mydb.lastError();
        }
    }

    return mydb;
}
