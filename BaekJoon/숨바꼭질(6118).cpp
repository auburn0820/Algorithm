
/*
 BFS, DFS를 이차원 배열로 구현하는 게 익숙한 나에게는 어려운 문제였다. 왜냐하면 이차원 배열로 구현할 경우 4억 개의 인덱스가
 나오기 때문이다. 다행히 벡터로 구현했을 땐, 문제가 없었다. 앞으로 벡터로 구현하려는 습관을 들여야겠다.
 */


#include <iostream>
#include <queue>
#include <vector>

std::vector<std::vector<int>> tree;
std::vector<bool> visit;
std::vector<int> distance;

void BFS(int node) {
    std::queue<int> q;
    visit[node] = true;
    q.push(node);
    
    while(!q.empty()) {
        
        int cur = q.front();
        
        q.pop();
        
        for(int i = 0; i < tree[cur].size(); i++) {
            int next = tree[cur][i];
            if(visit[next] == false) {
                visit[next] = true;
                q.push(next);
                distance[next] = distance[cur] + 1;
            }
        }
    }
}

void printResult() {
    int max = distance[1];
    int index = 0;
    int cnt = 0;
    
    for(int i = 2; i < distance.size(); i++) {
        if(max < distance[i]) {
            max = distance[i];
            index = i;
        }
    }
    for(int i = 1; i < distance.size(); i++) {
        if(max == distance[i]) {
            cnt += 1;
        }
    }
    
    std::cout << index << " " << max << " " << cnt << "\n";
}

int main(void) {
    int N, M;
    
    std::cin >> N >> M;
    
    tree.resize(N + 1);
    
    while(M--) {
        int a, b;
        std::cin >> a >> b;
        tree[a].push_back(b);
        tree[b].push_back(a);
    }
    
    visit = std::vector<bool>(N + 1, false);
    distance = std::vector<int>(N + 1, 0);
    
    BFS(1);
    
    printResult();
}
