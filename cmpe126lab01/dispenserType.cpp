//
//  dispenserType.cpp
//  cmpe126lab01
//
//  Created by Vishnu Anilkumar on 2/2/23.
//

#include "dispenserType.h"


DispenserType::DispenserType() {//default constructor
  numberOfItems = 15;
  cost = 2;
}

DispenserType::DispenserType(int set_items, int set_cost){//constructor with parameters
    if (set_items >= 0)//sets drink count and cost to user input
        numberOfItems = set_items;
    else
        numberOfItems = 15;
    if (set_cost >= 0)
        cost = set_cost;
    else
        cost = 35;
}
int DispenserType::get_no_of_items() const {//function to return number of drinks
  return numberOfItems;
}

int DispenserType::get_cost() const {//function to return cost
  return cost;
}

void DispenserType::make_purchase() {//when drink is purchased, reduce number of drinks
  numberOfItems--;
}

