//
//  OrderBookEntry.h
//  Marklerex
//
//  Created by Plamen Yankov on 21.10.21.
//
#pragma once
#include <string>

enum class OrderBookType{bid, ask};

class OrderBookEntry
{
    public:
        OrderBookEntry(double price,
        double amount,
        std::string product,
        std::string timestamp,
        OrderBookType orderType);

        double price;
        double amount;
        std::string product;
        std::string timestamp;
        OrderBookType orderType;
};
