/*
 이 문제는 애초에 접근을 잘못했다. 처음에는 deque에 좌표들을 넣어 하나씩 꺼내 이전 값이랑 거리를 비교했다.
 하지만, 편의점을 '순서대로' 방문한다는 전제가 없었다. 나는 이 점을 놓쳤던 것이다. 그래서 현재 위치에서 갈 수 있는 편의점만을
 방문하는 코드를 짜야했다. deque만 쓰는 방식으로는 무리가 있었다. 그래서 이차원 벡터에서 각 위치에서 방문할 수 있는 좌표만을
 입력받아 DFS를 수행했다. 펜타포트, 즉, 마지막 위치가 방문됐다는 것으로 나오면 문제없이 펜타포트 페스티벌을 갔다는 뜻이 된다.
 */


#include <iostream>
#include <cmath>
#include <vector>

typedef struct {
    int y, x;
}location;

std::vector<int> maps[102];
bool visit[102];

int checkDistance(location a, location b) {
    return abs(a.y - b.y) + abs(a.x - b.x);
}

void DFS(int n) {
    
    visit[n] = true;
    
    for(int i = 0; i < maps[n].size(); i++) {
        int node = maps[n][i];
        if(visit[node] == false) {
            DFS(node);
        }
    }
    
}

void init(int n) {
    for(int i = 0; i < n + 2; i++) {
        maps[i].clear();
        visit[i] = false;
    }
}

int main(void) {
    int t, n;
    
    std::cin >> t;
    
    while(t--) {
        
        std::vector<location> spot;
        
        std::cin >> n;
        for(int i = 0; i < n + 2; i++) {
            int y, x;
            std::cin >> y >> x;
            spot.push_back({y, x});
        }
        
        for(int i = 0; i < n + 1; i++) {
            for(int j = 1; j < n + 2; j++) {
                if(checkDistance(spot[i], spot[j]) <= 1000) {
                    maps[i].push_back(j);
                    maps[j].push_back(i);
                }
            }
        }
        
        DFS(0);
        
        if(visit[n + 1] == true)
            std::cout << "happy\n";
        else
            std::cout << "sad\n";
        
        init(n);
    }
}
