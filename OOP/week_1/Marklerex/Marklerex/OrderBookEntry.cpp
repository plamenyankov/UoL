#include "OrderBookEntry.h"

OrderBookEntry::OrderBookEntry(double price,
double amount,
std::string product,
std::string timestamp,
OrderBookType orderType)
: price(price),
amount(amount),
product(product),
timestamp(timestamp),
orderType(orderType)
{
    
    
}

OrderBookType OrderBookEntry::stringToOrderBookType(std::string s)
{
    if(s == "ask")
    {
        return OrderBookType::ask;
    }
    if(s == "bid") 
    {
        return OrderBookType::bid;
    }
    return OrderBookType::unkown;
}