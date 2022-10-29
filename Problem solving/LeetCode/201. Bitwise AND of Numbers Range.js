var rangeBitwiseAnd = function (left, right) {

    let i=0;
    while (m!=n){
        m = m>>1;
        n = n>>1;
        i++;
    }
    
    return m<<i;

    
};

rangeBitwiseAnd(1, 2147483647)

// logically okay but time complexity problem

// let bitAnd = left
//     for (let i = left; i < right; i++) {
//         bitAnd = bitAnd & i
//     }
//     return(bitAnd & right)