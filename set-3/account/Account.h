#ifndef __ACCOUNT_H
#define __ACCOUNT_H

#include<string>

class AccountBase {

  public:
    std::string m_accNumber;
  std::string m_accName;
  double m_balance;
  AccountBase();
  AccountBase(std::string,std::string,double);
  AccountBase(std::string,std::string);
  AccountBase(const AccountBase& ref);
  virtual void debit(double)=0;
  virtual void credit(double)=0;
//  virtual void display() const = 0;
  double getBalance() ;
};

#endif

