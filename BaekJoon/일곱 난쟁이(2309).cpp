//#include <iostream>
//#include <algorithm>
//
//using namespace std;
//
//int sum;
//int arr[9] = {0};
//bool flag = false;
//
//int main(void) {
//
//    for(int i = 0; i < 9; i++) {
//        cin >> arr[i];
//
//        sum += arr[i];
//    }
//
//    for(int i = 0; i < 9; i++) {
//        for(int j = i + 1; j < 9; j++) {
//            if(sum - arr[i] - arr[j] == 100) {
//                arr[i] = 999;
//                arr[j] = 999;
//                flag = true;
//                break;
//            }
//        }
//        if(flag)
//            break;
//    }
//
//    sort(arr, arr + 9);
//
//    int idx = 0;
//
//    while(arr[idx] != 999) {
//        cout << arr[idx] << "\n";
//        idx += 1;
//    }
//}
