/*
 BFS가 1인 지점을 모두 탐색한다는 점을 해결 못했다. 노드의 경우 계층 별로 접근하기 때문에 최단거리를 구하기 쉽지만,
 이차원 배열에는 어떻게 적용해야할 지 몰랐다. 그래서 수정하기 전 코드의 출력은 1의 갯수였다.
 이를 해결하기 위해, 계층을 부여했다. 상하좌우를 탐색하는 반복문 하나 당 1을 증가시켰다.
 */



//#include <iostream>
//#include <queue>
//
//int maps[101][101];
//bool visited[101][101];
//int number[101][101] = {0, };
//int dx[] = {-1, 0, 1, 0}, dy[] = {0, -1, 0, 1};
//int num = 1;
//
//void init() {
//    for(int i = 0; i < 101; i++) {
//        for(int j = 0; j < 101; j++) {
//            maps[i][j] = false;
//            visited[i][j] = false;
//        }
//    }
//}
//
//void BFS(int x, int y, int n, int m) {
//    
//    std::queue<std::pair<int, int>> q;
//    
//    q.push(std::make_pair(x, y));
//    
//    while(!q.empty()) {
//        x = q.front().first;
//        y = q.front().second;
//        q.pop();
//        
//        visited[x][y] = true;
//        
//        for(int i = 0; i < 4; i++) {
//            int a = x + dx[i];
//            int b = y + dy[i];
//            
//            if(a < 0 || a >= n || b < 0 || b >= m)
//                continue;
//            if(visited[a][b] == true || maps[a][b] == 0)
//                continue;
//            
//            number[a][b] = number[x][y] + 1;
//            visited[a][b] = true;
//            q.push(std::make_pair(a, b));
//        }
//    }
//}
//
//int main(void) {
//    int n, m;
//    std::string str;
//    
//    std::cin >> n >> m;
//    
//    for(int i = 0; i < n; i++) {
//        str.clear();
//        std::cin >> str;
//        for(int j = 0; j < m; j++) {
//            maps[i][j] = str[j] - '0';
//        }
//    }
//    
//    BFS(0, 0, n, m);
//    
//    std::cout << number[n - 1][m - 1] + 1 << "\n";
//}
