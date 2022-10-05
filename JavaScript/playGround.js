/*
WHAT WE GOING TO LEARN IN THIS :
1. how to work with javascript
2. If-else
// 3. for loop
4. function and functions literals :
   a. normal method of writing functions 
   b. ES6 method of writing functions.
   c. Array function and implicit functions. (61)
   d. Exercise Questions.
5. Arrays (83)
6. Objects (91)
7. functions for object (110)
3. loops (138)
9. Higher Order Functions (254)
   a. map
   b. filter
   c. reduce
10. DOM manipulation (316)

*/
/*
Es6 notation mai function mai return hat jata hai or wo notation with 'function' keyword ke hoti hai.
eg: function (parameter ) {
   body
}  this is a typical noraml javascript notation.
ES6 notation of writing functions: const name = (parameter) => body.
*/

// // console.log('hi');

// // sentence = 'this is a sentence';
// // console.log(sentence);

// // paisa = prompt("enter your number.");
// // console.log(paisa);
// // console.log("after multiplying this no. with 2, we get :");
// // result = paisa * 2;
// // console.log(result);
// // CONSOLE MAI SHOW KARNE KI JAGAH ALERT KA USE BHI KAR SKTE HAI.
// // PROMPT KA USE KARTE NHI HAI WESE USER SE DATA LENE KE LIYE
// // ISKI JAGAH FORMS KA USE KARNA ZADA SUITABLE HAI.

//  // IF-ELSE :
// //  let weather = 'not rain';
// //  if(weather == 'rain') {
// //     console.log("grab your umberalla");
// //  } else {
// //     console.log("wear sunglasses.");
// //  }

//  //   FUNCTIOINS :
//  function sayName(name){
//    console.log("hi "+name+', how are you.');
//  }
// //  sayName('amit');
  
//  // FUNCTION LITERALS
//  function greeting(name) {
//    greet = `hii ${name}, nice meeting you!`;
//    console.log(greet);
//  }
// //  greeting('spider man');

// function sum(a,b) {
//    return a+b;
// }
// num = sum(2,3);
// // console.log(num);

// // ARROW FUNCTION : ALLOW US TO WRITE SHORTER FUNCTION SYNTAX.
// // arrow function implicitly returns the return method.

// // IMPLICIT RETURN : mtlb jaruri nhi ki return statement lagana he hai.
// const sumArrow = (a,b) => a+b;
// // console.log(sumArrow(2,5));

// // EXERCISE QUESTIONS :
// const add = (a,b) => a+b;
// const sub = (a,b) => a-b;
// const div = (a,b) => a/b;
// const mul = (a,b) => a*b;
// function printfun(a,b) {
//    console.log(add(a,b));
//    console.log(sub(a,b));
//    console.log(div(a,b));
//    console.log(mul(a,b));
// }
// // printfun(4,8);

// // ARRAYS
// // const groceries = ['apple', 'mango', 'banana', 'pear', 'grape'];
// // console.log(groceries); 
// // groceries.push('cherry');
// // console.log(groceries); 
// // console.log(groceries.indexOf('banana'));
// // console.log(groceries.length);

// // OBJECT : REPRESENTED BY {} and key value pair jaati hai isme.
// //  const person = {
// //    name : 'tony',
// //    job : 'super hero',
// //    tier : '1st level'
// //  }
// //  console.log(person.name);
// //  console.log(person.job);        // accessing the properties.
// //  console.log(person['tier']);    // bracket notation

// //  person.phone = 1234566;
// //  person['city'] = 'New york';
// //  console.log(person.phone);
// //  console.log(person['city']);
// //  console.log(person);


// // FUNCTION FOR OBJECTS
// // Es6 arrow function.
// const client = (name, age) => {
//    const person = {
//       name : name,
//       age : age,
//       bank_balance : 100000,
//       liabilites : 20000,
//       // this is the method.
//       net_worth : function() {
//          return this.bank_balance - this.liabilites;
//       }
//    }
//    const intro = `hello, my name is ${person.name} and i am ${person.age} old. My networth is ${person.net_worth()}.`
//   // `${....}` => IS A TEMPLATE LITERAL.
//    return intro;     // function will return something.
// }
// console.log(client('amit', 20));

// // An object have property and some functionality.
// // like a car has a property that it is white in color.
// // and hava some of functionality like it can accelerate, start, stop etc.

// LOOPS :
// const skills = ['c', 'c++', 'python', 'java', 'dbms', 'maths', 'mysql'];
// for(const skill of skills) {
//    console.log(skill);
// }
// for(var i = 0; i<skills.length; i++) {
//    console.log(`${i+1}) ${skills[i]}`);
// }

// const nums = [1,2,3,4,5,6,7,8,9,10];
// for(const num of nums) {
//    console.log(num); // this will print the nums array
// }
// let result = [];
// for(var i = 0; i<nums.length; i++) {
//    result[i] = nums[i]*2;  // this will update the result array
// }
// for(const i of result) {
//    console.log(i);      // this will print the result array.
// }
// console.log(result);    // this will print the result array;

