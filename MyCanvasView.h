#ifndef MYCANVASVIEW_H
#define	MYCANVASVIEW_H

#include "CanvasWidget.h"
#include "utils.h"

#include "mvp/View.h"
#include <QtGui/QWidget>
#include <QtGui/QMainWindow>

#include <boost/shared_ptr.hpp>
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

typedef boost::shared_ptr<MyCanvasView> MyCanvasViewPtr;

#endif