#ifndef INPUTDIALOG_H
#define INPUTDIALOG_H

#include <QDialog>
#include <QtSql>
#include <QDebug>
#include <QFileInfo>
#include <include/personalinfo.h>

namespace Ui {
class InputDialog;
}

class InputDialog : public QDialog
{
    Q_OBJECT

public:
    explicit InputDialog(QWidget *parent = nullptr);
    ~InputDialog();

private slots:
    void onSaveButtonClicked();

private:
    Ui::InputDialog *ui;
    QSqlDatabase mydb;
};

#endif // INPUTDIALOG_H
