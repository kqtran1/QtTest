#include "CanvasWidget.h"
#include "utils.h"

#include <QtGui/QPainter>

CanvasWidget::CanvasWidget(): text("Default") {
    Logger::logConstructor("CanvasWidget");
}

CanvasWidget::~CanvasWidget() {
    Logger::logDestructor("CanvasWidget");
}

void CanvasWidget::paintEvent(QPaintEvent* event) {
    QPainter painter(this);
    painter.setPen(Qt::blue);
    painter.setFont(QFont("Arial", 30));
    painter.drawText(rect(), Qt::AlignCenter, text);
}

void CanvasWidget::setText(std::string text) {
    this->text = QString::fromStdString(text);
    this->update();
}

