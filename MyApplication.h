#ifndef MYAPPLICATION_H
#define	MYAPPLICATION_H

#include <QtCore/QObject>

#include "utils.h"

class MyApplication {
  
public:
    MyApplication();
    virtual ~MyApplication();
    
    int run(int argc, char *argv[]);
};

#endif

