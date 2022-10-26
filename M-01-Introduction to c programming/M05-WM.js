var number = prompt("");
const a = parseInt(number);

const div = a / 2
const intNumber = Number.isInteger(div)
// console.log(div)
// console.log("type of", typeof(div))
// console.log("typeof", intNumber)
if(!intNumber){
  console.log("NO")
}else{
  if(div % 2 == 0){
    console.log("YES")
  }else{
    console.log("NO")
  }
}