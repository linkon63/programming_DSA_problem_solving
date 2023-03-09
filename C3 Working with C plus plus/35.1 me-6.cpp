#include <iostream>
#include <deque>
#include <vector>

using namespace std;

vector<int> sortLadderArray(vector<int> arr) {
    deque<int> dq;

    for (int i = 0; i < arr.size(); i++) {
        if (dq.empty() || arr[i] < dq.front()) {
            dq.push_front(arr[i]);
        } else {
            while (!dq.empty() && arr[i] > dq.back()) {
                dq.pop_back();
            }
            dq.push_back(arr[i]);
        }
    }

    vector<int> sortedArr(dq.begin(), dq.end());

    return sortedArr;
}

int main() {
    vector<int> arr = {1, 3, 5, 7, 2, 0};
    vector<int> sortedArr = sortLadderArray(arr);

    for (int i = 0; i < sortedArr.size(); i++) {
        cout << sortedArr[i] << " ";
    }

    return 0;
}


//#include <iostream>
//#include <set>
//#include <algorithm>
//
//using namespace std;
//
//set<int> setUnion(set<int> set1, set<int> set2) {
//    set<int> unionSet;
//
//    set_union(set1.begin(), set1.end(), set2.begin(), set2.end(), inserter(unionSet, unionSet.begin()));
//
//    return unionSet;
//}
//
//int main() {
//    int n,n2;
//    cin>>n;
//
//    set<int> set1;
//    set<int> set2;
//
//    int value = 0;
//    for(int i = 0; i<n; i++){
//        cin>>value;
//        set1.insert(value);
//    }
//    cin>>n2;
//    int value2 = 0;
//    for(int i = 0; i<n2; i++){
//        cin>>value2;
//        set2.insert(value2);
//    }
//
////    for(auto i:set1)
////    {
////        cout<<i<<" ";
////    }
//
//
//    set<int> unionSet = setUnion(set1, set2);
//
//    for (int x : unionSet) {
//        cout << x << " ";
//    }
//
//    return 0;
//}
//




//#include <iostream>
//#include <deque>
//#include <vector>
//
//using namespace std;
//
//vector<int> sortLadderArray(vector<int> arr) {
//    deque<int> dq;
//
//    for (int i = 0; i < arr.size(); i++) {
//        if (dq.empty() || arr[i] < dq.front()) {
//            dq.push_front(arr[i]);
//        } else {
//            while (!dq.empty() && arr[i] > dq.back()) {
//                dq.pop_back();
//            }
//            dq.push_back(arr[i]);
//        }
//    }
//
//    vector<int> sortedArr(dq.begin(), dq.end());
//
//    return sortedArr;
//}
//
//int main() {
//    int n;
//    cin>>n;
//    vector<int> arr(n);
//
//    for(int i = 0; i < n; i++){
//        cin>>arr[i];
//    }
//
//    vector<int> sortedArr = sortLadderArray(arr);
//
//    for (int i = 0; i < sortedArr.size(); i++) {
//        cout << sortedArr[i] << " ";
//    }
//
//    return 0;
//}
