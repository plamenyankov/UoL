//
//  CSVReader.hpp
//  Marklerex
//
//  Created by Plamen Yankov on 7.11.21.
//

#ifndef CSVReader_hpp
#define CSVReader_hpp

#include <stdio.h>
#pragma once
#include <vector>
#include <string>
#include "OrderBookEntry.h"

class CSVReader{
public:
    CSVReader();
    static std::vector<OrderBookEntry> readCSV(std::string csvFile);
        
private:
    static std::vector<std::string> tokenise(std::string csvFile, char separator);
    
    
    
};




#endif /* CSVReader_hpp */
