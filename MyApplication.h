#ifndef MYAPPLICATION_H
#define	MYAPPLICATION_H

#include "UnCopyAble.h"
#include "utils.h"

#include <QtCore/QObject>

class MyApplication : public UnCopyable {
  
public:
    MyApplication();
    virtual ~MyApplication();
    
    int run(int argc, char *argv[]);
};

#endif

