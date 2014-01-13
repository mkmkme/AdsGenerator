#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
//    QTextCodec::setCodecForTr(QTextCodec::codecForName("UTF-8"));
    srand(time(0));
    this->statusBar()->setSizeGripEnabled(false);
    ui->setupUi(this);
    ui->label->setStyleSheet("background-image: url(:/res/res/" + QString::number(rand() % 9) + ".jpeg)");
    ui->textlabel->setText(QObject::tr(s_to_pacc1b().c_str()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    ui->label->setStyleSheet("background-image: url(:/res/res/" + QString::number(rand() % 9) + ".jpeg)");
    ui->textlabel->setText(QObject::tr(s_to_pacc1b().c_str()));
}
