#include <string>
#include <vector>
#include <iostream>
#include <fstream>
#include <map>
//
//
//std::vector<std::string> tokenise(std::string csvLine, char separator){
//    std::vector<std::string> tokens;
//    signed int start, end;
//    std::string token;
//
//    start = csvLine.find_first_not_of(separator, 0);
//
//    do{
//        end = csvLine.find_first_of(separator, start);
//        if(start == csvLine.length() || start == end) break;
//
//        if(end >= 0) token = csvLine.substr(start, end - start);
//        else token = csvLine.substr(start, csvLine.length() - start);
//
//        tokens.push_back(token);
//
//        start = end + 1;
//
//    }while(end > 0);
//
//    return tokens;
//}
//
int main(){
    std::vector<std::string> arr{"1","2","3","1","2","4"};
    std::map<std::string, bool> arrMap;
    for(std::string& e: arr)
    {
        arrMap[e] = true;
    }


    for(auto const& e: arrMap)
    {
        std::cout << "from test "<< e.first << std::endl;

    }

}
