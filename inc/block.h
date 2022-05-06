#ifndef BLOCK_H
#define BLOCK_H
#include <iostream>
#include "../inc/transactiondata.h"

class Block{
    private:
        int index;
        size_t blockHash;
        size_t previousHash;
        size_t generateHash();
    public:
        TransactionData data;
        Block(int index,TransactionData data,size_t phash);
        size_t getHash();
        size_t getPreviousHash();
        bool isHashValide();
};

#endif