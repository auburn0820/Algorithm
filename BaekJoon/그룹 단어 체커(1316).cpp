//#include <iostream>
//
//#define alphabetNumber 97
//
//std::string str;
//bool alphabet[26];
//int numberOfWords = 0;
//
//void checkGroupedWord() {
//    for(int i = 0; i < str.length() - 1; i++) {
//        if(str[i] != str[i + 1]) {
//            if(alphabet[str[i + 1] - alphabetNumber] == true) {
//                numberOfWords -= 1;
//                break;
//            }
//            else {
//                alphabet[str[i] - alphabetNumber] = true;
//                continue;
//            }
//        }
//        else {
//            if(alphabet[str[i + 1] - alphabetNumber] == true) {
//                numberOfWords -= 1;
//                break;
//            }
//            else {
//                continue;
//            }
//        }
//    }
//    numberOfWords += 1;
//}
//
//int main(void) {
//    int N;
//    std::cin >> N;
//
//    while(N--) {
//        std::cin >> str;
//        checkGroupedWord();
//        str.clear();
//        for(int i = 0; i < 26; i++) {
//            alphabet[i] = false;
//        }
//    }
//    std::cout << numberOfWords << "\n";
//}
