// 680. Valid Palindrome II
// Given a string s, return true if the s can be palindrome after deleting at most one character from it.
// Example 1:
// Input: s = "aba"
// Output: true
// Example 2:
// Input: s = "abca"
// Output: true
// Explanation: You could delete the character 'c'.
// Example 3:
// Input: s = "abc"
// Output: false

// https://leetcode.com/problems/valid-palindrome-ii/
var validPalindrome = function(s) {
    let re = s.split("").reverse().join("")
    if(s === re){
        console.log(true)
    }else{
        console.log(false)
    }
};

validPalindrome("abc")



