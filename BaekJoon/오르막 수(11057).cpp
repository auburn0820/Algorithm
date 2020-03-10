/*
 #include <iostream>
#define MOD 10007
using namespace std;

int main(){
    int N;
    int num = 0;
    int arr[1001][10] = {0, };
    
    cin >> N;
    
    for(int i = 0; i <= 9; i++){
        arr[1][i] = 1;
    }
    
    for(int i = 2; i <= N; i++){
        for(int j = 0; j <= 9; j++){
            for(int k = 0; k <= 9; k++){
                if(j <= k){
                    arr[i][j] += arr[i-1][k] % MOD;
                }
            }
        }
    }
    for(int i = 0; i <= 9; i++){
        num += arr[N][i] % MOD;
    }
    
    cout << num % MOD << "\n";
    
    return 0;
}
*/
