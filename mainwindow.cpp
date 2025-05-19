#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QDebug>
#include <QTimer>
#include <QIntValidator>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ui->layoutSetting->setAlignment(Qt::AlignTop);
    ui->lineCount->setValidator(new QIntValidator(1, 10000, this));
    ui->lineTime->setValidator(new QIntValidator(10, 60000, this));
    ui->lineMin->setValidator(new QIntValidator(0, 99999, this));
    ui->lineMax->setValidator(new QIntValidator(1, 99999, this));

    QTimer *timer = new QTimer(this);
    connect(timer, &QTimer::timeout, this, &MainWindow::generateRandomData);

    // QVector<Input> data = generateRandomData();
    // QVector<double> x, y;
    // for(Input item : data){
    //     qDebug() << item.x << ", " << item.y;
    //     x.append(item.x);
    //     y.append(item.y);
    // }

    ui->plot->addGraph();

    x = new QVector<double>;
    y = new QVector<double>;
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::generateRandomData(){
    ui->plot->graph(0)->setData(*x, *y);
    ui->plot->graph(0)->setScatterStyle(QCPScatterStyle(QCPScatterStyle::ssCircle, 3));
    ui->plot->xAxis->setLabel("x");
    ui->plot->yAxis->setLabel("y");
    ui->plot->rescaleAxes();
    ui->plot->setInteraction(QCP::iRangeDrag, this);
    ui->plot->setInteraction(QCP::iRangeZoom, this);
    ui->plot->setSelectionRectMode(QCP::srmZoom);
    ui->plot->axisRect()->setRangeDragAxes(ui->plot->xAxis, ui->plot->yAxis);
    ui->plot->axisRect()->setRangeDrag(Qt::Horizontal | Qt::Vertical);
    ui->plot->setMultiSelectModifier(Qt::ControlModifier);
    ui->plot->axisRect()->setRangeZoom(Qt::Horizontal | Qt::Vertical);
    ui->plot->replot();
}

void MainWindow::on_btnGenerate_clicked()
{
    count = ui->lineCount->text().toInt();
    min = ui->lineMin->text().toInt();
    max = ui->lineMax->text().toInt();

    for (int i = min; i < max; ++i) {
        int value = QRandomGenerator::global()->bounded(min, max + 1);
        x->append(i);
        y->append(value);
    }

    generateRandomData();
}

