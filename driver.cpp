//Kirin Hardinger
//May 22 2022

#include "bag.h"
#include <iostream>

int main() {
    //create a store bag, a grocery bag, and a fragile bag
    Bag<std::string> storebag;
    Bag<std::string> grocerybag;
    Bag<std::string> fragilebag;

    //load up the store bag with the items
    storebag.add("Bread");
    storebag.add("Apple");
    storebag.add("Egg");
    storebag.add("Egg");
    storebag.add("Instant coffee");
    storebag.add("Corn");

    //how many items are in the store bag?
    std::cout << "There are " << storebag.numItems() << " things in the store bag." << std::endl;

    //how many eggs are there in the store bag?
    std::cout << "There are " << storebag.numOccurrences("Egg") << " eggs in the store bag." << std::endl;

    //move fragiles to fragile bag and the rest to grocery bag
    std::vector<std::string> temp = storebag.toVector();
    
    for(int i = 0; i < temp.size(); i++) {
        storebag.remove(temp.at(i));

        if (temp.at(i) == "Egg" || temp.at(i) == "Bread") {
            fragilebag.add(temp.at(i));
        } else {
            grocerybag.add(temp.at(i));
        }
    }

    //is the store bag empty?
    std::cout << "Store bag status (1 empty, 0 not empty): " << storebag.isEmpty() << std::endl;

    //how many items in fragile bag?
    std::cout << "There are " << fragilebag.numItems() << " items in the fragile bag." << std::endl;

    //how many items in grocery bag?
    std::cout << "There are " << grocerybag.numItems() << " items in the grocery bag." << std::endl;

    //are there eggs in the grocery bag?
    std::cout << "Eggs in grocery bag status (1 present, 0 not present): " << grocerybag.isPresent("Egg") << std::endl;

    //unloading all of the bags at home
    fragilebag.clear();
    grocerybag.clear();

    //are the bags empty?
    std::cout << "Store bag status (1 empty, 0 not empty): " << storebag.isEmpty() << std::endl;
    std::cout << "Fragile bag status (1 empty, 0 not empty): " << fragilebag.isEmpty() << std::endl;
    std::cout << "Grocery bag status (1 empty, 0 not empty): " << grocerybag.isEmpty() << std::endl;

    return 0;
}