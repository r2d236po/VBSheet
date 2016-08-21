#include "prematch.h"
#include "match.h"
#include "teamlistv2.h"
#include "mainwindow.h"
#include <QApplication>
#include <QDebug>
#include <QFileDialog>
#include <QFile>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Match::initmatchSystem();

#if 0
    Match test;
    TeamlistV2 saveWindows(0,&test);
    saveWindows.show();
    a.exec();
#endif

    MainWindow test2;
    test2.show();
    a.exec();
    return 1;
}
