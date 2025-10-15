#include "mainwindow.h"

#include <QApplication>
#include <QScreen>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    QScreen* screen = QGuiApplication::primaryScreen();
    QRect screenGeometry = screen->availableGeometry();
    int width = screenGeometry.width();
    int height = screenGeometry.height();
    //w.show();
    w.resize(width, height);       // optional: start maximized
    w.showMaximized();
    return a.exec();
}
