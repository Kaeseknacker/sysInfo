#include "MainWindow.h"
#include "ui_MainWindow.h"

#include <QDebug>
#include "SysInfo.h"


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow),
    mCpuWidget(this) {

    ui->setupUi(this);
    SysInfo::instance().init();
    ui->centralWidget->layout()->addWidget(&mCpuWidget);
}


MainWindow::~MainWindow() {
    delete ui;
}
