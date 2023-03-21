#include <iostream>
using namespace std;

int power(int n, int m)
{
    if (m == 0)
    {
        return 1;
    }
    else
    {
        return n * power(n, m - 1);
    }
}

int main()
{
    int n, m;
    cin >> n;
    cin >> m;
    int result = power(n, m);
    cout <<result << endl;
    return 0;
}



/**
Theory Assignment 01
Marks
Question no 1

Convert the following Adjacency Matrix into an Adjacency List and draw the graph. 											     20
(no need to code)

     0 1 2 3 4 5 6
—------------------
0 | 0 0 0 0 0 0 0
1 | 0 0 1 1 0 0 0
2 | 0 1 0 0 1 0 0
3 | 0 1 0 0 1 0 0
4 | 0 0 1 1 0 1 1
5 | 0 0 0 0 1 0 0
6 | 0 0 0 0 1 0 0


The resulting Adjacency List for the given matrix is:
0: []
1: [2, 3]
2: [1, 4]
3: [1, 4]
4: [2, 3, 5, 6]
5: [4]
6: [4]


Question no 2

You are given two positive integers n and m . Now calculate the value of n to the power m using recursion.Write a C++ program for it.		     20

Sample Input
Sample Output
2   4
16



Question no 3

What is the difference between BFS and DFS algorithms?	(At least Five) 20




Question no 4

What is BFS and how does it work? What is DFS and how does it work?
 (With Figure) 										     20


Question no 5


Perform BFS and DFS Traversal on the following graph and write the traversal output. Choose node 2 as the source. You must write all steps you perform for doing BFS and DFS Traversal on the following graph.	     20

888

**/
