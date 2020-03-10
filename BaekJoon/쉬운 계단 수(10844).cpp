/*
 #include <iostream>
using namespace std;

#define MAX 1000000000

int main(){
    int arr[101][10];
    long num = 0;
    int N;
    
    cin >> N;
    
    for(int i = 1; i <= 9; i++){
        arr[1][i] = 1;
    }
    
    for(int i = 2; i <= N; i++){
        for(int j = 0; j <= 9; j++){
            if(j == 0)
                arr[i][j] = arr[i-1][j+1];
            else if (j == 9)
                arr[i][j] = arr[i-1][j-1];
            else
            arr[i][j] = (arr[i-1][j-1] % MAX + arr[i-1][j+1] % MAX) % MAX;
        }
    }
    
    for(int i = 0; i <= 9; i++)
        num += arr[N][i];
    
    cout << num % MAX << "\n";
    
    return 0;
}
*/
