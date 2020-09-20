
#include "Account.h"
#include<iostream>

using namespace std;

AccountBase::AccountBase() :m_accNumber(""), m_accName(""),m_balance(0) {};


AccountBase::AccountBase(std::string x, std::string y,double z) :m_accNumber("x"), m_accName("y"),m_balance(z) {};
AccountBase::AccountBase(const AccountBase & ref) {
	m_accNumber = ref.m_accNumber;
	m_accName = ref.m_accName;
	m_balance = ref.m_balance;
}
double AccountBase::getBalance() {

	return m_balance;
}

void AccountBase::debit(double amount) {
	m_balance -= amount;

}

void AccountBase::credit(double amount1) {
	m_balance += amount1;

}

/*void AccountBase::display() {
	cout << "m_"<< endl;

}*/
