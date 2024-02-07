#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    MainWindow::makePlot();

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_widget_customContextMenuRequested(const QPoint &pos)
{

}

void MainWindow::makePlot()
{
    // create graph and assign data to it:
    ui->customPlot->addGraph();
    // give the axes some labels:
    ui->customPlot->xAxis->setLabel("x");
    ui->customPlot->yAxis->setLabel("y");
    // set axes ranges, so we see all data:
    ui->customPlot->xAxis->setRange(-1, 1);
    ui->customPlot->yAxis->setRange(0, 1);
    ui->customPlot->replot();
}

void MainWindow::on_frame_3_windowIconTextChanged(const QString &iconText)
{

}

void MainWindow::on_radioButton_clicked()
{
    ui->myLabel->setText("WYKRES FUNKCJI LINIOWEJ");

    // generate some data:
    QVector<double> x(101), y(101); // initialize with entries 0..100
    for (int i=0; i<101; ++i)
    {
        x[i] = i/50.0 - 1; // x goes from -1 to 1
        y[i] = 2*x[i] + 1; // let's plot a linear function with slope=2 and intercept=1
    }

    // create graph and assign data to it:
    ui->customPlot->addGraph();
    ui->customPlot->graph(0)->setData(x, y);

    // give the axes some labels:
    ui->customPlot->xAxis->setLabel("x");
    ui->customPlot->yAxis->setLabel("y");

    // set axes ranges, so we see all data:
    ui->customPlot->xAxis->setRange(-1, 1);
    ui->customPlot->yAxis->setRange(0, 4); // adjust y-axis range to fit the linear function

    ui->customPlot->replot();
}

void MainWindow::on_radioButton_2_clicked()
{
    ui->myLabel->setText("WYKRES FUNKCJI SINUSOIDALNEJ");
    // generate some data:
    QVector<double> x(101), y(101); // initialize with entries 0..100
    for (int i=0; i<101; ++i)
    {
        x[i] = i/50.0 - 1; // x goes from -1 to 1
        y[i] = qSin(x[i] * M_PI) * 0.5 + 0.5; // let's plot a sinusoidal function
    }

    // create graph and assign data to it:
    ui->customPlot->addGraph();
    ui->customPlot->graph(0)->setData(x, y);

    // give the axes some labels:
    ui->customPlot->xAxis->setLabel("x");
    ui->customPlot->yAxis->setLabel("y");

    // set axes ranges, so we see all data:
    ui->customPlot->xAxis->setRange(-1, 1);
    ui->customPlot->yAxis->setRange(0, 1);

    ui->customPlot->replot();
}

void MainWindow::on_radioButton_3_clicked()
{


    ui->myLabel->setText("WYKRES FUNKCJI LOGARYTMICZNEJ");
    // generate some data:
    QVector<double> x(101), y(101); // initialize with entries 0..100
    for (int i=0; i<101; ++i)
    {
        x[i] = i/50.0 - 1; // x goes from -1 to 1
        y[i] = qPow(10, x[i] / 2.0); // let's plot a logarithmic function
    }

    // create graph and assign data to it:
    ui->customPlot->addGraph();
    ui->customPlot->graph(0)->setData(x, y);

    // give the axes some labels:
    ui->customPlot->xAxis->setLabel("x");
    ui->customPlot->yAxis->setLabel("y");

    // set axes ranges, so we see all data:
    ui->customPlot->xAxis->setRange(-1, 1);
    ui->customPlot->yAxis->setRange(0, 10);

    ui->customPlot->replot();
}

void MainWindow::on_radioButton_4_clicked()
{


    ui->myLabel->setText("WYKRES FUNKCJI PIERWIASTKOWEJ");
    // generate some data:
    QVector<double> x(101), y(101); // initialize with entries 0..100
    for (int i=0; i<101; ++i)
    {
        x[i] = i/50.0 - 1; // x goes from -1 to 1
        y[i] = qSqrt(x[i] + 1); // let's plot a square root function
    }

    // create graph and assign data to it:
    ui->customPlot->addGraph();
    ui->customPlot->graph(0)->setData(x, y);

    // give the axes some labels:
    ui->customPlot->xAxis->setLabel("x");
    ui->customPlot->yAxis->setLabel("y");

    // set axes ranges, so we see all data:
    ui->customPlot->xAxis->setRange(-1, 1);
    ui->customPlot->yAxis->setRange(0, 1.5);

    ui->customPlot->replot();
}


