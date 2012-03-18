#ifndef CANVASWIDGET_H
#define	CANVASWIDGET_H

#include "utils.h"

#include <QtGui/QWidget>
#include <QtGui/QPaintEvent>
#include <QtCore/QString>

class CanvasWidget : public QWidget {
public:
    CanvasWidget();
    virtual ~CanvasWidget();
    
    void setText(std::string text);

protected:
    virtual void paintEvent(QPaintEvent *event);

private:
    QString text;
};

#endif