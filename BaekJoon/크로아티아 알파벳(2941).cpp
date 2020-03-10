//#include <iostream>
//
//std::string str;
//
//unsigned int numberOfAlphabet = 0;
//
//int find(std::string word) {
//
//    int number = 0;
//
//    for(int i = 0; i < str.length(); i++) {
//        if(word == str.substr(i, word.length())) {
//            number += 1;
//        }
//    }
//
//    return number;
//}
//
//void checkAlphabet(std::string str) {
//    if(find("dz=") != 0) {
//        numberOfAlphabet -= (find("dz=") * 2);
//    }
//    if(find("z=") != 0) {
//        numberOfAlphabet -= find("z=");
//        if(find("dz=") != 0)
//            numberOfAlphabet += find("dz=");
//    }
//    if(find("d-") != 0) {
//        numberOfAlphabet -= find("d-");
//    }
//    if(find("lj") != 0) {
//        numberOfAlphabet -= find("lj");
//    }
//    if(find("nj") != 0) {
//        numberOfAlphabet -= find("nj");
//    }
//    if(find("c=") != 0) {
//        numberOfAlphabet -= find("c=");
//    }
//    if(find("c-") != 0) {
//        numberOfAlphabet -= find("c-");
//    }
//    if(find("s=") != 0) {
//        numberOfAlphabet -= find("s=");
//    }
//}
//
//int main(void) {
//    std::cin >> str;
//    numberOfAlphabet = str.length();
//
//    checkAlphabet(str);
//
//    std::cout << numberOfAlphabet << "\n";
//
//}
