#include "CreditAccount.h"
#include "Account.h"

CreditAccount::CreditAccount() :AccountBase(){

        m_accNumber="0";
        m_accName="0";
        m_balance=0;

}

CreditAccount::CreditAccount(std::string x, std::string y, double z) :AccountBase(x,y,z){

        m_accNumber="x";
        m_accName="y";
        m_balance=z;


}

void CreditAccount::debit(double amount) {
	m_balance -= amount;

}

void CreditAccount::credit(double amount1) {
	m_balance += amount1;

}

/*void CreditAccount::display() {
	cout << m_accBalance << endl;

}*/
