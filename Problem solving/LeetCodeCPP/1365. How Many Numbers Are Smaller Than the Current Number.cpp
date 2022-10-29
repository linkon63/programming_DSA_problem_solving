
// 1365. How Many Numbers Are Smaller Than the Current Number
// Given the array nums, for each nums[i] find out how many numbers in the array are smaller than it. That is, for each nums[i] you have to count the number of valid j's such that j != i and nums[j] < nums[i].
// Return the answer in an array.

// Example 1:

// Input: nums = [8,1,2,2,3]
// Output: [4,0,1,1,3]
// Explanation: 
// For nums[0]=8 there exist four smaller numbers than it (1, 2, 2 and 3). 
// For nums[1]=1 does not exist any smaller number than it.
// For nums[2]=2 there exist one smaller number than it (1). 
// For nums[3]=2 there exist one smaller number than it (1). 
// For nums[4]=3 there exist three smaller numbers than it (1, 2 and 2).
// Example 2:

// Input: nums = [6,5,4,8]
// Output: [2,1,0,3]
// Example 3:

// Input: nums = [7,7,7,7]
// Output: [0,0,0,0]


// Constraints:

// 2 <= nums.length <= 500
// 0 <= nums[i] <= 100
// https://leetcode.com/problems/how-many-numbers-are-smaller-than-the-current-number/


// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
using namespace std;
class Solution {

public:
    vector <int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> vec = nums;
        vector<int> newArr;
        int count = 0;
          for(int i=0; i < vec.size(); i++){
              int val1 = vec[i];
            for(int j=0; j < vec.size(); j++ ){
              int val2 = vec[j];
                if(val1>val2){
                    count += 1;
                }
            }
            newArr.push_back(count);
            count = 0;
          }
          return newArr;
    }
};

int main() {
    // Write C++ code here
    Solution solObj;
    vector<int> arr = {8,1,2,2,3};
    vector <int> retArr = solObj.smallerNumbersThanCurrent(arr);
      for(int i=0; i < retArr.size(); i++){
              cout<<retArr[i]<<endl;
          }
    return 0;
}


    // vector<int> arr[] = {1,2,3,6,4};
    // solObj.smallerNumbersThanCurrent(arr);
    
    // vector<int> g1;
  
    // for (int i = 1; i <= 5; i++)
    //     g1.push_back(i);
  
    // cout << "Size : " << g1.size();
    // cout << "\nCapacity : " << g1.capacity();
    // cout << "\nMax_Size : " << g1.max_size();
  
    // // resizes the vector size to 4
    // g1.resize(4);
  
    // // prints the vector size after resize()
    // cout << "\nSize : " << g1.size();
  
    // // checks if the vector is empty or not
    // if (g1.empty() == false)
    //     cout << "\nVector is not empty";
    // else
    //     cout << "\nVector is empty";
  
    // // Shrinks the vector
    // g1.shrink_to_fit();
    // cout << "\nVector elements are: ";
    // for (auto it = g1.begin(); it != g1.end(); it++)
    //     cout << *it << " ";
  
    
    // cout << "Hello world!";