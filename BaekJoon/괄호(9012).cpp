//#include <iostream>
//
//using namespace std;
//
//class Node {
//    Node* next;
//    char elem;
//
//    Node() {
//        this->next = NULL;
//    }
//    Node(char elem) {
//        this->elem = elem;
//    }
//    friend class Stack;
//};
//class Stack {
//public:
//    Node* head;
//
//    Stack() {
//        head = new Node();
//    }
//    void push(char elem) {
//        Node* node = new Node(elem);
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
//        Node* temp = new Node();
//        if(empty())
//            return;
//        else {
//            temp = head->next;
//            head->next = head->next->next;
//            delete temp;
//        }
//    }
//    char top() {
//        if(empty()) {
//            return 0;
//        }
//        else return head->next->elem;
//    }
//    bool empty() {
//        if (head->next == NULL) {
//            return true;
//        }
//        else
//            return false;
//    }
//};

//int main(void) {
//    int N;
//    cin >> N;
//
//    Stack* st = new Stack();
//
//    cin.ignore(100, '\n');
//
//    while(N--) {
//        string s;
//        cin >> s;
//
//        for(int i = 0; i < s.length(); i++) {
//            if(s[i] == '(' || st->empty()) {
//                st->push(s[i]);
//            }
//            else if (st->top() == '(')
//                st->pop();
//        }
//
//        if(st->empty())
//            cout << "YES\n";
//        else
//            cout << "NO\n";
//
//        while(!st->empty()) {
//            st->pop();
//        }
//    }
//}


//여러 종류의 괄호
//int main(void) {
//    int N;
//    cin >> N;
//    Stack* st = new Stack();
//    
//    cin.ignore(100, '\n');
//    
//    while(N--) {
//        string s;
//        cin >> s;
//        
//        for(int i = 0; i < s.length(); i++) {
//            if(s[i] == '(' || s[i] == '{' || s[i] == '[' || st->empty()) {
//                st->push(s[i]);
//            }
//            else if (st->top() == '(' || st->top() == '{' || st->top() == '[') {
//                switch (s[i]) {
//                    case ')':
//                        if(st->top() == '(')
//                            st->pop();
//                        break;
//                    case '}':
//                        if(st->top() == '{')
//                            st->pop();
//                        break;
//                    case ']':
//                        if(st->top() == '[')
//                            st->pop();
//                        break;
//                }
//            }
//        }
//        if(st->empty())
//            cout << "YES!" << endl;
//        else {
//            cout << "NO!" << endl;
//            while(!st->empty())
//                st->pop();
//        }
//    }
//}

//
//
////스택 배열 구현
//#include <iostream>
//
//using namespace std;
//
//class Stack {
//public:
//    int index;
//    char arr[100];
//    Stack() {
//        index = -1;
//    }
//
//    void push(char elem) {
//        index++;
//        arr[index] = elem;
//    }
//    void pop() {
//        index--;
//    }
//    char top() {
//        if(index == -1) {
//            return -1;
//        }
//        else {
//            return arr[index];
//        }
//    }
//    bool empty() {
//        if(index == -1) {
//            return true;
//        }
//        else
//            return false;
//    }
//};
//
//int main(void) {
//    Stack st = Stack();
//    int N;
//    cin >> N;
//
//    while(N--) {
//        string s;
//        cin >> s;
//
//        for(int i = 0; i < s.length(); i++) {
//            if(s[i] == '(' || st.empty()) {
//                st.push(s[i]);
//            }
//            else if(st.top() == '(') {
//                st.pop();
//            }
//        }
//
//        if(st.empty()) {
//            cout << "YES\n";
//        }
//        else {
//            cout << "NO\n";
//        }
//
//        while(!st.empty())
//            st.pop();
//    }
//}
//
//#include <iostream>
//
//using namespace std;
//
//class Stack {
//public:
//    int index;
//    char arr[100];
//    
//    Stack() {
//        index = -1;
//    }
//    
//    void push(char elem) {
//        index++;
//        arr[index] = elem;
//    }
//    
//    void pop() {
//        index--;
//    }
//    
//    char top() {
//        return arr[index];
//    }
//    
//    bool empty() {
//        if (index == -1)
//            return true;
//        else
//            return false;
//    }
//};

//int main(void) {
//    Stack st = Stack();
//    int N;
//    cin >> N;
//    cin.ignore(100, '\n');
//    
//    while(N--) {
//    string s;
//    cin >> s;
//        for(int i = 0; i < s.length(); i++) {
//            if(st.empty() || s[i] == '(') {
//                st.push(s[i]);
//            }
//            else if (st.top() == '(') {
//                st.pop();
//            }
//        }
//        if(!st.empty()) {
//            cout << "NO" << endl;
//        }
//        else {
//            cout << "YES" << endl;
//        }
//        while(!st.empty()) {
//            st.pop();
//        }
//    }
//}


//#include <iostream>
//
//using namespace std;
//
//class Stack {
//public:
//    int index;
//    char arr[100];
//    Stack() {
//        index = -1;
//    }
//
//    void push(char elem) {
//        index++;
//        arr[index] = elem;
//    }
//    void pop() {
//        index--;
//    }
//    char top() {
//        if(index == -1) {
//            return -1;
//        }
//        else {
//            return arr[index];
//        }
//    }
//    bool empty() {
//        if(index == -1) {
//            return true;
//        }
//        else
//            return false;
//    }
//};
//
//int main(void) {
//
//    Stack st = Stack();
//
//    int N;
//    cin >> N;
//
//    while(N--) {
//        string s;
//        cin >> s;
//        for(int i = 0; i < s.length(); i++) {
//            if(s[i] == '(' || st.empty()) {
//                st.push(s[i]);
//            }
//            else if (st.top() == '(') {
//                st.pop();
//            }
//        }
//        if(st.empty())
//            cout << "YES\n";
//        else
//            cout << "NO\n";
//
//        while(!st.empty())
//            st.pop();
//    }
//}
