#ifndef UTILS_H
#define	UTILS_H

#include <boost/shared_ptr.hpp> 
#include <iostream>
#include <string>

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