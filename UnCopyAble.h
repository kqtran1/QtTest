#ifndef UNCOPYABLE_H
#define	UNCOPYABLE_H

class UnCopyable {
protected:
    UnCopyable(){};
    ~UnCopyable(){};
    
private:
    UnCopyable(const UnCopyable& orig);
    UnCopyable & operator=(const UnCopyable&);
};

#endif