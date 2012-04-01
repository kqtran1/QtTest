#ifndef MYCANVASVIEW_H
#define	MYCANVASVIEW_H

#include "View.h"
#include "utils.h"
#include "CanvasWidget.h"

#include <QtGui/QWidget>
#include <QtGui/QMainWindow>
#include <string>

class MyCanvasView : public View {
public:
    MyCanvasView();
    virtual ~MyCanvasView();
    
    virtual QWidget* container() const;
    
    void setText(const std::string &text);
    
private:
    CanvasWidget *canvas;
    std::string text;
};

#endif