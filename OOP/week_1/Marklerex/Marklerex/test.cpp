//#include <string>
//#include <vector>
//#include <iostream>
//#include <fstream>
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
//int main(){
//    std::ifstream csvFile{"20200317.csv"};
//    std::vector<std::string> tokens;
//    std::string line;
//    signed int cnt = 1;
//
//    if(csvFile.is_open()){
//        std::cout << "File is open" << std::endl;
//
//        while(std::getline(csvFile, line)){
//
//            tokens = tokenise(line, ',');
//            if(tokens.size() != 5){
//                std::cout << "Bad line " << cnt << std::endl;
//                continue;
//            }
//
//            try{
//                double price = std::stod(tokens[3]);
//                double amount = std::stod(tokens[4]);
//                std::cout << price << " : " << amount << std::endl;
//            }catch(const std::exception& e){
//                std::cout << "Bad float!" << tokens[3] << " " <<tokens[4] << std::endl;
//                continue;
//            }
//
//
//            // if(cnt > 2) break;
//             cnt++;
//        }
//
//        csvFile.close();
//    }else{
//        std::cout << "File is NOT open" << std::endl;
//    }
//
//}
