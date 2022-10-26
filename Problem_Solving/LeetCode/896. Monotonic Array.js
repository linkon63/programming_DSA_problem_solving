// 896. Monotonic Array
// An array is monotonic if it is either monotone increasing or monotone decreasing.

// An array nums is monotone increasing if for all i <= j, nums[i] <= nums[j]. An array nums is monotone decreasing if for all i <= j, nums[i] >= nums[j].

// Given an integer array nums, return true if the given array is monotonic, or false otherwise.



// Example 1:

// Input: nums = [1,2,2,3]
// Output: true
// Example 2:

// Input: nums = [6,5,4,4]
// Output: true
// Example 3:

// Input: nums = [1,3,2]
// Output: false


// Constraints:

// 1 <= nums.length <= 105
// -105 <= nums[i] <= 105

// https://leetcode.com/problems/monotonic-array/

var isMonotonic = function (nums) {
    console.log(nums)

    const first = nums[0]
    const last = nums[nums.length - 1]
    if (first < last) {
        for (let i = 0; i < nums.length - 1; i++) {
            const val = nums[i];
            const val2 = nums[i + 1];
            // console.log(val," -- ", val2)
            if ((val <= val2) == false) {
                // console.log(val, " <= ", val2, "false")
                return false
            }
        }

    } else {
        for (let i = 0; i < nums.length - 1; i++) {
            const val = nums[i];
            const val2 = nums[i + 1];
            if ((val >= val2) == false) {
                // console.log(val, " >= ", val2, "false")
                return false
            }
        }
    }

    return true
};

// isMonotonic( [6,5,4,4])
console.log(isMonotonic([6,5,4,6,4]))

// let first = [0], last = nums.length - 1
    // if (first < last) {
    //     // console.log("last is bigger then first")
    //     for (let i = 0; i < nums.length; i++) {
    //         // const element = nums[i];
    //         if (nums[i] < nums[i - 1]) {
    //             console.log(nums[i], " < ", nums[i - 1], " = ", false)
    //         }
    //     }
    // }else{
    //     for (let i = 0; i < nums.length; i++) {
    //         // const element = nums[i];
    //         if (nums[i] > nums[i - 1]) {
    //             console.log(nums[i], " > ", nums[i - 1], " = ", false)
    //         }
    //     }
    // }