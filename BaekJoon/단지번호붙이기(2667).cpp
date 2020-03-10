//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//
//int n;
//int apartment[26][26];
//bool visited[26][26];
//const int x[] = {-1, 0, 1, 0}, y[] = {0, -1, 0, 1};
//int numberOfComplex = 0;
//int numberOfApartment = 0;
//std::vector<int> v;
//std::string str;
//
//void init() {
//    for(int i = 1; i <= 26; i++) {
//        for(int j = 1; j <= 26; j++) {
//            apartment[i][j] = 0;
//            visited[i][j] = false;
//        }
//    }
//}
//
//void DFS(int a, int b) {
//    visited[a][b] = true;
//    numberOfApartment += 1;
//    for(int i = 0; i < 4; i++) {
//        int dx = x[i] + a, dy = y[i] + b;
//        if(dx < 0 || dx >= n || dy < 0 || dy >= n)
//            continue;
//        if(visited[dx][dy] == true || apartment[dx][dy] == 0)
//            continue;
//        DFS(dx, dy);
//    }
//}
//
//
//
//int main(void) {
//
//    init();
//
//    std::cin >> n;
//
//    for(int i = 0; i < n; i++) {
//        str.clear();
//        std::cin >> str;
//        for(int j = 0; j < n; j++) {
//            apartment[i][j] = str[j] - '0';
//        }
//    }
//    for(int i = 0; i < n; i++) {
//        for(int j = 0; j < n; j++) {
//            if(visited[i][j] == false && apartment[i][j] == 1) {
//                numberOfComplex += 1;
//                DFS(i, j);
//                v.push_back(numberOfApartment);
//                numberOfApartment = 0;
//            }
//        }
//    }
//
//    std::cout << numberOfComplex << "\n";
//    sort(v.begin(), v.end());
//    for(int i = 0; i < v.size(); i++) {
//        std::cout << v[i] << "\n";
//    }
//}
