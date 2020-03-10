//#include <iostream>
//
//std::string str;
//
//int checkAlpha(char alphabet) {
//    switch (alphabet) {
//        case 'A':
//        case 'B':
//        case 'C':
//            return 3;
//        case 'D':
//        case 'E':
//        case 'F':
//            return 4;
//        case 'G':
//        case 'H':
//        case 'I':
//            return 5;
//        case 'J':
//        case 'K':
//        case 'L':
//            return 6;
//        case 'M':
//        case 'N':
//        case 'O':
//            return 7;
//        case 'P':
//        case 'Q':
//        case 'R':
//        case 'S':
//            return 8;
//        case 'T':
//        case 'U':
//        case 'V':
//            return 9;
//        case 'W':
//        case 'X':
//        case 'Y':
//        case 'Z':
//            return 10;
//        default:
//            return 0;
//    }
//}
//
//int main(void) {
//    std::cin >> str;
//    int sum = 0;
//
//    for(int i = 0; i < str.length(); i++) {
//        sum += checkAlpha(str[i]);
//    }
//
//    std::cout << sum << "\n";
//}
