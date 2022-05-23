//Kirin Hardinger
//May 22 2022

#ifndef BAG_H
#define BAG_H

#include "i_bag.h"
#include <bits/stdc++.h>

template <typename T>
class Bag : public I_Bag<T> {
private:
    std::vector<T> items;
public:
    //constructor and destructor
    Bag() {}
    ~Bag() {}

    //overridden functions from I_Bag interface
    int numItems() override;
    bool isEmpty() override;
    void add(T item) override;
    void remove(T item) override;
    void clear() override;
    int numOccurrences(T item) override;
    bool isPresent(T item) override;
    std::vector<T> toVector() override;
};

#include "bag.cpp"
#endif //BAG_H