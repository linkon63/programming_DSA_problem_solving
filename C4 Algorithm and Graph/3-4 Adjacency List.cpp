
/*

grap representation

topic : adjacency matrix

0------1
    /   \
    2----3

total nodes = 4
total edge = 4
0-> 1
1-> 0,2,3
2-> 1,3
3-> 1,2

o/p

0 -> 1
1 -> 0 2 3
2 -> 1 3
3 -> 1 2


time  c = o(1)  + o(n*n) + o(n*n) = o(n*n)
space c = o(1) + o(n) + o(n*n) = o(n*n)


    2
0-------->1
    4
1-------->2
    8
3--------->2
    7
3---------->1


0-> (1,2)
1-> (2,4)
2-> ()
3-> (2,8),(1,7)

o/p

0 ->  (1 ,2)
1 ->  (2 ,4)
2 ->
3 ->  (2 ,8) (1 ,7)

*/
#include<bits/stdc++.h>
using namespace std;

int main()
{
//    vector<int>adj_list[nodes];

    int nodes = 4; //o(1)
    vector<pair<int, int>>adj_list[nodes];

    adj_list[0] = { {1,2} };
    adj_list[1] = { {2,4} };
    adj_list[3] = { {2,8},{1,7} };


//    adj_list[0].push_back({1,2});
//    adj_list[1].push_back({2,4});
//    adj_list[3].push_back({3,8});
//    adj_list[3].push_back({1,7});

//    o(edge * 2) -> o(e) -> worst case o(n^2)
//    adj_list[0] = {1};
//    adj_list[1] = {0,2,3};
//    adj_list[2] = {1,3};
//    adj_list[3] = {1,2};


      // o(edge * 2) -> o(e) -> o(n^2)
    for(int i = 0; i<nodes; i++)
    {
        cout<<i<<" -> ";
        for(int j = 0; j < adj_list[i].size(); j++)
        {
            cout<<" ("<<adj_list[i][j].first<<" ,"<<adj_list[i][j].second<<")";
//            cout<<adj_list[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}


