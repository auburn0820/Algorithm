//#include <iostream>
//#include <stack>
//
//using namespace std;
//
//int main(){
//    int count = 0;
//    stack<char> st;
//    string s;
//    cin >> s;
//    
//    for(int i = 0; i < s.length(); i++){
//        if(s[i] == '(' || st.empty()){
//            st.push(s[i]);
//            if(s[i+1] != ')')
//            count += 1;
//        }
//        else if(s[i] == ')'){
//            st.pop();
//            if(s[i-1] == '(')
//                count = count + st.size();
//        }
//    }
//    
//    cout << count << endl;
//    
//    return 0;
//}
