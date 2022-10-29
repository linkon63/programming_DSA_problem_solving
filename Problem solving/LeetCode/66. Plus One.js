// 66. Plus One
// Add to List
// Share
// You are given a large integer represented as an integer array digits, 
// where each digits[i] is the ith digit of the integer. The digits are
// ordered from most significant to least significant in left-to-right order.
// The large integer does not contain any leading 0's.
// Increment the large integer by one and return the resulting array of digits.

var plusOne = function (digits) {
    const number = digits.join("")
    let addOne = BigInt(number)
    addOne += 1n
    return Array.from(String(addOne), Number)
};

console.log(plusOne([9, 9]));

//    const len = digits.length
// const lastIndexValue = digits[len - 1]
// if (len == 1) {
//     if (lastIndexValue == 9) {
//         return ([1, 0])
//     } else {
//         return ([lastIndexValue + 1])
//     }
// } else if (len > 0) {
//     if (digits[0] == 9 && digits[1]) {
//         return [1, 0, 0]
//     }
//     digits.pop()
//     digits.push(...[lastIndexValue + 1])
//     return digits
// } else {
//     return []
// }