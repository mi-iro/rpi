#include <QApplication>
#include "widget.h"
#include"conf.h"


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Widget w;
    a.exec();
    return 0;
}