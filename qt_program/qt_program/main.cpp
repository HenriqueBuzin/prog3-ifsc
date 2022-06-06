#include "mainwindow.h"

#include <QApplication>
#include <QLocale>
#include <QTranslator>
#include <QtWidgets>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QTranslator translator;
    const QStringList uiLanguages = QLocale::system().uiLanguages();
    for (const QString &locale : uiLanguages) {
        const QString baseName = "qt_program_" + QLocale(locale).name();
        if (translator.load(":/i18n/" + baseName)) {
            a.installTranslator(&translator);
            break;
        }
    }


    QWidget * wdg = new QWidget();
    QVBoxLayout *vlay = new QVBoxLayout(wdg);
    QPushButton *btn1 = new QPushButton("btn1");
    vlay->addWidget(btn1);
    QPushButton *btn2 = new QPushButton("btn2");
    vlay->addWidget(btn2);
    QPushButton *btn3 = new QPushButton("btn3");
    vlay->addWidget(btn3);
    wdg->setLayout(vlay);

    wdg->show();


    MainWindow w;
    w.show();
    return a.exec();
}
