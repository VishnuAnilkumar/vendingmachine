//
//  cashRegister.hpp
//  cmpe126lab01
//
//  Created by Vishnu Anilkumar on 2/2/23.
//

#ifndef cashRegister_hpp
#define cashRegister_hpp

#include <stdio.h>

class CashRegister {
    private:
        int cash;
    public:
        CashRegister();//default constructor
        CashRegister(int money);//constructor with parameter
        int get_balance() const;//function to show the current amount in the register
        void receive_payment(int payment);//function to recieve amount deposited by customer and updated amount in register
};


#endif/* cashRegister_hpp */
