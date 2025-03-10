#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_btn_0_clicked();
    void on_btn_1_clicked();
    void on_btn_2_clicked();
    void on_btn_3_clicked();
    void on_btn_4_clicked();
    void on_btn_5_clicked();
    void on_btn_6_clicked();
    void on_btn_7_clicked();
    void on_btn_8_clicked();
    void on_btn_9_clicked();

    void on_btn_rst_clicked();

    void on_btn_div_clicked();

    void on_btn_mul_clicked();

    void on_btn_add_clicked();

    void on_btn_sub_clicked();

    void on_btn_eq_clicked();

    void on_btn_sing_clicked();

    void on_btn_decimal_clicked();

    void on_btn_backSpace_clicked();

    void on_btn_percentage_clicked();

    void on_btn_mem_clicked();

    void on_btn_memRecall_clicked();

    void on_btn_memClr_clicked();

private:
    Ui::MainWindow *ui;

};
#endif // MAINWINDOW_H
