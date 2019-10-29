#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

class DuPlot;

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

private slots:
    void on_AdoubleSpinBox_valueChanged(double a);
    void on_BdoubleSpinBox_valueChanged(double b);
    void on_CdoubleSpinBox_valueChanged(double c);

    void on_pushButton_clicked();

private:
    void pinta();
    double funcionCuadratica(double x)const;
    Ui::Widget *ui;
    DuPlot *mFuncionCuadratica;
    double m_a,m_b,m_c;
    QString formula;
};
#endif // WIDGET_H
