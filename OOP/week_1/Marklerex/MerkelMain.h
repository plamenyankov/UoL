//
//  MerkelMain.h
//  Marklerex
//
//  Created by Plamen Yankov on 21.10.21.
//
#pragma once
#include "OrderBookEntry.h"
#include <vector>

class MerkelMain
{
public:
    MerkelMain();
        void init();
private:
    void loadOrderBook();
        void printMenu();
        void printHelp();
        void printMarketStats();
        void enterOffer();
        void enterBid();
        void printWallet();
        void gotoNextTimeFrame();
        int getUserOption();
        void processUserOption(int userOption);
    
    
        std::vector<OrderBookEntry> orders;
};
