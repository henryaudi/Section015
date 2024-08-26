#include <iostream>

#include "Account.h"
#include "Savings_Account.h"

using namespace std;

int main() {

  cout << "===============ACCOUNT===================";
  cout << endl;

  Account acc {};
  acc.deposit(200.0);
  acc.withdraw(200.0);

  cout << "==================================";
  cout << endl;

  Account *p_acc {nullptr};
  p_acc = new Account();
  p_acc -> deposit(10000.0);
  p_acc -> withdraw(2000.99);
  delete p_acc;

  cout << "============SAVINGS--CCOUNT===============";
  cout << endl;

  Savings_Account sav_acc {};
  sav_acc.deposit(20000000.0);
  sav_acc.withdraw(90000.00);

  cout << "==================================";
  cout << endl;

  Savings_Account *p_sav_acc {nullptr};
  p_sav_acc = new Savings_Account();
  p_sav_acc -> deposit(1000000.00);
  p_sav_acc -> withdraw(200.00);

  return 0;
}