//
//  MerkelMain.cpp
//  Marklerex
//
//  Created by Plamen Yankov on 21.10.21.
//

#include "MerkelMain.h"
#include <iostream>
#include "OrderBookEntry.h"

MerkelMain::MerkelMain()
{
    
}
void MerkelMain::init()
{
    int input;
    while(true)
    {
        loadOrderBook();
        printMenu();
        input = getUserOption();
        processUserOption(input);
    }
}
void MerkelMain::loadOrderBook()
{
 
        orders.push_back(OrderBookEntry{1000, 0.002, "BTC/USDT", "2020/03/17 17:01:24.884492", OrderBookType::bid});
        std::cout << orders[0].price << std::endl;
}
void MerkelMain::printMenu()
{
    std::cout << "1: Print Help" << std::endl;
    std::cout << "2: Print exchange stats" << std::endl;
    std::cout << "3: Make an offer" << std::endl;
    std::cout << "4: Make a bid" << std::endl;
    std::cout << "5: Print wallet" << std::endl;
    std::cout << "6: Continue" << std::endl;

    std::cout << "===============" << std::endl;
   
}
void MerkelMain::printHelp()
{
    std::cout << "Help - Your aim is to make money. Analyse the market and make bids and offers." << std::endl;
}
void MerkelMain::printMarketStats()
{
    std::cout << "Orders: " << orders.size() << std::endl;
}
void MerkelMain::enterOffer()
{
    std::cout << "Make an offer - enter the amount" << std::endl;
}
void MerkelMain::enterBid()
{
    std::cout << "Make a bid - enter the amount" << std::endl;
}
void MerkelMain::printWallet()
{
    std::cout << "Your wallet is empty" << std::endl;
}
void MerkelMain::gotoNextTimeFrame()
{
    std::cout << "Going to next time frame" << std::endl;
}
int MerkelMain::getUserOption()
{
    int userOption;
    std::cout << "Type in 1-6" << std::endl;
    std::cin >> userOption;
    std::cout << "You chose: " << userOption << std::endl;
    return userOption;
}




void MerkelMain::processUserOption(int userOption)
{
    if (userOption == 0)
    {
        std::cout << "Invalid choice. Choose 1-6" << std::endl;
    }
    if (userOption == 1)
    {
        printHelp();
    }
    if (userOption == 2)
    {
        printMarketStats();
    }
    if (userOption == 3)
    {
        enterOffer();
    }
    if (userOption == 4)
    {
        enterBid();
    }
    if (userOption == 5)
    {
        printWallet();
    }
    if (userOption == 6)
    {
        gotoNextTimeFrame();
    }
}
