//#include <iostream>
//#include <algorithm>
//
//using namespace std;
//
//int arr[13];
//int num[13];
//
//void DFS(int start, int depth, int k) {
//    if(depth == 6) {
//        for(int i = 0; i < 6; i++) {
//            cout << num[i] << " ";
//        }
//        cout << "\n";
//        return;
//    }
//    
//    for(int i = start; i < k; i++) {
//        num[depth] = arr[i];
//        DFS(i + 1, depth + 1, k);
//    }
//}
//
//int main(void) {
//    
//    int M;
//    
//    while(true) {
//        cin >> M;
//        
//        if(M == 0) {
//            break;
//        } else {
//            for(int i = 0; i < M; i++) {
//                cin >> arr[i];
//            }
//            DFS(0, 0, M);
//            cout << "\n";
//        }
//    }
//}
