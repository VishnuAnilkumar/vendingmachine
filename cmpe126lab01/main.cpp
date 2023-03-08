//
//  main.cpp
//  cmpe126lab01
//
//  Created by Vishnu Anilkumar on 2/2/23.
//

#include <iostream>
#include "cashRegister.h"
#include "dispenserType.h"

using namespace std;

void selection();//function to show and select drink
void sell_drink(DispenserType& drink, CashRegister& cash_register);//function to sell drink

void selection() {
    cout << "Welcome to the Fruit Juice Vending Machine!" << endl;
    cout << "To select a drink, please enter " << endl;
    cout << "1 for apple juice" << endl;
    cout << "2 for orange juice" << endl;
    cout << "3 for mango lassi" << endl;
    cout << "4 for fruit punch" << endl;
    cout << "0 to exit vending machine" << endl;
};

void sell_drink(DispenserType& drink, CashRegister& cash_register) {
    int cash_entered;//amount of money user inputs
    int cash_remaining;//amount of money left for purchase
    if (drink.get_no_of_items() > 0) {
        cout << "Please deposit " << drink.get_cost() << " cents" << endl;
        cin >> cash_entered;
        while (cash_entered < drink.get_cost()) {
            cout << "Please deposit another " << drink.get_cost()- cash_entered << " cents" << endl;
            cin >> cash_remaining;
            cash_entered = cash_entered + cash_remaining;
        }
        if (cash_entered >= drink.get_cost()) {
            if (cash_entered > drink.get_cost()){
                cash_register.receive_payment(cash_entered);
                drink.make_purchase();
                cout << "Your change is " << cash_entered - drink.get_cost() << " cents." << endl;//user is given change if money entered is greater
            }
            cash_register.receive_payment(cash_entered);
            drink.make_purchase();
            cout << "Drink has been dispensed. Enjoy!" << endl;
            
        }
        else
            cout << "The amount is not enough. " << "Please come back with more cash" <<   endl;
        }
        else
            cout << "ITEM SOLD OUT." << endl;
        }

int main() {
    CashRegister counter;//object of class CashRegister
    DispenserType appleJuice(100, 50);//drink objects with number of items and price
    DispenserType orangeJuice(100, 65);
    DispenserType mangoLassi(75, 45);
    DispenserType fruitPunch(100, 85);
    int choice; //variable to hold the selection
    selection();
    cin >> choice;
    while (choice != 0){//for repeated purchases
        switch (choice) {//switch statement for each drink scenario
            case 1:
                sell_drink(appleJuice, counter);
                break;
            case 2:
                sell_drink(orangeJuice, counter);
                break;
            case 3:
                sell_drink(mangoLassi, counter);
                break;
            case 4:
                sell_drink(fruitPunch, counter);
                break;
            default:
                cout << "Please select from an option above." << endl;
        }
        selection();
        cin >> choice;
    }
    return 0;
}
