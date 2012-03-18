#ifndef UTILS_H
#define	UTILS_H

#include <iostream>
#include <string>
#include <boost/shared_ptr.hpp> 

class Logger {
public:
    static void logConstructor(const std::string& message) {
        std::cout << message << " Constructor" << std::endl;
    }
    
    static void logDestructor(const std::string& message) {
        std::cout << message << " Destructor" << std::endl;
    }
};

#endif