//#include <iostream>
//
//using namespace std;
//
//int main(){
//    int alphabet[26];
//    string s;
//    cin >> s;
//
//    for(int i = 0; i < 26; i++){
//        alphabet[i] = -1;
//    }
//
//    for(int i = 0; i < s.length(); i++){
//        if(alphabet[s[i] - 'a'] != -1) continue;
//        else alphabet[s[i]-'a'] = i;
//    }
//
//    for(int i = 0; i < 26; i++){
//        cout << alphabet[i] << " ";
//    }
//    cout << "\n";
//    return 0;
//}
