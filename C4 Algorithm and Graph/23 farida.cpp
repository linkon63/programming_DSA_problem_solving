/*
 * This is the solution to problem 'Princess Farida' on SPOJ. Link : http://www.spoj.com/problems/FARIDA/
 *
 * The problem can be solved using Dynamic Programming, the recurrence
 * relation for the DP is :
 *      DP[i] = INPUT[i] + MAX( DP[i-2], DP[i-3] )  ...  Think yourself 'why ?'
 *
 * Now, as we see that the DP requires only upto 3rd previous term, we can
 * minimize the storage required to 4 values only and use a cyclic array
 * for the DP. Carefully study the solution to see how.
 */

#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int T, N, c;            // c is the index for the cyclic array.
    long long tmp, dp[4];   // dp is the cyclic array, note that dp has size 4
                            // and that is all we require to solve the problem.
    cin >> T;
    for(int tc=1; tc<=T; ++tc){
        cin >> N;
        c = 0;              // initialise c to 0 and initialise all elements of dp to 0
        for(int i=0; i<4; ++i) dp[i] = 0;
        for(int i=0; i<N; ++i){
            cin >> tmp;
            dp[c] = tmp + max( dp[(c+2)%4], dp[(c+1)%4] );      // (c+1)%4 is equivalent to c-3 on a linear index
            c = (c+1)%4;                                        // similarly (c+2)%4 === c-2 and so on
        }
        tmp = max( dp[(c+2)%4], dp[(c+3)%4] );                  // solution is the maximum of the last 2 values
        cout << "Case " << tc << ": " << tmp << endl;           // in the dp array.
    }
    return 0;
}
