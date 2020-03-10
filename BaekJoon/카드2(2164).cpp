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
//    friend class Queue;
//};
//
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
//int main(void) {
//    Queue q = Queue();
//
//    int N;
//
//    cin >> N;
//
//    for(int i = 1; i <= N; i++) {
//        q.push(i);
//    }
//
//    while(q.size() != 1) {
//        q.pop();
//        q.push(q.pop());
//    }
//
//    cout << q.front() << endl;
//}
//
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
//            f = node;
//            f->next = r;
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
//            temp = f;
//            f = f->next;
//            int data = temp->elem;
//            delete temp;
//            s--;
//            return data;
//        }
//    }
//    int size() {
//        return s;
//    }
//    int front() {
//        if(empty())
//            return -1;
//        else
//            return f->elem;
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
//};
//
//int main(void) {
//    Queue* q = new Queue();
//    
//    int N;
//    cin >> N;
//    
//    for(int i = 1; i <= N; i++) {
//        q->push(i);
//    }
//    
//    int arr[1000];
//    int idx = 0;
//    
//    int size = q->size();
//    
//    while(q->size() > 0) {
//        arr[idx] = q->front();
//        idx++;
//        q->pop();
//        q->push(q->front());
//        q->pop();
//    }
//    for(int i = 0; i < size; i++) {
//        cout << arr[i] << " ";
//    }
//    cout << endl;
//}
