//#include <iostream>
//#include <queue>
//using namespace std;
//
//#define MAX 100000
// //배열로 구현한 큐
//class Queue {
//public:
//    int f, r;
//    int arr[MAX];
//
//    Queue() {
//        this->f = 0;
//        this->r = 0;
//    }
//    void push(int elem) {
//        arr[r] = elem;
//        r = (r + 1);
//    }
//    int pop() {
//        if(empty())
//            return -1;
//        else {
//            f = f + 1;
//            return arr[f-1];
//        }
//    }
//    int front() {
//        if (empty())
//            return -1;
//        else
//            return arr[f];
//    }
//    int back() {
//        if (empty())
//            return -1;
//        else
//            return arr[r-1];
//    }
//    bool empty() {
//        if(f == r)
//            return true;
//        else
//            return false;
//    }
//    int size() {
//        return r - f;
//    }
//};
// //리스트로 구현한 큐
//#include <iostream>
//#include <list>
//using namespace std;
//
//class Queue {
//public:
//    list<int> arr;
//
//    Queue() {
//    }
//    void push(int elem) {
//        arr.push_back(elem);
//    }
//    int pop() {
//        if(empty())
//            return -1;
//        else {
//            int data = arr.front();
//            arr.pop_front();
//            return data;
//        }
//    }
//    int front() {
//        if (empty())
//            return -1;
//        else
//            return arr.front();
//    }
//    int back() {
//        if (empty())
//            return -1;
//        else
//            return arr.back();
//    }
//    bool empty() {
//        if(arr.empty())
//            return true;
//        else
//            return false;
//    }
//    int size() {
//        return arr.size();
//    }
//};
//
//int main(void) {
//    Queue q = Queue();
//
//    int N;
//    cin >> N;
//
//    while(N--) {
//        string s;
//        cin >> s;
//        if(s == "push") {
//            int data;
//            cin >> data;
//            q.push(data);
//        }
//        else if (s == "pop") {
//            cout << q.pop() << endl;
//        }
//        else if (s == "empty") {
//            cout << q.empty() << endl;
//        }
//        else if (s == "front") {
//            cout << q.front() << endl;
//        }
//        else if (s == "back") {
//            cout << q.back() << endl;
//        }
//        else if (s == "size") {
//            cout << q.size() << endl;
//        }
//    }
//}
// 링크드리스트 큐 구현

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
//    Queue* q = new Queue();
//
//    int N;
//    cin >> N;
//
//    while(N--) {
//        string s;
//        cin >> s;
//        if(s == "push") {
//            int data;
//            cin >> data;
//            q->push(data);
//        }
//        else if (s == "pop") {
//            cout << q->pop() << endl;
//        }
//        else if (s == "size") {
//            cout << q->size() << endl;
//        }
//        else if (s == "empty") {
//            cout << q->empty() << endl;
//        }
//        else if (s == "front") {
//            cout << q->front() << endl;
//        }
//        else if (s == "back") {
//            cout << q->back() << endl;
//        }
//    }
//}
