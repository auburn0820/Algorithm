//#include <iostream>
//
//using namespace std;
//
//const int MAX = 26;
//
//int alphabet[MAX];
//
//class Node {
//    Node* next;
//    double elem;
//    
//    Node() {
//        this->next = NULL;
//    }
//    Node(double elem) {
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
//    void push(double elem) {
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
//    double top() {
//        return head->next->elem;
//    }
//    bool empty() {
//        if (head->next == NULL) {
//            return true;
//        }
//        else
//            return false;
//    }
//};
//
//int main(void) {
//    Stack* st = new Stack();
//
//    int N;
//    cin >> N;
//    string s;
//    cin >> s;
//
//    for(int i = 0; i < N; i++) {
//        cin >> alphabet[i];
//    }
//
//    for(int i = 0; i < s.length(); i++) {
//
//        if (s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/') {
//            double a = st->top();
//            st->pop();
//            double b = st->top();
//            st->pop();
//            double result;
//            switch(s[i]) {
//                case '+':
//                    result = b + a;
//                    st->push(result);
//                    break;
//                case '-':
//                    result = b - a;
//                    st->push(result);
//                    break;
//                case '*':
//                    result = b * a;
//                    st->push(result);
//                    break;
//                case '/':
//                    result = b / a;
//                    st->push(result);
//                    break;
//            }
//        }
//        else {
//            st->push(alphabet[s[i] - 'A']);
//        }
//    }
//    double result = st->top();
//    cout << fixed;
//    cout.precision(2);
//    cout << result << "\n";
//}
//
//int main(void) {
//    Stack* st = new Stack();
//
//    int N;
//    cin >> N;
//    string s;
//    cin >> s;
//
//    for(int i = 0; i < N; i++) {
//        cin >> alphabet[i];
//    }
//
//    for(int i = 0; i < s.length(); i++) {
//        if(s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/') {
//            double a = st->top();
//            st->pop();
//            double b = st->top();
//            st->pop();
//
//            switch (s[i]) {
//                case '+':
//                    st->push(b+a);
//                    break;
//                case '-':
//                    st->push(b-a);
//                    break;
//                case '*':
//                    st->push(b*a);
//                    break;
//                case '/':
//                    st->push(b/a);
//                    break;
//            }
//        }
//        else {
//            st->push(alphabet[s[i] - 'A']);
//        }
//    }
//    double result = st->top();
//    cout << fixed;
//    cout.precision(2);
//    cout << result << endl;
//}

//
//
//int main(void) {
//    Stack* st = new Stack();
//
//    int N;
//    cin >> N;
//    string s;
//    cin >> s;
//    for(int i = 0; i < N; i++) {
//        cin >> alphabet[i];
//    }
//
//    for(int i = 0; i < s.length(); i++) {
//        if(s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/') {
//            double a = st->top();
//            st->pop();
//            double b = st->top();
//            st->pop();
//            switch (s[i]) {
//                case '+' :
//                    st->push(b+a);
//                    break;
//                case '-' :
//                    st->push(b-a);
//                    break;
//                case '*':
//                    st->push(b*a);
//                    break;
//                case '/':
//                    st->push(b/a);
//                    break;
//            }
//        }
//        else {
//            st->push(alphabet[s[i] - 'A']);
//        }
//    }
//    double result = st->top();
//    cout << fixed;
//    cout.precision(2);
//    cout << result << endl;
//}
//
//#include <iostream>
//
//using namespace std;
//
//double alphabet[26];
//
//class Stack {
//public:
//    int index;
//    double arr[100];
//
//    Stack() {
//        index = -1;
//    }
//
//    void push(double elem) {
//        index++;
//        arr[index] = elem;
//    }
//
//    void pop() {
//        index--;
//    }
//
//    double top() {
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
//    int N;
//    cin >> N;
//    string s;
//    cin >> s;
//
//    for(int i = 0; i < N; i++) {
//        cin >> alphabet[i];
//    }
//
//    for(int i = 0; i < s.length(); i++) {
//        if(s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/') {
//            double a = st.top();
//            st.pop();
//            double b = st.top();
//            st.pop();
//
//            switch (s[i]) {
//                case '+':
//                    st.push(b+a);
//                    break;
//                case '-':
//                    st.push(b-a);
//                    break;
//                case '*':
//                    st.push(b*a);
//                    break;
//                case '/':
//                    st.push(b/a);
//                    break;
//                default:
//                    break;
//            }
//        }
//        else {
//            st.push(alphabet[s[i] - 'A']);
//        }
//    }
//    double result = st.top();
//    cout << fixed;
//    cout.precision(2);
//
//    cout << result << endl;
//
//}
