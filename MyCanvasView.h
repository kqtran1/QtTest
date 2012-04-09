#ifndef MYCANVASVIEW_H
#define	MYCANVASVIEW_H

#include "BondTableModel.h"
#include "services/BondPricerService.h"
#include "CanvasWidget.h"
#include "utils.h"

#include "mvp/View.h"
#include <QtGui/QTableView>
#include <QtGui/QWidget>
#include <QtGui/QMainWindow>

#include <boost/shared_ptr.hpp>
#include <string>

class MyCanvasView : public View {
public:
    MyCanvasView(BondTableModel * model);
    virtual ~MyCanvasView();
    
    virtual QWidget* container() const;
    
    void addBondData(const BondData & bondData);
    
private:
    std::string text;
    BondTableModel * model;
    QTableView * tableView;
};

typedef boost::shared_ptr<MyCanvasView> MyCanvasViewPtr;

#endif