const double = (nums) => {    // using method.
   let result = [];
   for(const i of nums) {  // ye wala for loop humesha 1 se initialise hoga.
      result.push(i**2);
      // result[i-1] = nums[i-1]*2; 
   }
return result
}
// console.log(double([1,2,3,4,5,6,7,8,9,10]))

// counting letters in a sentence.
// we can also use .length function to get the length of any string.
const counting = () => {
let result = 0;
// letter in sentence will give the indices.
// letter of sentence will give the values at that indices.
   for(const letter in sentence ){
      console.log(Number(letter)+1);
      result = Number(letter)+1;
   }
   return {result};
}
const sentence = "I think I like her.";
// console.log(counting(sentence));

// making a program to sum the integer value.
const sum = (num) => {
   var result = 0;
   // for(var i = 0; i<num.length; i++) {
   //    result = result + num[i];
   // }
   // ANOTHER METHOD
   for(i of num) {
      console.log(i);
      result = result + i;
   }
   return {result};
}
// console.log(sum([1,2,3,4,5]))

// FINDING OUT THE MAXIMUM NO. FROM AN ARRAY.
const max = (number) => {
   let maxNo = number[0];
      for(j of number) {
         if(maxNo < j) {
            maxNo = j;
         }  
      }
   return {maxNo};
}
number = [11,8,6,3,7,10]; 
// console.log(max(number));

// CALCULATION OF FREQUENCY 

const freq = (str) => {
   let frequency = {}   // key value pair store karne ke liye.
   for(const i of str) {
      // check if key exist in str.
      if(i in frequency) {
         frequency[i] = frequency[i] + 1;
      } else {
         frequency[i] = 1;
      }
   }
   return frequency;
}
// let s = 'the quick brown fox jumps above a lazy dog';

// console.log(freq(s));

// WORDS FREQUENCY :
const wordfreq = (str) => {
   let frequency = {};
   words = str.split(' ');
   for(const word of words) {
      // console.log(word);
      if(word in frequency) {
         frequency[word] += 1;
      } else {
         frequency[word] = 1;
      }
   }
   
   return frequency;
}
let s = " hey buddy lol yuhu lol"
// console.log(wordfreq(s));

// CONVERT HOUR INTO MINUTE
const convert = (hour) => {
   let minute = hour * 60 * 60;
   console.log(`${hour} hour contain ${minute} seconds.`)
   return {minute};
}
// console.log(convert(3));


// HIGH ORDER FUNCTIONS : something like LAMBDA function.
// MAP : loop and returns an array.
// FILTER : loop and returns an array with matching conditions.
// REDUCE

// let z = [2,3,4,5,6].map(number => number * 2);
// console.log(z)

// double your number.
const doubleNo = (numbers) => {
   return numbers.map(number => number * 2)
}
// console.log(doubleNo(z))

//FILTER : array_name.filter(function)
// this is a manuall way of filtering the array.
const filter = (numbers, greaterThan) => {
   let filtered = []
   for(number of numbers) {
      if(number > greaterThan) {
         filtered.push(number);
      }
   }
   return filtered
}
let z = [1,2,3,4,5]
// console.log(filter(z, 2))

// console.log(z.filter(num => num > 2))

// ARRAYS OF OBJECT
const actors = [
   {name : 'Robert', netWorth : 200000},
   {name : 'Captain', netWorth : 100000},
   {name : 'Steve', netWorth : 20},
]
const aa = actors.filter(actor => actor.netWorth > 20)
// console.log(aa);

// ****************************************
// playGround.innerHTML = `<h1> ${name}</h1>` .....this will display the names in the web page.
// ****************************************

// Reduce : takes in a function as an argument.
// name.reduce((function) => function, variable)
// Reduce generally takes 2 parameters ie. one is function and another is vairable and default value of variable starts with 0.
const nums = [1,2,3,4,5]
const result = nums.reduce((prev, curr) => prev + curr)     // this is es6 notation.
const fact = nums.reduce((a,b) => a*b)
const addNetWorth = actors.reduce((a,b) => a + b.netWorth, 0)
// const result = nums.reduce(function(prev, curr) {
//    return prev + curr
// } )
// console.log(result)
// console.log(fact)
// console.log(addNetWorth)


// DOM manipulation : In the main HTML file (inside script tag)
// let title = document.getElementById('title')
// console.log(title.innerText)
// document.getElementById('container')
// container.style.color = "red"


// RANDOM FUNCTION :
const randomName = () => {
   const randomNumber = Math.floor(Math.random() * names.length)
   return names[randomNumber];
}

let names = ['depp', 'johny', 'iron_man', 'Captain_america', 'Tom_holland', 'Spider_man']
// console.log(randomName())

const weatherScore = (weather) => {
   let score = Math.floor(Math.random() * weather.length)
   if(score == 0) {
      console.log('1')
   } else if(score == 1) {
      console.log('-1')
   } else if(score == 2) {
      console.log('0')
   }
}
let weather = ['rainy', 'sunny', 'overcase']
weatherScore(weather);
