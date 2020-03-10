//#include <iostream>
//
//std::string str;
//
//int main(void) {
//    
//    std::getline(std::cin, str);
//    
//    int numberOfWords = 0;
//    
//    for(int i = 0; i < str.length(); i++) {
//        if(str[i] == ' ')
//            numberOfWords += 1;
//    }
//    
//    numberOfWords += 1;
//    
//    size_t index = str.length() - 1;
//    
//    if(str[0] == ' ')
//        numberOfWords -= 1;
//    if(str[index] == ' ')
//        numberOfWords -= 1;
//    
//    std::cout << numberOfWords << "\n";
//}
