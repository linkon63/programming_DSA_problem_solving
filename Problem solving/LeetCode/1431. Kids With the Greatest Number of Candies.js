// https://leetcode.com/problems/kids-with-the-greatest-number-of-candies/
var kidsWithCandies = function (candies, extraCandies) {
    var big = 0
    var arr = []
    candies.map(num => {
        num >= big ? big = num : big = big
    })
    candies.map((num, i) => {
        let temp = num + extraCandies
        console.log(num, i, temp)
        if (big <= temp) {
            arr.push(true)
        } else {
            arr.push(false)
        }
    })
    return arr
};
kidsWithCandies([2, 3, 5, 1, 3], 3)