const searchRange = function (nums, target) {
    let result = [-1, -1];
    let len = nums.length
    for (let index = 0; index < len; index++) {
        if (nums[index] === target && result[0] === -1) {
            result[0] = index;
        }
        if (nums[len - (1 + index)] === target && result[1] === -1) {
            result[1] = len - (1 + index);
        }
    }
    return result;
};
// var searchRange = function (nums, target) {
//     // console.log(nums, target);
//     let arr = []
//     const len = nums.length
//     if (len == 0) {
//         // return ([-1, -1]);
//         console.log([-1, -1]);
//     } else if (len == 1) {
//         // return [0]
//         if (nums[0] == target) {
//             console.log([0, 0])
//         }
//         else {
//             console.log([-1, -1]);
//         }
//     }

//     for (let i = 0; i < nums.length; i++) {
//         const element = nums[i];
//         if (element == target) {
//             //    console.log(nums.indexOf(element,i))
//             arr.push(nums.indexOf(element, i))
//         }
//     }
//     if (arr.length == 0) {
//         // return ([-1, -1]);
//     } else if (arr.length == 1) {
//         return [...arr, arr[0]]
//     }
//     return arr

//     // console.log("Length:", len);
//     // console.log("Got Value:", arr);
// };

// const nums = [1]
// const target = 0

// searchRange(nums, target)