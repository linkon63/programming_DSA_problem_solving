// https://leetcode.com/problems/divide-two-integers/


var divide = function (dividend, divisor) {
    if (dividend === -2147483648 && divisor === -1) return 2147483647;
    const result = parseInt(dividend / divisor)
    return result
};

divide(-2147483648, -1)
