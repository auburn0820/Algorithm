/*
 반례를 생각하지 못했다. max와 min을 애초에 0으로 설정하여서 최대값이 30 최소값이 17인 경우에
 max는 30이 들어가는데 min이 17보다 작게 세팅이 되어있어 min 값이 제대로 안 나왔다. 반대의 경우도 마찬가지였다.
 반례를 반영하고 해결했다.
 */


#include <iostream>
#include <vector>

long long int sum = 0;
long long int max;
long long int min;
std::string opString;
std::vector<int> v;
bool visit[11];
int number[11];
int opCnt = 1;

void calculator() {
    switch ((char) v[0]) {
        case '+':
            sum = number[0] + number[1];
            break;
        case '-':
            sum = number[0] - number[1];
            break;
        case '*':
            sum = number[0] * number[1];
            break;
        case '/':
            sum = number[0] / number[1];
            break;
        default:
            break;
    }
    
    for(int i = 1; i < v.size(); i++) {
        switch ((char) v[i]) {
            case '+':
                sum += number[i + 1];
                break;
            case '-':
                sum -= number[i + 1];
                break;
            case '*':
                sum *= number[i + 1];
                break;
            case '/':
                if(sum < 0) {
                    sum *= -1;
                    sum /= number[i + 1];
                    sum *= -1;
                } else {
                    sum /= number[i + 1];
                }
                break;
            default:
                break;
        }
    }
    
    
    if(opCnt == 1) {
        max = sum;
        min = sum;
    } else {
        if(sum > max)
            max = sum;
        if(min > sum)
            min = sum;
    }
    opCnt += 1;
}

void DFS(int n, int m) {
    if(n == m) {
        calculator();
        sum = 0;
        return;
    }
    
    for(int i = 0; i < m; i++) {
        if(visit[i])
            continue;
        visit[i] = true;
        v.push_back(opString[i]);
        DFS(n + 1, m);
        visit[i] = false;
        v.pop_back();
    }
}

int main(void) {
    int N, op;
    std::cin >> N;
    
    max = min = 0;
    
    for(int i = 0; i < N; i++) {
        std::cin >> number[i];
    }
    for(int i = 0; i < 4; i++) {
        std::cin >> op;
        while(op--) {
            switch (i) {
                case 0:
                    opString += '+';
                    break;
                case 1:
                    opString += '-';
                    break;
                case 2:
                    opString += '*';
                    break;
                case 3:
                    opString += '/';
                    break;
                default:
                    break;
            }
        }
    }
    
    DFS(0, N - 1);
    
    std::cout << max << '\n' << min << '\n';
}
