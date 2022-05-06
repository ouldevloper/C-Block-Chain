#include <iostream>
#include <ctime>
#include <vector>
#include <string>
#include "inc/blockchain.h"
#include "inc/block.h"
#include "inc/transactiondata.h"
using namespace std;
int main(){
    BlockChain Coin;
    BlockChain Coin1;
    BlockChain Coin2;
    TransactionData data;
    TransactionData data1;
    TransactionData data2;
    time_t timestemp;
    data.amount = 1.5;
    data.reviverKey = "joe";
    data.senderKey  = "abdo";
    data.timestemp = time(&timestemp);
    Coin.AddBlock(data);
    time_t timestemp1;
    data1.amount = 1.5;
    data1.reviverKey = "joe";
    data1.senderKey  = "abdo";
    data1.timestemp = time(&timestemp1);
    Coin.AddBlock(data1);
    time_t timestemp2;
    data2.amount = 1.5;
    data2.reviverKey = "joe";
    data2.senderKey  = "abdo";
    data2.timestemp = time(&timestemp2);
    Coin.AddBlock(data2);
    cout <<"Is Chain "<< (Coin.isChainValid()?"Valide!":"Not Valide!")<<endl;
    return 0;
}