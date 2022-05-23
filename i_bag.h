//Kirin Hardinger
//May 22 2022

#ifndef I_BAG_H 
#define I_BAG_H

#include <vector>

template <typename T>
class I_Bag {
public:
    virtual int numItems() = 0;
    virtual bool isEmpty() = 0;
    virtual void add(T item) = 0;
    virtual void remove(T item) = 0;
    virtual void clear() = 0;
    virtual int numOccurrences(T item) = 0;
    virtual bool isPresent(T item) = 0;
    virtual std::vector<T> toVector() = 0;
    virtual ~I_Bag() {}
};

#include "i_bag.cpp"

#endif //I_BAG_H