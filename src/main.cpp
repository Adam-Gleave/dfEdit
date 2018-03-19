#include "dfedit.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    DfEdit w;
    w.show();

    return a.exec();
}
