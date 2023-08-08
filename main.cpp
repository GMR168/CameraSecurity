#include "frmmain.h"
#include <QApplication>
#include <QFile>
#include <QTextCodec>
#include <QDesktopWidget>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);   

    frmMain w;
    //设置窗体居中显示
    QDesktopWidget desktop;
    int screenX=desktop.availableGeometry().width();
    int screenY=desktop.availableGeometry().height();
    int frmX=w.width();
    int frmY=w.height();
    QPoint movePoint(screenX/2-frmX/2,screenY/2-frmY/2);
    w.move(movePoint);    
    w.show();

    return a.exec();
}
