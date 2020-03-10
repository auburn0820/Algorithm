//#include <iostream>
//#include <algorithm>
//using namespace std;
//
//#define MAX 1001
//
//int main(){
//    
//    int N;
//    int input;
//    int count;
//    cin >> N;
//    
//    int list[MAX];
//    int dp[MAX];
//    
//    list[0] = 0;
//    
//    for(int i = 1; i <= N; i++){
//        cin >> input;
//        list[i] = input;
//    }
//    
//    
//    dp[0] = list[0];
//    dp[1] = list[1];
//    
//    for(int i = 2; i <= N; i++){
//        count = i;
//        dp[i] = list[i] + dp[0];
//        for(int j = 1; j <= i; j++){
//            dp[i] = max(dp[i], list[count-1] + dp[j]);
//            count--;
//        }
//    }
//    
//    cout << dp[N] << "\n";
//    
//    return 0;
//}
