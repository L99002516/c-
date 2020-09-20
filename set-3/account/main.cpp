//#include "pch.h"
#include "CreditAccount.h"
#include "SavingsAccount.h"
#include "Account.h"
#include<gtest/gtest.h>

#include<iostream>
#include<math.h>
/*TEST(TestCase, Test) {

    CreditAccount s1("1","2",3);
    s1.credit(10);



  EXPECT_EQ(13,s1.getBalance());
  EXPECT_TRUE(true);
}*/
int main()
{   AccountBase *b;
    CreditAccount c1("1","2",56);
    c1=&b;
    b->credit();

}

