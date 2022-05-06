#ifndef TRANSACTIONDATA_H 
#define TRANSACTIONDATA_H
#include <iostream>
#include <ctime>
struct  TransactionData
{
    double amount;
    std::string senderKey;
    std::string reviverKey;
    time_t timestemp;
};
#endif