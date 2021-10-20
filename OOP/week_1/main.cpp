#include <iostream>
#include <string>

enum class OrderBookType{bid, ask};

class OrderBookEntry
{
    public:
        OrderBookEntry(double price,
        double amount,
        std::string product,
        std::string timestamp,
        OrderBookType orderType)
        {
            this->price = price;
            this->amount = amount;
            this->product = product;
            this->timestamp = timestamp;
            this->orderType = orderType;
        }

        double price;
        double amount;
        std::string product;
        std::string timestamp;
        OrderBookType orderType;
};

int main(){
    // while (true)
    // {
    //     std::cout << "1: Print Help" << std::endl;
    //     std::cout << "2: Print exchange stats" << std::endl;
    //     std::cout << "3: Make an offer" << std::endl;
    //     std::cout << "4: Make a bid" << std::endl;
    //     std::cout << "5: Print wallet" << std::endl;
    //     std::cout << "6: Continue" << std::endl;

    //     std::cout << "===============" << std::endl;
    //     std::cout << "Type in 1-6" << std::endl;

    //     int userOption;
    //     std::cin >> userOption;
    //     std::cout << "You chose: " << userOption << std::endl;

    //     if (userOption == 0)
    //     {
    //         std::cout << "Invalid choice. Choose 1-6" << std::endl; 
    //     }
    //     if (userOption == 1)
    //     {
    //         std::cout << "Help - Your aim is to make money. Analyse the market and make bids and offers." << std::endl; 
    //     }
    //     if (userOption == 2)
    //     {
    //         std::cout << "Market looks good" << std::endl; 
    //     }
    //     if (userOption == 3)
    //     {
    //         std::cout << "Make an offer - enter the amount" << std::endl; 
    //     }
    //     if (userOption == 4)
    //     {
    //         std::cout << "Make a bid - enter the amount" << std::endl; 
    //     }
    //     if (userOption == 5)
    //     {
    //         std::cout << "Your wallet is empty" << std::endl; 
    //     }
    //     if (userOption == 6)
    //     {
    //         std::cout << "Going to next time frame" << std::endl; 
    //     }
    // }
    OrderBookEntry order1{1000, 0.002, "BTC/USDT", "2020/03/17 17:01:24.884492", OrderBookType::bid};
  
    std::cout << order1.orderType << std::endl;   

    return 0;
    // How to run?
    // g++ main.cpp -o merklerex
    // ./merklerex
}