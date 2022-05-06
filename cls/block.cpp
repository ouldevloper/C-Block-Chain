#include <iostream>
#include <ctime>
#include <sstream>
#include <cstdlib>
#include "../inc/block.h"
using namespace std;
Block::Block(int indx,TransactionData dt,size_t phash){
    index = indx;
    data = dt;
    previousHash = phash;
    blockHash = generateHash();
}
size_t Block::generateHash(){
    hash<string> hash1;
    hash<size_t> hash2;
    hash<size_t> finalhash;
    ostringstream os;
    os << data.amount<<data.reviverKey<<data.senderKey<<data.timestemp;
    string __Hash = os.str();
    return finalhash(hash1(__Hash)+hash2(previousHash));
}
size_t Block::getHash(){
    return blockHash;
}
size_t Block::getPreviousHash(){
    return previousHash;
}
bool Block::isHashValide(){
    return generateHash() == blockHash;
}
