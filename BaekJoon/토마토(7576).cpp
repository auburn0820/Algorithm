/*
 토마토를 입력 받을 때, 익은 토마토가 하나인 경우는 결과값이 제대로 나왔다. 하지만, 익은 토마토가 2개 이상인 경우를
 생각하지 못했다. 그래서 처음에 큐에 넣을 때, 익은 토마토들을 넣어 해결했다. 다음 문제는 미로탐색 문제처럼 이차원 배열에
 날짜를 부여했다. 하지만, 메모리 초과가 발생하여 새로운 방법을 찾아야했다. 그래서 seg라는 변수를 이용하여 하나의 턴을 만들었다.
 while 안에 첫번째 반복문이 턴이다. 이 반복문이 없다면, 턴으로 끊을 단위가 없어져 ret 변수가 끊임없이 증가한다.
 cnt를 통해 다음으로 탐색해야할 갯수를 센 뒤에 seg에 대입하여 턴을 지정한다. 그러면 ret 변수를 증가시킬 타이밍을 만든 것이다.
 턴이 끝날 때마다 1씩 증가시킨다.
 */



#include <iostream>
#include <queue>

int maps[1000][1000];
int dx[] = {1, 0, -1, 0}, dy[] = {0, 1, 0, -1};
bool visit[1000][1000] = {0, };
bool traverse;

std::queue<std::pair<int, int>> q;

int ret = 0;

bool check(int M, int N) {
    for(int i = 0; i < N; i++) {
        for(int j = 0; j < M; j++) {
            if(maps[i][j] == 1 || maps[i][j] == -1)
                continue;
            else
                return false;
        }
    }
    return true;
}

void BFS(int x, int y, int M, int N) {
    
    int a, b;
    int cnt;
    int seg = q.size();
    
    while(!q.empty()) {
        traverse = false;
        cnt = 0;
        
        for(int k = 0; k < seg; k++) {
            x = q.front().first;
            y = q.front().second;
            
            visit[x][y] = true;
            
            q.pop();
            
            for(int i = 0; i < 4; i++) {
                a = x + dx[i];
                b = y + dy[i];
                
                if(a < 0 || a >= N || b < 0 || b >= M)
                    continue;
                if(visit[a][b] == true || maps[a][b] == -1 || maps[a][b] == 1)
                    continue;
                
                q.push(std::make_pair(a, b));
                traverse = true;
                maps[a][b] = 1;
                cnt += 1;
            }
        }
        seg = cnt;
        if(traverse == true)
             ret += 1;
    }
}

int main(void) {
    int M, N;
    
    std::cin >> M >> N;
    
    for(int i = 0; i < N; i++) {
        for(int j = 0; j < M; j++) {
            std::cin >> maps[i][j];
        }
    }
    
    for(int i = 0; i < N; i++) {
        for(int j = 0; j < M; j++) {
            if(maps[i][j] == 1) {
                //                BFS(i, j, M, N);
                q.push(std::make_pair(i, j));
            }
        }
    }
    
    BFS(q.front().first, q.front().second, M, N);
    
    
    if(check(M, N))
        std::cout << ret << "\n";
    else
        std::cout << -1 << "\n";
}
