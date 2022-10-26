// Input: operations = ["--X","X++","X++"]
// Output: 1
// Explanation: The operations are performed as follows:
// Initially, X = 0.
// --X: X is decremented by 1, X =  0 - 1 = -1.
// X++: X is incremented by 1, X = -1 + 1 =  0.
// X++: X is incremented by 1, X =  0 + 1 =  1.

var finalValueAfterOperations = function (operations) {
    let X = 0;
    for (let i = 0; i < operations.length; i++) {
        const element = operations[i];
        if (element == "X++") {
            X++;
        } else if (element == "++X") {
            ++X
        } else if (element == "X--") {
            X--
        } else if (element == "--X") {
            --X
        } else {
            // console.log(X)
        }
    }
    return X
};

finalValueAfterOperations(["--X", "X++", "X++"]);
// finalValueAfterOperations(["++X","++X","X++"]);