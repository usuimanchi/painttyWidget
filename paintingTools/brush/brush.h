#ifndef BRUSH_H
#define BRUSH_H

#include "abstractbrush.h"

class Brush : public AbstractBrush
{
public:
    Brush();
    ~Brush();
    int width();
    void setWidth(int w);
    int hardness();
    void setHardness(int h);
    QColor color();
    void setColor(const QColor &color);
    QVariantMap defaultInfo();
    QVariantMap brushInfo();

protected:
    QPixmap stencil;
    int width_;
    void drawPoint(const QPointF &st);
    void drawLine(const QPointF &st, const QPointF &end, qreal &left);
    bool loadStencil(const QString &fileName);
    void makeStencil();
};

#endif // BRUSH_H
