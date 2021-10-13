//
//  main.cpp
//  Marklerex
//
//  Created by Plamen Yankov on 13.10.21.
//

#include <iostream>
#include <map>

void printMenu()
{
    std::cout << "1: Print Help" << std::endl;
    std::cout << "2: Print exchange stats" << std::endl;
    std::cout << "3: Make an offer" << std::endl;
    std::cout << "4: Make a bid" << std::endl;
    std::cout << "5: Print wallet" << std::endl;
    std::cout << "6: Continue" << std::endl;

    std::cout << "===============" << std::endl;
   
}
void printHelp()
{
    std::cout << "Help - Your aim is to make money. Analyse the market and make bids and offers." << std::endl;
}
void printMarketStats()
{
    std::cout << "Market looks good" << std::endl;
}
void enterOffer()
{
    std::cout << "Make an offer - enter the amount" << std::endl;
}
void enterBid()
{
    std::cout << "Make a bid - enter the amount" << std::endl;
}
void printWallet()
{
    std::cout << "Your wallet is empty" << std::endl;
}
void gotoNextTimeFrame()
{
    std::cout << "Going to next time frame" << std::endl;
}
int getUserOption()
{
    int userOption;
    std::cout << "Type in 1-6" << std::endl;
    std::cin >> userOption;
    std::cout << "You chose: " << userOption << std::endl;
    return userOption;
}
void processUserOption(int userOption)
{
    if (userOption == 0)
    {
        std::cout << "Invalid choice. Choose 1-6" << std::endl;
    }
    if (userOption == 1)
    {
        menu[1]();
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
int main(int argc, const char * argv[]) {
//    std::map<int,void(*)()> menu;
    // connect 1 to the printHelp function
//    menu[1] = printHelp;
    
    while (true)
       {
           printMenu();
           int userOption = getUserOption();
           processUserOption(userOption);
        }
    return 0;
}

