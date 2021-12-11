#pragma once
#include "OrderBookEntry.h"
#include "CSVReader.h"
#include <string>
#include <vector>

class OrderBook
{
    public:
    /** construct, reading a csv data file */
    OrderBook(std::string filename);
    /** return vector of all know produscts in the dataset */    
    std::vector<std::string> getKnownProducts();
    /** return vector of Orders according to sent filters */
    std::vector<OrderBookEntry> getOrders(OrderBookType type,
                                            std::string product,
                                            std::string timestamp); 
    /** returns the earliest time in the orderbook */
    std::string getEarliestTime();
    /** returns the next time after the sent time in the orderbook */
    std::string getNextTime(std::string timestamp);

    void insertOrder(OrderBookEntry& order);

    std::vector<OrderBookEntry> matchAsksToBids(std::string product, std::string timestamp);

    static double getHighPrice(std::vector<OrderBookEntry>& orders);
    static double getLowPrice(std::vector<OrderBookEntry>& orders);
    static double getMeanPrice(std::vector<OrderBookEntry>& orders);

    private:
        std::vector<OrderBookEntry> orders;
};