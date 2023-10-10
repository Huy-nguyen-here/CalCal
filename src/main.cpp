#include <QApplication>
#include "include/inputdialog.h"

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);

    InputDialog inputDialog;
    inputDialog.show();

    return app.exec();
}
