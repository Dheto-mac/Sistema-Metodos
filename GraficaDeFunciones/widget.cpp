#include "widget.h"
#include "ui_widget.h"
#include"qcustomplot.h"
#include"DuPlot.h"

#define XMAX +10.0
#define XMIN -10.0
#define YMAX +10.0
#define YMIN -10.0
Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    m_a = 1.0;
    m_b = 0.0;
    m_c = 0.0;
    mFuncionCuadratica  = new DuPlot(ui->customPlot,this);
    ui->customPlot->xAxis->setRange(XMIN,XMAX);
    ui->customPlot->yAxis->setRange(YMIN,YMAX);
    pinta();
}

Widget::~Widget()
{
    delete ui;
}


void Widget::on_AdoubleSpinBox_valueChanged(double a)
{
    m_a = a;
    pinta();
}

void Widget::on_BdoubleSpinBox_valueChanged(double b)
{
    m_b = b;
    pinta();
}

void Widget::on_CdoubleSpinBox_valueChanged(double c)
{
    m_c = c;
    pinta();
}

void Widget::pinta()
{
    QVector<double>valoresX,valoresY;
    for(double ix = XMIN;ix<=XMAX;ix += 0.1)
    {
        valoresX.append(ix);
        valoresY.append(funcionCuadratica(ix));
    }
    mFuncionCuadratica->setX(valoresX);
    mFuncionCuadratica->setY(valoresY);
    mFuncionCuadratica->removeGraph();
    mFuncionCuadratica->drawGraph();
    ui->customPlot->replot();
}

double Widget::funcionCuadratica(double x)const
{
    return m_a*x*x+m_b*x+m_c;
}

void Widget::on_pushButton_clicked()
{

}
