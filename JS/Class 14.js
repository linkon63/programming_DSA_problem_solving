// Programming Language
// 1. Variable
// 2. Condition

// 3. Loop
// 4. Array
// 5. Function

// +++++++++++ topic 3 loop +++++++++++

// for loop

// console.log("For loop printing");
// for (let i = 5; i <= 10; i++) {
//     console.log("Printing numbers:",i)
// }

// console.log("While loop printing");
// let t = 4
// while(t--){
//     console.log("Printing numbers:",t)
// }
// let t = 1;
// while(t>0){
//     console.log("Printing numbers:",t)
//     t--
// }

// do {
//     t++
//     console.log(t);
// } while (t < 10 );

// error handling 
// try {
//     // do
//     // state 
//     // call api async 
//     const a = 10
//     a = 15
// } catch (error) { // error while
//     console.log("Catch error:",error);
// }

//      break and continue and multiple loops 
//      nested loop
// let a = 10
// for (let i = 0; i < 5; i++) {
//     console.log("i : ", i);
//     let t = 4
//     while (t--) {
//         console.log("    => t : ", t);
//         if (t == i) {
//             break
//         }
//     }

//     let d = 4
//     while (d--) {
//         if (d != i) {
//             console.log("           => d : ", d);
//             continue
//         }else{
//             console.log("           => d : ", d);
//             break
//         } 
//     }
// }

// array print in c

//int arrOp(int *arr[100], int size)
//{
//    int i;
//
//    for(i = 0; i < size; i++)
//    {
//        printf("%d ",arr[i]);
//    }
//    return 0;
//}

const arr = [10, 26, 3, 45, 62];
// console.log("Before array push:",arr);
// // console.log("Array[0]:",arr[0]);
// // console.log("Array[2]:",arr[2]);
// console.log("Array length:",arr.length);
// arr.push(20)
// console.log("After array push:",arr);
// console.log("Array length:",arr.length);


// arr.pop()
// console.log("Array pop:",arr);

// arr.map((singleItem) => (
//     console.log(singleItem)
//     return
// )
// )
// no return value// const arr = [1, 2, 3, 6, 5, 45, 45]
// const arrTarget = []
// // let value = arr.map((a, i) => {
// //     if(arr[i] == 45){
// //         arrTarget.push(arr[i])
// //        // return i;
// //     }
// // }
// // )
// // arr.map((a, i) => {
// //     if(arr[i] == 45){
// //         arrTarget.push(i)
// //        // return i;
// //     }
// // }
// // )

// // console.log("returnInArr:",arrTarget);

// arr.forEach((num,i) => {
//     console.log(num);
// })

// // for loop while loop do while = 1
// // fore each and map different 


// let studentObject = { name: "Linkon", id: 21203059, course: "BCSE" }
// console.log('====================================');
// console.log("Student Object:", studentObject);
// console.log("Student Object Name:", studentObject.name, " Type:", typeof (studentObject.name));
// console.log("Student Object id:", studentObject.id, " Type:", typeof (studentObject.id));
// console.log("Student Object course:", studentObject.course);
// console.log('====================================');

let array = []

for (let i = 0; i < 10; i++) {
    const object = { name: `S-${i}`, age: i, id: i + 1 }
    array.push(object)
}

console.log('====================================');
console.log("array", array);
console.log('====================================');


// product name product id
// order id order person
// track order array

// next day class
// nested object nested array nested array condition in non-sql










