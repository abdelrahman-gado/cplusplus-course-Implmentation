#ifndef ACCOUNT_UTIL_H
#define ACCOUNT_UTIL_H

#include <vector>
#include "Account.h"
#include "Savings_Account.h"
#include "Checking_Account.h"
#include "Trust_Account.h"

// Utility helper functions for Account class
void display (const std::vector<Account> &accounts);
void deposit (std::vector<Account> &accounts, double amount);
void withdraw (std::vector<Account> &accounts, double amount);



// Utility helper functions for Savings_Account class
void display (const std::vector<Savings_Account> &accounts);
void deposit (std::vector<Savings_Account> &accounts, double amount);
void withdraw (std::vector<Savings_Account> &accounts, double amount);



// Utility helper functions for Checking_Account class
void display (const std::vector<Checking_Account> &accounts);
void deposit (std::vector<Checking_Account> &accounts, double amount);
void withdraw (std::vector<Checking_Account> &accounts, double amount);



// Utility helper functions for Trust_Account class
void display (const std::vector<Trust_Account> &accounts);
void deposit (std::vector<Trust_Account> &accounts, double amount);
void withdraw (std::vector<Trust_Account> &accounts, double amount);


 

#endif // ACCOUNT_UTIL_H