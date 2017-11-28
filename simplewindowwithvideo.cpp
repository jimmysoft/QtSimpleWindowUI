#include "simplewindowwithvideo.h"
#include "ui_simplewindowwithvideo.h"
#include "mainwindow.h"


SimpleWindowWithVideo::SimpleWindowWithVideo(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::SimpleWindowWithVideo)
{
    ui->setupUi(this);
}

SimpleWindowWithVideo::~SimpleWindowWithVideo()
{
    delete ui;
}

void SimpleWindowWithVideo::on_buttonEngineerMode_clicked()
{
    mainWindow->ShowWindows(1);
}

void SimpleWindowWithVideo::SetMainWindow(MainWindow* mainWindow)
{
    this->mainWindow = mainWindow;
}
