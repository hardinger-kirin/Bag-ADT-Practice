//Kirin Hardinger
//May 22 2022

#include "bag.h"

template <typename T>
int Bag<T>::numItems() {
    return items.size();
}

template <typename T>
bool Bag<T>::isEmpty() {
    return items.empty();
}

template <typename T>
void Bag<T>::add(T item) {
    items.push_back(item);
    return;
}

template <typename T>
void Bag<T>::remove(T item) {
    typename std::vector<T>::iterator toRemove = std::find(items.begin(), items.end(), item);

    if (toRemove != items.end()) {
        items.erase(toRemove);
    } else {
        return;
    }
}

template <typename T>
void Bag<T>::clear() {
    items.clear();
    return;
}

template <typename T>
int Bag<T>::numOccurrences(T item) {
    return std::count(items.begin(), items.end(), item);
}

template <typename T>
bool Bag<T>::isPresent(T item) {
    typename std::vector<T>::iterator found = std::find(items.begin(), items.end(), item);
    
    if (found != items.end()) {
        return true;
    } else {
        return false;
    }
}

template <typename T>
std::vector<T> Bag<T>::toVector() {
    std::vector<T> temp;
    temp = items;
    return temp;
}
