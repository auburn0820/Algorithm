/*
 어떠한 문자열에 특정한 문자열이 있는지 확인하는 문제이다. 브루트포스로 접근하려다 KMP 알고리즘을 사용하면 시간초과 없이 풀 수
 있다고 하여 KMP 알고리즘을 공부했다. 하지만 아직까지 이해되지 않는다. 처음에는 string 형으로 접근하려 했으나, 숫자 한자리,
 한자리가 인덱스 하나에 인풋되어서 정수형 벡터로 구현했다. KMP 알고리즘을 확실하게 이해할 때가지 공부해야겠다.
 */


#include <iostream>
#include <vector>

std::vector<int> v;
int cnt = 0;

std::vector<int> getPi(std::vector<int> v) {
    int j = 0;
    std::vector<int> pi(v.size(), 0);
    
    for(int i = 1; i < v.size(); i++) {
        while(j > 0 && v[j] != v[i])
            j = pi[j - 1];
        if(v[j] == v[i])
            pi[i] = ++j;
    }
    return pi;
}

bool kmp(std::vector<int> parent, std::vector<int> pattern) {
    std::vector<int> table = getPi(pattern);
    int parentSize = (int) parent.size();
    int patternSize = (int) pattern.size();
    int j = 0;

    for(int i = 0; i < parentSize; i++) {
        while(j > 0 && parent[i] != pattern[j]) {
            j = table[j - 1];
        }
        if(parent[i] == pattern[j]) {
            if(j == patternSize - 1) {
                return true;
            } else {
                j++;
            }
        }
    }
    return false;
}

void checkVirus(std::vector<int> v1, std::vector<int> v2, int k) {
    std::vector<int> comp;


    for(int i = 0; i < v1.size(); i++) {
        
        comp.clear();
        
        for(int j = i; j < k + i; j++)
            comp.push_back(v1[j]);

        if(kmp(v2, comp) == true) {
            cnt += 1;
            break;
        }

        comp.clear();

        for(int j = (k - 1) + i; j >= i; j--)
            comp.push_back(v1[j]);

        if(kmp(v2, comp) == true) {
            cnt += 1;
            break;
        }
        
        comp.clear();
    }
}

int main(void) {
    int t, k, m;
    std::cin >> t >> k;
    
    std::vector<int> v;
    std::vector<int> v2;
    
    int input;
    
    int excute = 0;
    
    int compResult = t - 1;
    
    while(t--) {
        std::cin >> m;
        if(excute == 0) {
            for(int i = 0; i < m; i++) {
                std::cin >> input;
                v.push_back(input);
            }
        }
        else {
            for(int i = 0; i < m; i++) {
                std::cin >> input;
                v2.push_back(input);
            }
            checkVirus(v, v2, k);
            v2.clear();
        }
        excute += 1;
    }
    
    if(cnt == compResult)
        std::cout << "YES\n";
    else
        std::cout << "NO\n";
}
