// foreach loop in js
const numbers =[45,24,62,14,61,90];
let txt =" ";
for(let i in numbers){
    txt+=numbers[i]+"\n";
}
console.log(txt);

// using for in loop in js
for(let i =0;i<numbers.length;i++){
    txt+=numbers[i]+"\n";
}
console.log(txt);

// using for of loop in js
const cars = ["Bugati","Mackralen","Rolly Rosce"];
let text = " ";
for(let x of cars){
    text+=x;
}
console.log(text);

let langauge = "JavaScript";

console.log("\n" +langauge+"\n");

for(let k in langauge){
    console.log(langauge[k]+ " ");
}