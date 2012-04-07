#include "CanvasWidget.h"
#include "MyApplication.h"
#include "MyCanvasView.h"

MyCanvasView::MyCanvasView() : 
        canvas(new CanvasWidget()), 
        text("Default") {
    Logger::logConstructor("MyCanvasView");
}

MyCanvasView::~MyCanvasView() {
    Logger::logDestructor("MyCanvasView");
    //delete canvas;
}

QWidget* MyCanvasView::container() const {
    return canvas;
}

void MyCanvasView::setText(const std::string& text) {
    this->canvas->setText(text);
}