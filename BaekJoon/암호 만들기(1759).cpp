/*
 처음에는 벡터를 사용하는 방법으로 진행했다. 하지만, 벡터를 사용하면 체크하는 함수를 또 만들어 반복문을 통해 확인해줘야해서
 시간초과가 떴다. 되도록이면 재귀하는 순간에 모든 연산을 끝내는게 시간초과가 안 뜨는 핵심인 것 같았다. 문자열을 통해
 최대한 재귀에서 끝내려고 시도했다.
 */


#include <iostream>
#include <vector>
#include <algorithm>

bool visit[16] = {false, };
char str[16];
std::string result;
int numberOfVowel = 0, numberOfConsonant = 0;

void DFS(int n, int L, int C, int index) {
    if(index == L) {
        if(numberOfVowel < 1 || numberOfConsonant < 2)
            return;
        
        for(int i = 0; i < L; i++) {
            std::cout << result[i];
        }
//        std::cout << "\n자음과 모음 : " << numberOfConsonant << ", " << numberOfVowel << '\n';
        std::cout << '\n';
        return;
    }
    
    for(int i = n; i < C; i++) {
        if(visit[i] == true)
            continue;
        
        visit[i] = true;
        result[index] = str[i];
        
        if(result[index] == 'a' || result[index] == 'e' || result[index] == 'i' || result[index] == 'o' || result[index] == 'u')
            numberOfVowel += 1;
        else
            numberOfConsonant += 1;
        
        DFS(i + 1, L, C, index + 1);
        visit[i] = false;
        
        if(result[index] == 'a' || result[index] == 'e' || result[index] == 'i' || result[index] == 'o' || result[index] == 'u')
            numberOfVowel -= 1;
        else
            numberOfConsonant -= 1;
    }
}

int main(void) {
    
    std::cin.tie(NULL);
    std::cin.sync_with_stdio(false);
    
    int L, C;
    
    std::cin >> L >> C;
    
    for(int i = 0; i < C; i++) {
        std::cin >> str[i];
    }
    
    std::sort(str, str + C);
    
    DFS(0, L, C, 0);
}
