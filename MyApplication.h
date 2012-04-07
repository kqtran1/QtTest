#ifndef MYAPPLICATION_H
#define	MYAPPLICATION_H

#include "utils.h"

#include <QtCore/QObject>
#include <boost/utility.hpp>

class MyApplication : public boost::noncopyable {
  
public:
    MyApplication();
    virtual ~MyApplication();
    
    int run(int argc, char *argv[]);
};

#endif

