/*
#include <iostream>
#include <algorithm>
using namespace std;

#define MAX 1000000


int main(){
    
    int arr[MAX];
    
    arr[1] = 0;
    
    int N;
    cin >> N;
    
    for(int i = 2; i <= N; i++){
        arr[i] = arr[i-1] + 1;
        if(i % 2 == 0)
            arr[i] = min(arr[i], arr[i/2] + 1);
        if(i % 3 == 0)
            arr[i] = min(arr[i], arr[i/3] + 1);
    }
    cout << arr[N] << "\n";
    
    return 0;
}
 */
