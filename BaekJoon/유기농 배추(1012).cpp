//#include <iostream>
//#include <vector>
//
//
//int maps[50][50];
//bool visitied[50][50];
//int x_op[] = {-1, 0, 1, 0}, y_op[] = {0, -1, 0, 1};
//int numberOfBugs;
//std::vector<int> v;
//
//// 전역변수 초기화 함수
//void init() {
//    numberOfBugs = 0;
//    for(int i = 0; i < 50; i++) {
//        for(int j = 0; j < 50; j++) {
//            maps[i][j] = 0;
//            visitied[i][j] = false;
//        }
//    }
//}
//
//// DFS 함수
//void DFS(int x, int y, int width, int height) {
//    visitied[x][y] = true;
//    for(int i = 0; i < 4; i++) {
//        int dx = x + x_op[i], dy = y + y_op[i]; // 상하좌우를 확인하기 위한 코드
//        if(dx < 0 || dx >= width || dy < 0 || dy >= height)
//            continue;
//        if(maps[dx][dy] == 0 || visitied[dx][dy] == true)
//            continue;
//        DFS(dx, dy, width, height);
//    }
//}
//
//int main(void) {
//    int n;
//    int width, height, numberOfCabbage;
//
//    std::cin >> n;
//
//    while(n--) {
//        init();
//        std::cin >> width >> height >> numberOfCabbage;
//        while(numberOfCabbage--) {
//            int loc_x, loc_y;
//            std::cin >> loc_x >> loc_y;
//            if(loc_x < 0 || loc_x >= 50 || loc_y < 0 || loc_y >= 50)
//                break;
//            else
//                maps[loc_x][loc_y] = 1;
//        }
//        // 탐색되지 않은 배추를 확인하는 코드
//        for(int i = 0; i < width; i++) {
//            for(int j = 0; j < height; j++) {
//                if(maps[i][j] == 1 && visitied[i][j] == false) {
//                    DFS(i, j, width, height);
//                    numberOfBugs += 1;
//                } // 탐색하지 않은 배추를 확인하고, DFS 호출
//                else
//                    continue;
//            }
//        }
//        v.push_back(numberOfBugs);
//    }
//
//    for(int i = 0; i < v.size(); i++) {
//        std::cout << v[i] << "\n";
//    }
//}
