#include <iostream>

int arr[21];

int fibo(int number) {
    
    if(number == 0)
        return 0;
    if(number <= 2)
        return 1;
    
    return arr[number] = fibo(number - 1) + fibo(number - 2);
    
}

int main(void) {
    int n;
    
    std::cin >> n;
    
    std::cout << fibo(n) << "\n";
}
