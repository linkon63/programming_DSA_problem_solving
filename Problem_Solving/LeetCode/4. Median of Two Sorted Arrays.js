// Given two sorted arrays nums1 and nums2 of size m and n respectively, return the median of the two sorted arrays.
// The overall run time complexity should be O(log (m+n)).

// Example 1:

// Input: nums1 = [1,3], nums2 = [2]
// Output: 2.00000
// Explanation: merged array = [1,2,3] and median is 2.
// Example 2:

// Input: nums1 = [1,2], nums2 = [3,4]
// Output: 2.50000
// Explanation: merged array = [1,2,3,4] and median is (2 + 3) / 2 = 2.5.


// Constraints:

// nums1.length == m
// nums2.length == n
// 0 <= m <= 1000
// 0 <= n <= 1000
// 1 <= m + n <= 2000
// -106 <= nums1[i], nums2[i] <= 106

// https://leetcode.com/problems/median-of-two-sorted-arrays/



var findMedianSortedArrays = function (nums1, nums2) {
    const merge = [...nums1, ...nums2].sort((a, b) => a - b);
    const mid = Math.floor((merge.length - 1) / 2);
    console.log(merge);
    if ((merge.length % 2) === 0) {
        const reValue = (merge[mid] + merge[mid + 1]) / 2;
        return (reValue);
    } else {
        const reValue = merge[mid]  //parseFloat(Math.ceil((nOne + nTow) / 2));
        return (reValue);
    }
};
let ar1 = [2, 3, 5, 8]
let ar2 = [10, 12, 14, 16, 18, 20]
findMedianSortedArrays(ar1, ar2)


// let mergedArr = [...nums1, ...nums2].sort((a,b) => a-b);
//     if(mergedArr.length % 2 === 0) {
//         let mid = Math.floor((0+mergedArr.length-1)/2);
//         return ((mergedArr[mid] + mergedArr[mid+1])/2);
//     } else {
//         let mid = Math.floor((0+mergedArr.length-1)/2);
//         return mergedArr[mid];
//     }