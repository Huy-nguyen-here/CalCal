#include <QApplication>
#include "include/mainwindow.h"
#include "include/inputdialog.h"
#include "include/databasemanager.h"
#include <QSqlError>
#include <QSqlQuery>

bool createTablesIfNeeded()
{
    QSqlDatabase database = QSqlDatabase::database();
    if (!database.isValid()) {
        qDebug() << "Invalid database connection.";
        return false;
    }

    QSqlQuery query;
    QString queryString = "CREATE TABLE IF NOT EXISTS CALO_IN ("
                          "Ngay DATE,"
                          "MaTP INT,"
                          "So_luong REAL,"
                          "Calo_thuc_nap FLOAT,"
                          "FOREIGN KEY(MaTP) REFERENCES THUCPHAM(MaTP))";
    if (!query.exec(queryString)) {
        qDebug() << "Error creating CALO_IN table:" << query.lastError().text();
        return false;
    }

    queryString = "CREATE TABLE IF NOT EXISTS NGUOIDUNG ("
                  "name TEXT,"
                  "age INTEGER,"
                  "height INTEGER NOT NULL,"
                  "weight INTEGER NOT NULL,"
                  "gender TEXT,"
                  "bmi REAL,"
                  "body_type TEXT,"
                  "recommendation TEXT)";
    if (!query.exec(queryString)) {
        qDebug() << "Error creating NGUOIDUNG table:" << query.lastError().text();
        return false;
    }

    queryString = "CREATE TABLE IF NOT EXISTS THUCPHAM ("
                  "MaTP INT PRIMARY KEY,"
                  "TenTP TEXT,"
                  "Don_vi_tinh TEXT,"
                  "Luong_Calo_moi_100donvi FLOAT)";
    if (!query.exec(queryString)) {
        qDebug() << "Error creating THUCPHAM table:" << query.lastError().text();
        return false;
    }

    queryString = "CREATE TABLE IF NOT EXISTS BAITAP ("
                  "MaBT INT PRIMARY KEY,"
                  "TenBT TEXT,"
                  "Luong_Calo_moi_60p FLOAT)";
    if (!query.exec(queryString)) {
        qDebug() << "Error creating BAITAP table:" << query.lastError().text();
        return false;
    }

    queryString = "CREATE TABLE IF NOT EXISTS CALO_OUT ("
                  "Ngay DATE,"
                  "MaBT INT,"
                  "Thoi_gian INT,"
                  "Calo_tieu_thu FLOAT,"
                  "FOREIGN KEY(MaBT) REFERENCES BAITAP(MaBT))";
    if (!query.exec(queryString)) {
        qDebug() << "Error creating CALO_OUT table:" << query.lastError().text();
        return false;
    }

    // Thêm các lệnh tạo bảng khác vào đây nếu cần

    // Thêm dữ liệu vào bảng THUCPHAM
    queryString = "INSERT INTO THUCPHAM (MaTP, TenTP, Don_vi_tinh, Luong_Calo_moi_100donvi) "
                  "VALUES "
                  "(1, 'Thit uc ga', 'gram', 144), "
                  "(2, 'Ca hoi', 'gram', 142), "
                  "(3, 'Gao trang', 'gram', 82), "
                  "(4, 'Banh mi', 'gram', 265), "
                  "(5, 'Trung ga', 'gram', 88), "
                  "(6, 'Dau olive', 'ml', 884), "
                  "(7, 'Sua tuoi', 'ml', 60), "
                  "(8, 'Bap cai xanh', 'gram', 25), "
                  "(9, 'Ca chua', 'gram', 23), "
                  "(10, 'Dua hau', 'gram', 30)";
    if (!query.exec(queryString)) {
        qDebug() << "Error inserting data into THUCPHAM table:" << query.lastError().text();
        return false;
    }

    // Thêm dữ liệu vào bảng BAITAP
    queryString = "INSERT INTO BAITAP (MaBT, TenBT, Luong_Calo_moi_60p) "
                  "VALUES "
                  "(1, 'Chay bo', 400), "
                  "(2, 'Boi loi', 500), "
                  "(3, 'Dap xe', 300), "
                  "(4, 'Yoga', 200), "
                  "(5, 'Bai tap the duc tong hop', 350)";
    if (!query.exec(queryString)) {
        qDebug() << "Error inserting data into BAITAP table:" << query.lastError().text();
        return false;
    }

    return true;
}

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    // Khai báo và cấu hình cơ sở dữ liệu
    QSqlDatabase& mydb = DatabaseManager::getDatabase();

    if (!mydb.open()) {
        // Xử lý lỗi kết nối cơ sở dữ liệu
        qDebug() << "Khong the ket noi CSDL:" << mydb.lastError();
        return -1;
    }

    if (!createTablesIfNeeded()) {
        qDebug() << "Failed to create tables.";
        return -1;
    }
/*
    // Kiểm tra bảng NGUOIDUNG
    QSqlQuery query(mydb);
    query.exec("SELECT COUNT(*) FROM NGUOIDUNG");
    query.next();
    int count = query.value(0).toInt();
    if (count == 0) {
        InputDialog inputDialog;

        // Tạo con trỏ MainWindow
        MainWindow* mainWindow = new MainWindow;

        // Kết nối tín hiệu saveButtonClicked của inputDialog tới một khe cắm (slot)
        QObject::connect(&inputDialog, &InputDialog::saveButtonClicked, [&]() {

            // Đóng inputDialog
            inputDialog.close();

            // Hiển thị MainWindow
            mainWindow->show();
        });

        inputDialog.exec(); // Hiển thị inputdialog
    } else {
        // Bảng NGUOIDUNG có dữ liệu, mở MainWindow
*/
        MainWindow mainWindow;
        mainWindow.show();

    // Chạy vòng lặp sự kiện chính
    return app.exec();
}
