#include "mainwindow.h"
#include "menu.h"

#include <QApplication>
#include <QFontDatabase>
#include <QTextEdit>
#include <QDebug>

#ifdef _WIN32

// 注意这个 windows.h 是从 Qt Tools 的 Mingw 工具集中引入的而不是 Msvc，Qt 肯定也遇到了同样的问题，因此在 Qt Creator 的终端中做了类似处理。因此没有安装 Msvc 编译器这里一样能编过。
#include <windows.h>

#endif


int main(int argc, char *argv[])
{
#ifdef _WIN32

    // 将标准输出和标准错误输出重定向到 Windows 控制台
    if (AttachConsole(ATTACH_PARENT_PROCESS))
    {
        freopen("CONOUT$", "w", stdout);
        freopen("CONOUT$", "w", stderr);
    }

#endif


    QApplication a(argc, argv);
    Menu w;
    w.show();

    qDebug() << "This is a mine-sweeper program.";


    return a.exec();
}
