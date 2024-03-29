﻿#ifndef CHART_ROUND_H
#define CHART_ROUND_H
#include "chart_base.h"

class Chart_Ellipse : public Chart_Base
{
private:
    virtual void paintChart(QPainter & p);

public:
    Chart_Ellipse(QWidget *parent = nullptr, PAINT_CHART_TYPE type = PAINT_CHART_TYPE::ELLIPSE) : Chart_Base(parent,type,false,true,4,0,0){}
    Chart_Ellipse(Chart_Ellipse &cr):Chart_Base(cr){}
    Chart_Ellipse( int x1, int y1, int x2, int y2, QWidget *parent = nullptr,PAINT_CHART_TYPE type = PAINT_CHART_TYPE::ELLIPSE) : Chart_Base(x1,y1,x2,y2,parent,type){}
    ~Chart_Ellipse(){}
};

#endif // CHART_ROUND_H
