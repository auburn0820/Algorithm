//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//int main() {
//    
//    int m, n;
//    
//    vector <int> v;
//    
//    cin >> m >> n;
//    
//    for (int i = 1; i <= m; i++) {
//        v.push_back(i);
//    }
//    
//    int count = n - 1;
//    
//    cout << "<";
//    for(int i = v.size(); i > 1; i--) {
//        cout << v[count] << ", ";
//        v.erase(v.begin() + count);
//        count = count + (n - 1);
//        count = count % v.size();
//    }
//    cout << v[0] << ">" << endl;
//    
//    return 0;
//}


//#include <iostream>
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
//
//    friend class Queue;
//};
//
//class Queue {
//public:
//    Node* f;
//    Node* r;
//    int s = 0;
//
//    Queue() {
//        f = new Node();
//        r = new Node();
//        f->next = NULL;
//        r->next = NULL;
//    }
//
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
//         if(empty())
//             return -1;
//         else {
//             Node* temp = new Node();
//             temp = f->next;
//             f->next = f->next->next;
//             int data = temp->elem;
//             delete temp;
//             s--;
//             return data;
//         }
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
//        if (s == 0)
//            return true;
//        else
//            return false;
//    }
//};
//
//int main(void) {
//
//    Queue* q = new Queue();
//
//    int N, M;
//
//    cin >> N >> M;
//
//    cout << "<";
//    for(int i = 1; i <= N; i++)
//        q->push(i);
//
//    for(int i = 1; i < N; i++) {
//        for(int j = 1; j < M; j++) {
//            q->push(q->front());
//            q->pop();
//        }
//        cout << q->front() << ", ";
//        q->pop();
//    }
//    cout << q->front() << ">\n";
//}
