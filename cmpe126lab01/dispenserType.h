//
//  dispenserType.hpp
//  cmpe126lab01
//
//  Created by Vishnu Anilkumar on 2/2/23.
//

#ifndef dispenserType_h
#define dispenserType_h

#include <stdio.h>


class DispenserType {
    private:
        int numberOfItems;//items in the vending machine
        int cost;//cost per drink
    public:
        DispenserType();//default constructor
        DispenserType(int set_item, int set_cost);//constructor with parameters (sets number of drinks and cost)
        int get_no_of_items() const;//getter for number of drinks
        int get_cost() const;//getter for cost of drink
        void make_purchase();//dispense drink and lower inventory size
};


#endif /* dispenserType_hpp */
