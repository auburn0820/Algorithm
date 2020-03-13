/*
 0을 입력 받는 경우를 고려하지 못하여 무한루프에 걸려 시간초과가 떴다.
 함수에 조건문을 추가하여 해결했다.
 */



//#include <iostream>
//
//long arr[91];
//
//void init() {
//    for(int i = 0; i < 91; i++) {
//        arr[i] = -1;
//    }
//}
//
//long fibo(int number) {
//    
//    if(number == 0)
//        return 0;
//    if(number <= 2)
//        return 1;
//    if(arr[number] != -1)
//        return arr[number];
//    
//    return arr[number] = fibo(number - 1) + fibo(number - 2);
//    
//}
//
//int main(void) {
//    int n;
//    
//    init();
//    
//    std::cin >> n;
//    
//    std::cout << fibo(n) << "\n";
//}
