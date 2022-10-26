// 21. Merge Two Sorted Lists
// You are given the heads of two sorted linked lists list1 and list2.

// Merge the two lists in a one sorted list. The list should be made by splicing together the nodes of the first two lists.

// Return the head of the merged linked list.



// Example 1:


// Input: list1 = [1,2,4], list2 = [1,3,4]
// Output: [1,1,2,3,4,4]
// Example 2:

// Input: list1 = [], list2 = []
// Output: []
// Example 3:

// Input: list1 = [], list2 = [0]
// Output: [0]


// Constraints:

// The number of nodes in both lists is in the range [0, 50].
// -100 <= Node.val <= 100
// Both list1 and list2 are sorted in non-decreasing order.

// https://leetcode.com/problems/merge-two-sorted-lists/


var mergeTwoLists = function (list1, list2) {
    let newArr = []
    if (list1.length > 0 && list2.length > 0) {

        for (let i = 0; i < list1.length; i++) {
            let e = list1[i];
            let el = list1[i];
            if( e < el){
                
            }
            
        }

        // newArr = [...list1, ...list2]
        // let arr = newArr.sort()
        // console.log(arr)
    }
    if (list1.length == 0 && list2.length == 0) {
        console.log([])
    }
    if (list1.length > 0 && list2.length == 0) {
        console.log(list1)
    }
    if (list1.length == 0 && list2.length > 0) {
        console.log(list2)
    }
    // return newArr
};

// mergeTwoLists([0], [0])
mergeTwoLists([1, 2, 4], [1, 3, 4])


