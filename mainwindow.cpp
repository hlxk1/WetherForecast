#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // 设置窗体无状态栏
//    setWindowFlag(Qt::FramelessWindowHint);
//    // 设左键弹窗关闭
//    menuQuit = new QMenu(this);
//    QAction *closeAct = new QAction(QIcon(":/new/prefix1/img/closewindow.png"),tr("exit"),this);
//    menuQuit->addAction(closeAct);
//    // 连接信号
//    connect(menuQuit,&QMenu::triggered,this,[=]{
//        this->close();
//    });

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::mouseClickEvent(QMouseEvent *event)
{
    if(event->button()==Qt::RightButton){
        menuQuit->exec(QCursor::pos());
    }
}

