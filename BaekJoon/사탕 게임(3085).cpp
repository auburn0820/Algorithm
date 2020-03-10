//#include <iostream>
//#include <algorithm>
//using namespace std;
//
//int N;
//
//char arr[50][50];
//
//int numberOfCandy() {
//    
//    int result = 1;
//    
//    for(int i = 0; i < N; i++) {
//        int numberOfCandy = 1;
//        
//        for(int j = 0; j < N - 1; j++) {
//            if(arr[i][j] == arr[i][j + 1]) {
//                numberOfCandy += 1;;
//            }
//            else {
//                result = max(numberOfCandy, result);
//                numberOfCandy = 1;
//            }
//            result = max(numberOfCandy, result);
//        }
//    }
//    
//    for(int i = 0; i < N; i++) {
//        int numberOfCandy = 1;
//        
//        for(int j = 0; j < N - 1; j++) {
//            if(arr[j][i] == arr[j + 1][i]) {
//                numberOfCandy += 1;
//            }
//            else {
//                result = max(numberOfCandy, result);
//                numberOfCandy = 1;
//            }
//            result = max(numberOfCandy, result);
//        }
//    }
//    
//    return result;
//}
//
//int main(void) {
//    
//    ios_base::sync_with_stdio(0);
//    cin.tie(0);
//    
//    cin >> N;
//    
//    int result = 0;
//    
//    for(int i = 0; i < N; i++) {
//        for(int j = 0; j < N; j++) {
//            cin >> arr[i][j];
//        }
//    }
//    
//    for(int i = 0; i < N; i++) {
//        for(int j = 0; j < N - 1; j++) {
//            swap(arr[i][j], arr[i][j + 1]);
//            result = max(numberOfCandy(), result);
//            swap(arr[i][j], arr[i][j + 1]);
//            
//            swap(arr[j][i], arr[j + 1][i]);
//            result = max(numberOfCandy(), result);
//            swap(arr[j][i], arr[j + 1][i]);
//        }
//    }
//    
//    cout << result << "\n";
//}
