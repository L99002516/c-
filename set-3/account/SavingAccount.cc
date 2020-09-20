#include "SavingsAccount.h"

#include<iostream>

SavingsAccount::SavingsAccount() :AccountBase(){

        m_accNumber="0";
        m_accName="0";
        m_balance=0;

}

SavingsAccount::SavingsAccount(std::string x, std::string y, double z):AccountBase(x,y,z) {

            m_accNumber="x";
        m_accName="y";
        m_balance=z;


};

//SavingsAccount::SavingsAccount(std::string x, std::string y) :m_accNumber("x"), m_accName("y") {};

void SavingsAccount::debit(double amount) {
	m_balance -= amount;

}

void SavingsAccount::credit(double amount1) {
	m_balance += amount1;

}

/*void SavingsAccount::display() {
	std::cout << m_accBalance <<std::endl;
}*/
