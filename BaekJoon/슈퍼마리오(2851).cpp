//#include <iostream>
//
//using namespace std;
//
//int main(void) {
//    
//    int mushroom[10];
//    int sum = 0;
//    int total, total1, total2;
//    
//    for(int i = 0; i < 10; i++) {
//        cin >> mushroom[i];
//    }
//    
//    for(int i = 0; i < 10; i++) {
//        
//        sum += mushroom[i];
//        
//        if(sum == 100) {
//            total = sum;
//            break;
//        }
//        else if (sum > 100) {
//            total1 = sum - 100;
//            total2 = ((sum - mushroom[i]) - 100)*(-1);
//            if (total1 > total2) {
//                total = sum - mushroom[i];
//            }
//            else {
//                total = sum;
//            }
//            break;
//        }
//    }
//    
//    cout << total << "\n";
//}
