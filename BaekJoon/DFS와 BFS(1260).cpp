//#include <iostream>
//#include <vector>
//#include <queue>
//using namespace std;
//
//int v[1001][1001] = {0, };
//
//bool flag[1001] = {false,};
//
//void DFS(int start, int N) {
//    
//    cout << start << " ";
//    flag[start] = true;
//    
//    for(int i = 1; i <= N ; i++) {
//        if(v[start][i] != 0) {
//            if(flag[v[start][i]] == false) {
//                DFS(v[start][i], N);
//            }
//        }
//    }
//}
//
//void BFS(int start, int N) {
//    
//    queue<int> q;
//    
//    q.push(start);
//    flag[start] = true;
//    
//    while(!q.empty()) {
//        int temp = q.front();
//        q.pop();
//        cout << temp << " ";
//        for(int i = 1; i <= N; i++) {
//            if(v[temp][i] != 0) {
//                if(flag[v[temp][i]] == false) {
//                    q.push(v[temp][i]);
//                    flag[v[temp][i]] = true;
//                }
//            }
//        }
//    }
//}
//
//int main(void) {
//    int N, M, O;
//    int src, dst;
//    
//    cin >> N >> M >> O;
//    
//    while(M--) {
//        cin >> src >> dst;
//        v[src][dst] = dst;
//        v[dst][src] = src;
//    }
//    
//    DFS(O, N);
//    cout << "\n";
//    for(int i = 0; i < 1001; i++) {
//        flag[i] = false;
//    }
//    BFS(O, N);
//    cout << "\n";
//}
