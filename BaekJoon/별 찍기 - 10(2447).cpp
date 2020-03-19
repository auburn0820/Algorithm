/*
 패턴 찾기가 어려워 인터넷을 참고했다.
 */


#include <iostream>

char matrix[6561][6561];

void pointStar(int x, int y, int num) {
    if(num == 1) {
        matrix[y][x] = '*';
        return;
    }
    int divide = num / 3;
    
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            if(i == 1 && j == 1) {
                continue;
            }
            else {
                pointStar(x + (i * divide), y + (j * divide), divide);
            }
        }
    }
}

int main(void) {
    int n;
    
    std::cin >> n;
    
    for(int i = 0; i < 6561; i++) {
        for(int j = 0; j < 6561; j++) {
            matrix[i][j] = ' ';
        }
    }
    
    pointStar(0, 0, n);
    
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
           std::cout << matrix[i][j];
        }
        std::cout << "\n";
    }
}
