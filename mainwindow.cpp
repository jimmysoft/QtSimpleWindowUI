#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "iostream"
#include <QRect>
#include <QApplication>
#include <QDesktopWidget>


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
//    ui->setupUi(this);


    QRect screenGeometry = QApplication::desktop()->screenGeometry();
    int x;
    int y;


    simpleWindowui = new SimpleWindow();

    simpleWindowui->setWindowTitle("Simple UI");
    simpleWindowui->SetMainWindow(this);
    x = ( (screenGeometry.width()  )  - ( simpleWindowui->width()  ) ) / 2;
    y = ( (screenGeometry.height() )  - ( simpleWindowui->height() ) ) / 2;
    simpleWindowui->move(x, y);
    simpleWindowui->show();


    simpleWindowWithVideoui = new SimpleWindowWithVideo();

    simpleWindowWithVideoui->setWindowTitle("Simple with Video UI");
    simpleWindowWithVideoui->SetMainWindow(this);
    x = ( (screenGeometry.width()  )  - ( simpleWindowWithVideoui->width()  ) ) / 2;
    y = ( (screenGeometry.height() )  - ( simpleWindowWithVideoui->height() ) ) / 2;
    simpleWindowWithVideoui->move(x, y);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::ShowWindows(int type)
{
    switch(type){
        case 1 :
            simpleWindowui->show();
            simpleWindowWithVideoui->hide();
            break;
        case 2 :
            simpleWindowui->hide();
            simpleWindowWithVideoui->show();
            break;
    }
}
