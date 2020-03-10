//

//const int MAX = 100;
//
//Queue q = Queue();
//int N, M;
//int priority[MAX];
//int order[MAX];
//bool checked[MAX];
//
//int Tth(void) {
//    int rank = 1;
//
//    while(!q.empty()) {
//        int temp = q.front();
//        q.pop();
//
//        int idx = 0;
//        bool top = true;
//        while(true) {
//            if(idx >= N) {
//                break;
//            }
//            if(idx == temp || checked[idx]) {
//                idx++;
//                continue;
//            }
//
//            if(priority[temp] < priority[idx]) {
//                q.push(temp);
//                top = false;
//                break;
//            }
//            idx++;
//        }
//        if (top) {
//            checked[temp] = true;
//            order[temp] = rank;
//            rank += 1;
//        }
//    }
//    return order[M];
//}
//
//int main(void) {
//
//
//    int T;
//    cin >> T;
//
//    while(T--) {
//        cin >> N >> M;
//        memset(checked, false, sizeof(checked));
//        for(int i = 0; i < N; i++) {
//            cin >> priority[i];
//            q.push(i);
//        }
//        cout << Tth() << endl;
//    }
//
//
//}
//
//#define MAX 100
//
//Queue q = Queue();
//int N, M;
//int order[MAX];
//int priority[MAX];
//bool checked[MAX];
//
//int Tth(void) {
//    int rank = 1;
//
//    while(!q.empty()) {
//
//        int temp = q.front();
//        q.pop();
//        int idx = 0;
//        bool top = true;
//
//        while(true) {
//            if(idx >= N) {
//                break;
//            }
//            if(temp == idx || checked[idx]) {
//                idx++;
//                continue;
//            }
//            if(priority[temp] < priority[idx]) {
//                q.push(temp);
//                top = false;
//                break;
//            }
//            idx += 1;
//        }
//        if(top) {
//            checked[temp] = true;
//            order[temp] = rank;
//            rank += 1;
//        }
//    }
//    return order[M];
//}
//
//int main(void) {
//
//    int test_case;
//    cin >> test_case;
//
//    while(test_case--) {
//        cin >> N >> M;
//        memset(checked, false, sizeof(checked));
//        for(int i = 0; i < N; i++) {
//            cin >> priority[i];
//            q.push(i);
//        }
//        cout << Tth() << endl;
//    }
//}
//
//#include <iostream>
//#include <cstring>
//#define MAX 100
//
//using namespace std;
//
//class Node {
//    int elem;
//    Node* next;
//    Node() {
//        this->next = NULL;
//    }
//    Node(int elem) {
//        this->elem = elem;
//    }
//    friend class Queue;
//};
//
//class Queue {
//public:
//    Node* f;
//    Node* r;
//    int s = 0;
//    Queue() {
//        f = new Node();
//        r = new Node();
//        f->next = NULL;
//        r->next = NULL;
//    }
//    void push(int elem) {
//        Node* node = new Node(elem);
//        if(empty()) {
//            f->next = node;
//            r = node;
//            r->next = f;
//        }
//        else {
//            r->next = node;
//            r = node;
//            r->next = f;
//        }
//        s++;
//    }
//    int pop() {
//        if(empty())
//            return -1;
//        else {
//            Node* temp = new Node();
//            temp = f->next;
//            f->next = f->next->next;
//            int data = temp->elem;
//            delete temp;
//            s -= 1;
//            return data;
//        }
//    }
//    int front() {
//        if(empty())
//            return -1;
//        else
//            return f->next->elem;
//    }
//    int back() {
//        if(empty())
//            return -1;
//        else
//            return r->elem;
//    }
//    bool empty() {
//        if(s == 0)
//            return true;
//        else
//            return false;
//    }
//    int size() {
//        return s;
//    }
//};
//
//Queue* q = new Queue();
//int priority[MAX];
//int order[MAX];
//bool cheked[MAX];
//int N, M;
//
//int Tth(void) {
//    int rank = 1;
//    while(!q->empty()) {
//
//        int temp = q->front();
//        q->pop();
//        int idx = 0;
//        bool top = true;
//
//        while(true) {
//            if(idx >= N)
//                break;
//            if(idx == temp || cheked[idx]) {
//                idx++;
//                continue;
//            }
//            if(priority[temp] < priority[idx]) {
//                q->push(temp);
//                top = false;
//                break;
//            }
//            idx++;
//        }
//        if(top) {
//            cheked[temp] = true;
//            order[temp] = rank;
//            rank++;
//        }
//    }
//    return order[M];
//}
//
//int main(void) {
//    int test_case;
//    cin >> test_case;
//
//    while(test_case--) {
//        cin >> N >> M;
//        memset(cheked, false, sizeof(cheked));
//        for(int i = 0; i < N; i++) {
//            cin >> priority[i];
//            q->push(i);
//        }
//        cout << Tth() << endl;
//    }
//}

//#include <iostream>
//#include <cstring>
//
//using namespace std;
//
//class Node {
//    int elem;
//    Node* next;
//    Node() {
//        this->next = NULL;
//    }
//    Node(int elem) {
//        this->elem = elem;
//    }
//    friend class Queue;
//};
//
//class Queue {
//public:
//    Node* f;
//    Node* r;
//    int s = 0;
//    Queue() {
//        f = new Node();
//        r = new Node();
//        f->next = NULL;
//        r->next = NULL;
//    }
//    void push(int elem) {
//        Node* node = new Node(elem);
//        if(empty()) {
//            f->next = node;
//            r = node;
//            r->next = f;
//        }
//        else {
//            r->next = node;
//            r = node;
//            r->next = f;
//        }
//        s++;
//    }
//    int pop() {
//        if(empty())
//            return -1;
//        else {
//            Node* temp = new Node();
//            temp = f->next;
//            f->next = f->next->next;
//            int data = temp->elem;
//            delete temp;
//            s--;
//            return data;
//        }
//    }
//    int front() {
//        if(empty())
//            return -1;
//        else
//            return f->next->elem;
//    }
//    int back() {
//        if(empty())
//            return -1;
//        else
//            return r->elem;
//    }
//    int size() {
//        return s;
//    }
//    bool empty() {
//        if(s == 0)
//            return true;
//        else
//            return false;
//    }
//};
//
//Queue* q = new Queue();
//
//#define MAX 100
//int N, M;
//int priority[MAX];
//int order[MAX];
//bool check[MAX];
//
//int Tth(void) {
//    int rank = 1;
//    while(!q->empty()) {
//        int temp = q->front();
//        q->pop();
//        int idx = 0;
//        bool top = true;
//        
//        while(true) {
//            if(idx >= N) {
//                break;
//            }
//            if(temp == idx || check[idx]) {
//                idx++;
//                continue;
//            }
//            if(priority[temp] < priority[idx]) {
//                q->push(temp);
//                top = false;
//                break;
//            }
//            idx++;
//        }
//        if(top) {
//            order[temp] = rank;
//            check[temp] = true;
//            rank++;
//        }
//    }
//    return order[M];
//}
//
//int main(void) {
//    int test_case;
//    cin >> test_case;
//    
//    while(test_case--) {
//        cin >> N >> M;
//        memset(check, false, sizeof(check));
//        for(int i = 0; i < N; i++) {
//            cin >> priority[i];
//            q->push(i);
//        }
//        cout << Tth() << "\n";
//    }
//}

