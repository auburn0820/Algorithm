//#include <iostream>
//#include <stack>
//#include <string>
//using namespace std;
//
//int main(void) {
//
//    string s;
//    cin >> s;
//    int N;
//    cin >> N;
//
//    stack<char> st1, st2;
//
//    for(int i = 0; i < s.length(); i++) {
//        st1.push(s[i]);
//    }
//
//    while(N--) {
//        char input;
//        cin >> input;
//
//        if (input == 'L') {
//            if(!st1.empty()) {
//                st2.push(st1.top());
//                st1.pop();
//            }
//        }
//        else if (input == 'D') {
//            if(!st2.empty()) {
//                st1.push(st2.top());
//                st2.pop();
//            }
//        }
//        else if (input == 'B') {
//            if(!st1.empty()) {
//                st1.pop();
//            }
//        }
//        else if (input == 'P') {
//            char character;
//            cin >> character;
//            st1.push(character);
//        }
//    }
//    while (!st1.empty()) {
//        st2.push(st1.top());
//        st1.pop();
//    }
//
//    while(!st2.empty()) {
//        cout << st2.top();
//        st2.pop();
//    }
//    cout << "\n";
//}
