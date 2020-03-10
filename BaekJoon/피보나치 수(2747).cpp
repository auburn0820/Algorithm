/*
 #include <iostream>
using namespace std;

#define MAX 1000

int arr[MAX];

int PIV(int a){
    
    if(a == 0) return 0;
    if(a == 1) return 1;
    if(arr[a] != 0) return arr[a];
    
    return arr[a] = PIV(a-2) + PIV(a-1);
}


int main(){
    
    int N;
    cin >> N;
    
    cout << PIV(N) << "\n";
    
    return 0;
}*/
