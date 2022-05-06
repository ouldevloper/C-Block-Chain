#ifndef BLOCKCHAIN_H
#define BLOCKCHAIN_H
#include <iostream>
#include <vector>
#include "../inc/block.h"
#include "../inc/transactiondata.h"

class BlockChain{
    private:
        Block createGenisesBlock();
    public:
        std::vector<Block> chain;
        BlockChain();
        void AddBlock(TransactionData data);
        bool isChainValid();
        Block *getLastBlock();
};

#endif