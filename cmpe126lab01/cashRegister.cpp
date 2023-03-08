//
//  cashRegister.cpp
//  cmpe126lab01
//
//  Created by Vishnu Anilkumar on 2/2/23.
//

#include "cashRegister.h"

CashRegister::CashRegister() {//default constructor
    cash = 10;
}

CashRegister::CashRegister(int money){//constructor with parameter
    if (money >= 0)//user can input amount of money
        cash = money;
    else
        cash = 10;
}

int CashRegister::get_balance() const {//function to return balance in register
  return cash;
}

void CashRegister::receive_payment(int payment) {//function to add user payment to reg.
    cash = cash + payment;
}
