var getConcatenation = function(nums) {
    const array = nums;
    const arrayCopy = [...nums];
    const arrayExtend = [...array,...arrayCopy]
    return arrayExtend;
};

console.log(getConcatenation([1,2,3,6,4]));

// var getConcatenation = function(nums) {
//     return [...nums,...nums];
// };