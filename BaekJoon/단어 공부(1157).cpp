//#include <iostream>
//
//using namespace std;
//
//#define Num 65
//#define Num2 32
//
//int character[26] = {0, };
//string str;
//
//int main(void) {
//    
//    cin >> str;
//    int index = 0;
//    int max = 0;
//    int ch;
//    int count = 0;
//    
//    for(int i = 0; i < str.size(); i++) {
//        ch = (int) str[i];
//        
//        if(ch > 90) {
//            index = ch - (Num + Num2);
//            character[index] = character[index] + 1;
//        }
//        else {
//            index = ch - Num;
//            character[index] = character[index] + 1;
//        }
//    }
//    
//    max = character[0];
//    index = 0;
//    for(int i = 1; i <= 25; i++) {
//        if(max < character[i]) {
//            max = character[i];
//            index = i;
//        }
//    }
//    
//    for(int i = 0; i <= 25; i++) {
//        if(max == character[i]) {
//            count += 1;
//        }
//    }
//    
//    if(count > 1) {
//        index = '?';
//    }
//    else {
//        index = index + Num;
//    }
//    cout << (char) index << "\n";
//}
