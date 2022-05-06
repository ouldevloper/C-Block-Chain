#include <iostream>
#include <ctime>
#include "../inc/blockchain.h"
#include "../inc/block.h"
#include "../inc/transactiondata.h"

using namespace std;

BlockChain::BlockChain(){
    Block genises = createGenisesBlock();
    chain.push_back(genises);

}
Block BlockChain::createGenisesBlock(){
    time_t current;
    TransactionData td;
    td.amount = 0;
    td.reviverKey = "None";
    td.senderKey = "None";
    td.timestemp = time(&current);
    hash<int> hash1;
    Block genises(0,td,hash1(0));
    return genises;
}
Block *BlockChain::getLastBlock(){
    return &chain.back();
}
void BlockChain::AddBlock(TransactionData data){
    int index = (int)chain.size()-1;
    Block newBlock(index,data,getLastBlock()->getHash());
}
bool BlockChain::isChainValid(){
    vector<Block>::iterator it;
    int chainLen = (int)chain.size();
    for(it=chain.begin();it!=chain.end();it++){
        Block currentBlock = *it;
        if(!currentBlock.isHashValide()) return false;
        if(chainLen > 1) {
            Block previousBlock = *(it - 1);
            if(currentBlock.getPreviousHash()!=previousBlock.getHash()) return false;
        }
    }
    return true;
}   

