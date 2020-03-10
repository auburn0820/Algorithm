//#include <iostream>
//
//std::string str1;
//std::string str2;
//
//int main(void) {
//    std::cin >> str1 >> str2;
//
//    int flag = 1;
//
//    size_t index = str1.length() - 1;
//
//    if(str1[index] > str2[index]) {
//        flag = 1;
//    }
//    else if(str1[index] < str2[index]) {
//        flag = 2;
//    }
//    else {
//        index -= 1;
//        if(str1[index] > str2[index]) {
//            flag = 1;
//        }
//        else if(str1[index] < str2[index]) {
//            flag = 2;
//        }
//        else {
//            index -= 1;
//            if(str1[index] > str2[index]) {
//                flag = 1;
//            }
//            else
//                flag = 2;
//        }
//    }
//    if(flag == 1) {
//        for(int i = str1.length() - 1; i >= 0; i--) {
//            std::cout << str1[i];
//        }
//    }
//    else {
//        for(int i = str2.length() - 1; i >= 0; i--) {
//            std::cout << str2[i];
//        }
//    }
//    std::cout << "\n";
//}

//#include <iostream>
//
//int reverseNumber(int number) {
//    int a, b, c, d;
//
//    a = number % 10;
//    b = (number / 10) % 10;
//    c = number / 100;
//    d = a * 100 + b * 10 + c;
//
//    return d;
//}
//
//int main(void) {
//    int n, m;
//
//    std::cin >> n >> m;
//
//    int a = reverseNumber(n);
//    int b = reverseNumber(m);
//
//    if(a > b)
//        std:: cout << a;
//    else
//        std::cout << b;
//    std::cout << "\n";
//}
