#include "calculator.h"
#include "mainwindow.h"
#include "ui_mainwindow.h"

Calculator calc;


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    calc.reset();
}

MainWindow::~MainWindow()
{

    delete ui;
}

void MainWindow::on_btn_0_clicked()
{
    calc.digit(0);
    ui->screen->setText(calc.lcd());
}

void MainWindow::on_btn_1_clicked()
{
    calc.digit(1);
    ui->screen->setText(calc.lcd());
}

void MainWindow::on_btn_2_clicked()
{
    calc.digit(2);
    ui->screen->setText(calc.lcd());
}

void MainWindow::on_btn_3_clicked()
{
    calc.digit(3);
    ui->screen->setText(calc.lcd());
}

void MainWindow::on_btn_4_clicked()
{
    calc.digit(4);
    ui->screen->setText(calc.lcd());
}

void MainWindow::on_btn_5_clicked()
{
    calc.digit(5);
    ui->screen->setText(calc.lcd());
}

void MainWindow::on_btn_6_clicked()
{
    calc.digit(6);
    ui->screen->setText(calc.lcd());
}

void MainWindow::on_btn_7_clicked()
{
    calc.digit(7);
    ui->screen->setText(calc.lcd());
}

void MainWindow::on_btn_8_clicked()
{
    calc.digit(8);
    ui->screen->setText(calc.lcd());
}

void MainWindow::on_btn_9_clicked()
{
    calc.digit(9);
    ui->screen->setText(calc.lcd());
}

void MainWindow::on_btn_rst_clicked()
{
    calc.reset();
    ui->screen->setText(calc.lcd());
}

void MainWindow::on_btn_div_clicked()
{
    calc.operation(4);
}

void MainWindow::on_btn_mul_clicked()
{
    calc.operation(3);
}

void MainWindow::on_btn_add_clicked()
{
    calc.operation(1);
}


void MainWindow::on_btn_sub_clicked()
{
    calc.operation(2);
}


void MainWindow::on_btn_eq_clicked()
{
    calc.calculate();
    ui->screen->setText(calc.lcd());
}


void MainWindow::on_btn_sing_clicked()
{
    calc.changeSign();
    ui->screen->setText(calc.lcd());
}

