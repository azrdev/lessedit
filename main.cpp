#include <QApplication>
#include "mainwindow.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QCoreApplication::setOrganizationName("atomic.batcave.net");
    QCoreApplication::setApplicationName("LessEdit");
    QIcon icon(":/icon.png");
    tdMainWindow w;
    w.setWindowIcon(icon);
    w.show();
    return a.exec();
}
