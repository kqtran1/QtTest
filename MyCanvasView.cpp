#include "CanvasWidget.h"
#include "MyApplication.h"
#include "MyCanvasView.h"

MyCanvasView::MyCanvasView(BondTableModel * model) :
tableView(new QTableView()),
model(model),
text("Default") {
    Logger::logConstructor("MyCanvasView");
    tableView->setModel(model);
    tableView->setMinimumSize(400, 400);
}

MyCanvasView::~MyCanvasView() {
    Logger::logDestructor("MyCanvasView");
}

QWidget* MyCanvasView::container() const {
    return tableView;
}

void MyCanvasView::addBondData(const BondData & bondData) {
    std::cout << "add bond data" << std::endl;
    this->model->addBondData(bondData);
}