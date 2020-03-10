//#include <iostream>
//
//bool visited[101] = {false, };
//bool networks[101][101];
//int numberOfVirus = 0;
//
//void init() {
//    for(int i = 0; i < 101; i++) {
//        for(int j = 0; j < 101; j++) {
//            networks[i][j] = false;
//        }
//    }
//}
//
//void DFS(int n, int start) {
//    visited[start] = true;
//    for(int i = 1; i <= n; i++) {
//        if(networks[start][i] == true && visited[i] == false) {
//            DFS(n, i);
//            numberOfVirus += 1;
//        }
//    }
//}
//
//int main(void) {
//    int n, m;
//    int start, destination;
//    std::cin >> n >> m;
//
//    init();
//
//    while(m--) {
//            std::cin >> start >> destination;
//            networks[start][destination] = true;
//            networks[destination][start] = true;
//    }
//    DFS(n, 1);
//
//    std::cout << numberOfVirus << "\n";
//}
