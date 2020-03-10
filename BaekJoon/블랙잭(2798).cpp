//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//vector<int> cards;
//
//int N, M;
//int sum = 0;
//int result = 0;
//int difference = 100001;
//
//int main(void) {
//    
//    cin >> N >> M;
//    
//    while(N--) {
//        int cardNumber;
//        cin >> cardNumber;
//        cards.push_back(cardNumber);
//    }
//    
//    for(int i = 0; i < cards.size(); i++) {
//        for(int j = i + 1; j < cards.size(); j++) {
//            for(int k = j + 1; k < cards.size(); k++) {
//                sum = cards[i] + cards[j] + cards[k];
//
//                if(sum <= M) {
//                    if((M - sum) < difference) {
//                        difference = (M - sum);
//                        result = sum;
//                    }
//                }
//            }
//        }
//    }
//    
//    cout << result << "\n";
//}
