/*
#include <iostream>
using namespace std;

#define MAX 10

int main(){
    
    int M, N;
    cin >> N;
    
    int arr[MAX];
    
    arr[1] = 1;
    arr[2] = 2;
    arr[3] = 4;
    
    while(N--){
        cin >> M;
        for(int i = 4; i <= M; i++){
            arr[i] = arr[i-1] + arr[i-2] + arr[i-3];
        }
        cout << arr[M] << "\n";
    }
}
 */
