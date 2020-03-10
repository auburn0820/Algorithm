//// 순서대로 스택에 넣는다.
//// 확인 과정 -> 스택의 top() 함수의 반환값이 입력값보다 작을 경우 NO를 출력.
//
//#include <iostream>
//#include <stack>
//#include <string>
//
//
//std::stack<int> st;
//
//int size = 0;
//int top = 0;
//std::string s = "";
//
//void stackSequence(int data) {
//    if(st.empty()) {
//        if(size == 0) {
//            for(int i = 1; i <= data; i++) {
//                st.push(i);
//                size++;
//                s += "+";
//            }
//            st.pop();
//            s += "-";
//        }
//        else if(size > data) {
//            s.clear();
//            s = "NO";
//            return;
//        }
//        else {
//            for(int i = size + 1; i <= data; i++) {
//                st.push(i);
//                size += 1;
//                s += "+";
//            }
//            st.pop();
//            s += "-";
//        }
//    }
//    else {
//        if(st.top() == data) {
//            st.pop();
//            s += "-";
//        }
//        else if(size < data) {
//            for(int i = size + 1; i <= data; i++) {
//                st.push(i);
//                s += "+";
//                size += 1;
//            }
//            st.pop();
//            s += "-";
//        }
//        else if(size > data){
//            s.clear();
//            s = "NO";
//            return;
//        }
//    }
//}
//
//int main(void) {
//    int n, m;
//    
//    std::cin >> n;
//    
//    while(n--) {
//        std::cin >> m;
//        stackSequence(m);
//    }
//    if(s[0] != 'N') {
//        for(int i = 0; i < s.length(); i++) {
//            std::cout << s[i] << "\n";
//        }
//    }
//    else {
//        std::cout << "NO\n";
//    }
//}
