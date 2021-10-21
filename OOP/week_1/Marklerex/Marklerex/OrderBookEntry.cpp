//
//  OrderBookEntry.cpp
//  Marklerex
//
//  Created by Plamen Yankov on 21.10.21.
//

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
