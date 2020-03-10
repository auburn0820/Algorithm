/*
#include <iostream>
using namespace std;

#define MAX 1000

int main(){
    
    int arr[MAX];
    
    int N;
    cin >> N;
    
    arr[1] = 1;
    arr[2] = 3;
    arr[3] = 5;
    
    for(int i = 4; i <= N; i++){
        arr[i] = (arr[i-1] + 2*arr[i-2]) % 10007;
    }
    
    cout << arr[N] << "\n";
}
*/
