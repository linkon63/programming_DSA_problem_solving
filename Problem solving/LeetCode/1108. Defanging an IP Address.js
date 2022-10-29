// 1108. Defanging an IP Address
// Given a valid (IPv4) IP address, return a defanged version of that IP address.
// A defanged IP address replaces every period "." with "[.]".
// Example 1:
// Input: address = "1.1.1.1"
// Output: "1[.]1[.]1[.]1"
// Example 2:
// Input: address = "255.100.50.0"
// Output: "255[.]100[.]50[.]0"
// Constraints:
// The given address is a valid IPv4 address.
// https://leetcode.com/problems/defanging-an-ip-address/

var defangIPaddr = function (address) {
    return address.replace(/\./g, "[.]");
    // console.log(address.replace(/\./g,"[.]"));
    // console.log(address);
    // return address.split('.').join('[.]');
    // console.log(address.split('.').join('[.]'));
};

defangIPaddr("255.100.50.0")



