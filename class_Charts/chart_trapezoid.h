﻿#ifndef CHART_TRAPEZOID_H
#define CHART_TRAPEZOID_H
#include "chart_base.h"

class Chart_Trapezoid : public Chart_Base
{
private:
    virtual void paintChart(QPainter& p);
    virtual void updateMagPointInfo();

public:
    Chart_Trapezoid(QWidget* parent = nullptr, PAINT_CHART_TYPE type = PAINT_CHART_TYPE::TRAPEZOID) : Chart_Base(parent, type, false, true, 4, 4, 4) {}
    Chart_Trapezoid(Chart_Trapezoid &cr):Chart_Base(cr){}
    Chart_Trapezoid( int x1, int y1, int x2, int y2, QWidget *parent = nullptr,PAINT_CHART_TYPE type = PAINT_CHART_TYPE::RECT) : Chart_Base(x1,y1,x2,y2,parent,type){}
    ~Chart_Trapezoid(){}
};

#endif // CHART_TRAPEZOID_H
