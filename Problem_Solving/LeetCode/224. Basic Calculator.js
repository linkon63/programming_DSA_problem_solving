var addDigits = function (num) {
    if (num == 0) {
        return 0
    }
    let nString = num + ""
    let len = nString.length
    let number = 0
    let i = 0
    while (len > 0) {
        if (len == 1) {
            console.log("Len 1 :", nString, len);
        }
        number = number + parseInt(nString[i])
        console.log("Number:", number);
        len --
        // nString = number + ""
        // console.log("nString:", nString);
        // len = (number + "").length
        // console.log("len:", len);
        // i++

        // for (let i = 0; i < nString.length; i++) {
        //     const element = nString[i];
        // }
    }
    console.log("Number:", number);
};

const addNumber = (data) => {
    const element = nString[i];
    const num = parseInt(element)
    number = number + num
    console.log("Element", element, "Add", number)
}

addDigits(38)
