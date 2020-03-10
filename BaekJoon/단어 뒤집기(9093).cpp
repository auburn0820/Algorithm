//#include <iostream>
//#include <string>
//using namespace std;
//
//class Node {
//    char elem;
//    Node* next;
//    
//    Node() {
//        this->next = NULL;
//    }
//    Node(int elem) {
//        this->elem = elem;
//    }
//    
//    friend class Stack;
//};
//
//class Stack {
//public:
//    Node* head;
//    
//    Stack() {
//        head = new Node();
//    }
//    
//    void push(char elem) {
//        Node* node = new Node();
//        node->elem = elem;
//        
//        if(empty()) {
//            head->next = node;
//            node->next = NULL;
//        }
//        else {
//            node->next = head->next;
//            head->next = node;
//        }
//    }
//    void pop() {
//        Node* tmp = head;
//        head = head->next;
//        delete tmp;
//    }
//    char top() {
//        return head->next->elem;
//    }
//    bool empty() {
//        if(head->next == NULL) {
//            return true;
//        }
//        else return false;
//    }
//};
//
//int main() {
//    
//    int n;
//    cin >> n;
//    
//    cin.ignore(256, '\n');
//    
//    while(n--) {
//        string stc;
//        getline(cin, stc);
//        int len = stc.length();
//        
//        Stack *s = new Stack();
//        
//        for(int i = 0; i < len; i++) {
//            if(stc[i] == ' ') {
//                while(!s->empty()) {
//                    cout << s->top();
//                    s->pop();
//                }
//                cout << " ";
//            }
//            else {
//                s->push(stc[i]);
//            }
//        }
//        while(!s->empty()) {
//            cout << s->top();
//            s->pop();
//        }
//        cout << "\n";
//    }
//    
//    return 0;
//}
