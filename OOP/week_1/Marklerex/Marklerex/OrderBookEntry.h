#pragma once
#include <string>

enum class OrderBookType{bid, ask, unkown};

class OrderBookEntry
{
    public:
        OrderBookEntry(double price,
        double amount,
        std::string product,
        std::string timestamp,
        OrderBookType orderType);

        static OrderBookType stringToOrderBookType(std::string s);

        double price;
        double amount;
        std::string product;
        std::string timestamp;
        OrderBookType orderType;
};
