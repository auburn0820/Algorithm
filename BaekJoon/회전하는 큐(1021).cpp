//#include <iostream>
//
//using namespace std;
// //링크드리스트로 구현한 큐
//class Node {
//public:
//    int elem;
//    Node* next;
//
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
//        f->next = r;
//        r->next = f;
//    }
//
//    void push(int elem) {
//        Node* node = new Node(elem);
//        if(empty()) {
//            f->next = node;
//            r = node;
//            node->next = f;
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
//            int data;
//            temp = f->next;
//            f->next = f->next->next;
//            data = temp->elem;
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
//int main(void) {
//    Queue* q = new Queue();
//    Node* node = q->f;
//    
//    int N, M;
//    cin >> N >> M;
//    int data;
//    int cur = 0;
//    
//    for(int i = 1; i <= N; i++) {
//        q->push(i);
//    }
//    cin >> data;
//    while(node->elem != data) {
//        node = node->next;
//    }
//    for(int i = 1; i < M; i++) {
//        cin >> data;
//        
//        
//    }
//}
