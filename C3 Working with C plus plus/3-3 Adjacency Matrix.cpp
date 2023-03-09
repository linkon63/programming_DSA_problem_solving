/*

grap representation

topic : adjacency matrix

0------1
    /   \
    2----3

total nodes = 4
total edge = 4

undirected + unweighter


matrix -> num of node x num of nodes
        ->4x4
matrix[i][j] = 1
if and only if)i -> j)
0-1
1-0
1-2
2-1
2-3
3-2
3-1
1-3

o/p

0 1 0 0
1 0 1 1
0 1 0 1
0 1 1 0

adjacency matrix
space complexity -> o(n^2)
time complexity -> o(n^2)
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    int nodes = 4; //o(1)
    int matrix[4][4] = {}; //o(n^2)

    // o(e) number of edge // max e = n^2
    /// maximum edge in a graph n*n = n^2
    matrix[0][1] = 1;
    matrix[1][0] = 1;

    matrix[1][2] = 1;
    matrix[2][1] = 1;

    matrix[2][3] = 1;
    matrix[3][2] = 1;

    matrix[3][1] = 1;
    matrix[1][3] = 1;





    //o(n^2)
    for(int i = 0; i<nodes; i++){
        for(int j = 0; j<nodes; j++){
         cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}


