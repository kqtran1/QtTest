#include "MyCanvasView.h"
#include "CanvasWidget.h"
#include "MyApplication.h"

MyCanvasView::MyCanvasView() : 
        panel(new QDockWidget(QWidget::tr("MyCanvasView"))),
        canvas(new CanvasWidget()), 
        text("Default") {
    Logger::logConstructor("MyCanvasView");
    panel->setWidget(canvas);
}

MyCanvasView::~MyCanvasView() {
    Logger::logDestructor("MyCanvasView");
    //delete canvas;
}

QWidget* MyCanvasView::container() const {
    return canvas;
}

QDockWidget* MyCanvasView::dockContainer() const {
    return panel;
}

void MyCanvasView::setText(const std::string& text) {
    this->canvas->setText(text);
}