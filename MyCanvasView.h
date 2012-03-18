#ifndef MYCANVASVIEW_H
#define	MYCANVASVIEW_H

#include "View.h"
#include "utils.h"
#include "CanvasWidget.h"

#include <QtGui/QWidget>
#include <QtGui/QDockWidget>
#include <QtGui/QMainWindow>
#include <string>

class MyCanvasView : public View {
public:
    MyCanvasView();
    virtual ~MyCanvasView();
    
    virtual QWidget* container() const;
    QDockWidget* dockContainer() const;
    
    void setText(const std::string &text);
    
private:
    QDockWidget *panel;
    CanvasWidget *canvas;
    std::string text;
};

#endif