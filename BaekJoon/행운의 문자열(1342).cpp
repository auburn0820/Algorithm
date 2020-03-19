/*
 재귀를 이용해 순열 함수를 구현할 수 있다는 것을 처음 알았다. DFS와 같은 원리였다.
 그래서 순열 함수를 통해 모든 경우의 수를 뽑아내서 행운의 문자열 여부를 확인한다. 또 처리를 해줘야 하는 부분이 있는데,
 예를 들어, aab 같은 경우 aba가 두 번 나온다. 그래서 a의 갯수의 팩토리얼만큼 행운의 문자열 갯수를 나눠야한다.
 */


#include <iostream>
#include <vector>

std::string str;
bool visit[10] = {false, };
int alphabet[26] ={0, };
std::vector<int> v;
int cnt = 0;

void printNumbers() {
    for(int i = 0; i < v.size(); i++) {
        std::cout << (char) v[i] << " ";
    }
    std::cout << '\n';
}

void checkLuckyString() {
    bool flag = true;
    for(int i = 0; i < v.size() - 1; i++) {
        if(v[i] == v[i + 1])
            flag = false;
        else
            continue;
    }
    if(flag == true) {
        cnt += 1;
    }
}

void DFS(int n, size_t m) {
    if(n == m) {
//        printNumbers();
        checkLuckyString();
        return;
    }
    
    for(int i = 0; i < m; i++) {
        if(visit[i] == true)
            continue;
        visit[i] = true;
        v.push_back(str[i]);
        DFS(n + 1, m);
        v.pop_back();
        visit[i] = false;
    }
}

int factorial(int n) {
    if(n < 2)
            return 1;
        else
            return n = n * factorial(n - 1);
}

void checkAlphabet() {
    for(int i = 0; i < 26; i++) {
//        std::cout << alphabet[i] << " ";
        if(alphabet[i] != 0) {
            cnt /= factorial(alphabet[i]);
        }
        else
            continue;
    }
}

int main(void) {
    std::cin >> str;
    
    for(int i = 0; i < str.size(); i++) {
        alphabet[str[i] - 97] += 1;
    }
    
    DFS(0, str.size());
    
    checkAlphabet();
    
    std::cout << cnt << '\n';
}
