//#include <iostream>
//
//using namespace std;
//
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
//        head->next = NULL;
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
//int main(void) {
//
//    Stack* st = new Stack();
//
//    string result;
//    string s;
//    cin >> s;
//
//    for(int i = 0; i < s.length(); i++) {
//        if('A' <= s[i] && s[i] <= 'Z') {
//            result += s[i];
//        }
//        else {
//            switch (s[i]) {
//                case '(':
//                    st->push(s[i]);
//                    break;
//                case '*':
//                case '/':
//                    while(!st->empty() && (st->top() == '*' || st->top() == '/')) {
//                        result += st->top();
//                        st->pop();
//                    }
//                    st->push(s[i]);
//                    break;
//                case '+':
//                case '-':
//                    while(!st->empty() && st->top() != '(') {
//                        result += st->top();
//                        st->pop();
//                    }
//                    st->push(s[i]);
//                    break;
//                case ')':
//                    while(!st->empty() && st->top() != '(') {
//                        result += st->top();
//                        st->pop();
//                    }
//                    st->pop();
//                    break;
//            }
//        }
//    }
//    while(!st->empty()) {
//        result += st->top();
//        st->pop();
//    }
//
//    cout << result << "\n";
//
//}
//
//
//int main(void) {
//    Stack* st = new Stack();
//    string s;
//    string result;
//    cin >> s;
//    
//    for(int i = 0; i < s.length(); i++) {
//        if('A' <= s[i] && s[i] <= 'Z') {
//            result += s[i];
//        }
//        else {
//            switch (s[i]) {
//                case '(':
//                    st->push(s[i]);
//                    break;
//                case '*':
//                case '/':
//                    while(!st->empty() && (st->top() == '*' || st->top() == '/')) {
//                        result += st->top();
//                        st->pop();
//                    }
//                    st->push(s[i]);
//                    break;
//                case '+':
//                case '-':
//                    while(!st->empty() && st->top() != '(') {
//                        result += st->top();
//                        st->pop();
//                    }
//                    st->push(s[i]);
//                    break;
//                case ')':
//                    while(!st->empty() && st->top() != '(') {
//                        result += st->top();
//                        st->pop();
//                    }
//                    st->pop();
//                    break;
//            }
//        }
//    }
//    while(!st->empty()) {
//        result += st->top();
//        st->pop();
//    }
//    cout << result << endl;
//}
////
////int main(void) {
////    Stack* st = new Stack();
////
////    string result;
////
////    string s;
////    cin >> s;
////
////    for(int i = 0; i < s.length(); i++) {
////        if('A' <= s[i] && s[i] <= 'Z') {
////            result += s[i];
////        }
////        else {
////            switch (s[i]) {
////                case '(':
////                    st->push(s[i]);
////                    break;
////                case '*':
////                case '/':
////                    while(!st->empty() && (st->top() == '*' || st->top() == '/')) {
////                        result += st->top();
////                        st->pop();
////                    }
////                    st->push(s[i]);
////                    break;
////                case '+':
////                case '-':
////                    while(!st->empty() && st->top() != '(') {
////                        result += st->top();
////                        st->pop();
////                    }
////                    st->push(s[i]);
////                    break;
////                case ')':
////                    while(!st->empty() && st->top() != '(') {
////                        result += st->top();
////                        st->pop();
////                    }
////                    st->pop();
////                    break;
////            }
////        }
////    }
////    while(!st->empty()) {
////        result += st->top();
////        st->pop();
////    }
////
////    cout << result << endl;
////}
////
////#include <iostream>
////
////using namespace std;
////
////class Stack {
////public:
////    int index;
////    char arr[100];
////
////    Stack() {
////        index = -1;
////    }
////
////    void push(char elem) {
////        index++;
////        arr[index] = elem;
////    }
////
////    void pop() {
////        index--;
////    }
////
////    char top() {
////        return arr[index];
////    }
////
////    bool empty() {
////        if (index == -1)
////            return true;
////        else
////            return false;
////    }
////};
////
////int main(void) {
////    Stack st = Stack();
////    string s;
////    cin >> s;
////    string result;
////
////    for(int i = 0; i < s.length(); i++) {
////        if('A' <= s[i] && s[i] <= 'Z') {
////            result += s[i];
////        }
////        else {
////            switch (s[i]) {
////                case '(':
////                    st.push(s[i]);
////                    break;
////                case '*':
////                case '/':
////                    while(!st.empty() && (st.top() == '*' || st.top() == '/')) {
////                        result += st.top();
////                        st.pop();
////                    }
////                    st.push(s[i]);
////                    break;
////                case '+':
////                case '-':
////                    while(!st.empty() && st.top() != '(') {
////                        result += st.top();
////                        st.pop();
////                    }
////                    st.push(s[i]);
////                    break;
////                case ')':
////                    while(!st.empty() && st.top() != '(') {
////                        result += st.top();
////                        st.pop();
////                    }
////                    st.pop();
////                    break;
////
////                default:
////                    break;
////            }
////        }
////    }
////    while(!st.empty()) {
////        result += st.top();
////        st.pop();
////    }
////
////    cout << result << endl;
////}
////
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
//
//int main(void) {
//    Stack st = Stack();
//    string result;
//    string s;
//    cin >> s;
//
//    for(int i = 0; i < s.length(); i++) {
//        if('A' <= s[i] && s[i] <= 'Z') {
//            result += s[i];
//        }
//        else {
//            switch (s[i]) {
//                case '(':
//                    st.push(s[i]);
//                    break;
//                case '*':
//                case '/':
//                    while(!st.empty() && (st.top() == '*' || st.top() == '/')) {
//                        result += st.top();
//                        st.pop();
//                    }
//                    st.push(s[i]);
//                    break;
//                case '+':
//                case '-':
//                    while(!st.empty() && st.top() != '(') {
//                        result += st.top();
//                        st.pop();
//                    }
//                    st.push(s[i]);
//                    break;
//                case ')':
//                    while(!st.empty() && st.top() != '(') {
//                        result += st.top();
//                        st.pop();
//                    }
//                    st.pop();
//                    break;
//                default:
//                    break;
//            }
//        }
//    }
//    while(!st.empty()) {
//        result += st.top();
//        st.pop();
//    }
//    cout << result << endl;
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
//
//int main(void) {
//    Stack st = Stack();
//
//    string result;
//    string s;
//    cin >> s;
//
//    for(int i = 0; i < s.length(); i++) {
//        if('A' <= s[i] && s[i] <= 'Z') {
//            result += s[i];
//        }
//        else {
//            switch (s[i]) {
//                case '(':
//                    st.push(s[i]);
//                    break;
//                case '*':
//                case '/':
//                    while(!st.empty() && (st.top() == '*' || st.top() == '/')) {
//                        result += st.top();
//                        st.pop();
//                    }
//                    st.push(s[i]);
//                    break;
//                case '+':
//                case '-':
//                    while(!st.empty() && st.top() != '(') {
//                        result += st.top();
//                        st.pop();
//                    }
//                    st.push(s[i]);
//                    break;
//                case ')':
//                    while(!st.empty() && st.top() != '(') {
//                        result += st.top();
//                        st.pop();
//                    }
//                    st.pop();
//                    break;
//                default:
//                    break;
//            }
//        }
//    }
//    while(!st.empty()) {
//        result += st.top();
//        st.pop();
//    }
//
//    cout << result << endl;
//}
