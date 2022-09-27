/*
Js ke andar 3 tarike se variable define kar skte hai :
Var = variable jisko multiple time declare and initiate kar skte hai.
Let  = value can be over written but cannot declare the same let variable twice.
Const = constant value. cannot over write it.

kisi bhi variable ki value ko overwrite kar skte hai asaani se.
var ko multiple times declare kar skte hai. 
like : var a = 12 and var a = 14
but let ko multiple times declare nhi kar skte.
like : let a = 17 and let a = 13 [it will throw an error]
lekin VAR and LET ki value ko dono ko over write kar skte hai.
*/




document.write("<h1>This code is inside the java script file.<br></h1>");
document.write("<h2> Here we used external js file </h2>");
var a = "VAR";  // over write and declare dono kar skte hai.
document.write("This is ", a + " variable<br>");
var first_name = "Amit";
var second_name = "Rawat";
document.write("hello, I am ", first_name + " " + second_name + " <br>")

let b = "LET";  // declare nhi kar skte dobara but value over write kar skte hai.
document.write("This is ", b + " variable<br>");

const c = "constant";
// c = 15   cannot assign its value again.
document.write("This is ", c + " variable<br>")


/*
DIFFERENT TYPES OF DATA TYPES :
var x = "heyy !! " ---> String
var x = 25 ---> Number
var x = true ---> Boolean
var x = ["html", "css", "js"] ---> Array (array and object dono he object show hote hai..)
var x = {first:"Thor",last:"Odinson"} ---> Object
var x = null ---> Null
var x; ---> Undefined
*/

/*
document.write("<h1> Types of variables :<br></h1>");
var y, z, m, i, t;
var x = 'kk';
document.write(x);
document.write("  ---> "+ typeof x + "<br>");

y = 12;
document.write(y);
document.write("  ---> "+ typeof y + "<br>");

z = true;
document.write(z);
document.write("  ---> "+ typeof z + "<br>");

m = null
document.write(m);
document.write("  ---> "+ typeof m + "<br>");

i = ["thor", "love", "and", "thunder"];
document.write(i);
document.write("  ---> "+ typeof i + "<br>");

t = { first: "Thor", last: "Odinson" }
document.write(t);
document.write("  ---> "+ typeof t + "<br>");
*/

// functions
// function greet() {
//     // var name = prompt("what is your name??");
//     var result = "Hello " + name;
//     console.log(result);
// }
// function add(num1, num2) {
//     var result = num1 + num2;   // this will concatenate the two given numbers.
//     console.log(result);
//     console.log(typeof result); // String....
// }

// console.time("test");       // start counting time.
// console.warn("this is a warning box in console");
// console.error("This is an error box in console");
// console.timeEnd("test");    // time se leke time end ke beech mai jo code hai, uska execution time.
// console.clear();    // to clears all the console.


// IF CONDITION :
// var x = 10;
// if(x < 20) {
//     console.log("x is less than 20");
// } else {
//     console.log("x is greater than 20");
// }

// LOGICAL OPERATOR : && and ||
// var age = 25;
// if(age >= 18 && age <= 21) {
//     console.log("you can play games.");
// } else {
//     console.log("You are a kid.");
// }
// if(age <= 21 || age >= 18) {
//     console.log("You can vote.");
// }

// NESTED IF-ELSE :
// var percentage = 32;
// if(percentage <= 100 && percentage >= 80) console.log("Merit");
// else if(percentage < 80 && percentage >= 60) console.log("1st division");
// else if(percentage < 60 && percentage >= 45) console.log("2nd division");
// else if(percentage < 45 && percentage >= 33) console.log("3rd division");
// else console.log("fail");

// TERNARY OPERATOR
// (percentage >= 33 ) ? console.log("you are pass")  :  console.log("you are fail");
//  CONDITION      THEN          TRUE CONDITION   ELSE         FALSE CONDITION
// var a = 10;
// var r = 20;
// r = "value of r is : " +(a == 10 ? r : a);
// console.log(r);

// SWITCH CASE :
/*
var day = prompt("Enter the day from 1 to 7");
switch (day) {
    case 1: console.log("Today is Monday.");
    break;
    case 2: console.log("Today is Tuesday.");
    break;
    case 3: console.log("Today is Wednesday.");
    break;
    case 4: console.log("Today is Thursday.");
    break;
    case 5: console.log("Today is Friday.");
    break;
    case 6: console.log("Today is Saturday.");
    break;
    case 7: console.log("Today is Sunday.");
    break;
    case 8: case 9: case 0: console.log("You pressed wrong key.");
    default : console.log("Please press another key.");
}
*/

//  CONFIRM : to confirm something from the user (diagloug box)
/*
var a = confirm("Are you happy!! ");
if(a) alert("You are doing well bro!!")
else alert("It's okay buddy, have a nice day "); 
*/

// PROMPT : to take input from user
/*
var a = prompt("what is you name buddy?? ");
alert("heyy "+a+" good to see you !!");
*/

// FUNCTIONS
// function greet() {
//     // var name = prompt("what is your name??");
//     var result = "Hello " + name;
//     console.log(result);
// }
// function add(num1, num2) {
//     var result = num1 + num2;   // this will concatenate the two given numbers.
//     console.log(result);
//     console.log(typeof result); // String....
// }
/*
function abcd(fname="first_name", lname="last_name") {
    console.log("hii " +fname+" "+lname);
}
*/
/*
function avg(a=0,b=0,c=0,d=0,e=0) {
    var ans = ((a + b + c + d + e)/500)*100;
    return ans;
}
*/

//function call
// greet();
// abcd();         // default parameter ke saath run karega.
// abcd("Tony","Start");
// var ans = avg(95,95,90,91,88);
// console.log(ans);

// var num1 = prompt("enter the first number.");    // input as a sting
// var num2 = prompt("enter the second number.");
// var num1 = parseInt(prompt("enter the first number."));  // type casted into the integer.
// var num2 = parseInt(prompt("enter the second number."));
// add(num1, num2);

/*
JAVASCRIPT BASIC EVENTS :
click : onclick (similar to click down)
double click : ondblclick
right click : oncontextmenu
mouse hover, out, down, up : onmouseenter, out, down, up
key press : onkeypress
key up : onkeyup ( key press karke release karne par )
load : onload
unload : onunload
resize : onresize
scroll : onscroll
*/
/*
function hello() {
    alert("This is called by the function with event.");
}
*/

// LOOPS
/*
var a = 1;
while(a <= 10) {
console.log(a);
a++
}
*/

function loop() {
    var a = 1;
    while(a <= 10) {
        document.write(a+". This is using while loop<br>");
        a++;
    }
}

// var a = 1;
// do {
//     console.log(a+" time.");
//         a++;
// } while (a <= 10);

function loop2() {
    for(var i = 1; i <= 10; i++) {
        document.write(i+". This is using for loop.<br>");
    }
}

// TABLE FROM 2 TO 10:
function num() {
for(var i = 1; i<=100; i+=10) {
    for(var j = i; j<i+10; j++) {   // i se i+10 tak chalega mtlb 1 se 10 tak fir 11 se 20 tak
        document.write(j+" ");
    }
    document.write("<br>");
}
}

// PATTERNS :
function pattern() {
    for(var i = 1; i <= 5; i++) {
        for(var j = 1; j <= i; j++) {
            document.write(j+" ");
        }
        document.write("<br>");
    }
}

function pattern2() {
    for(var i = 1; i <= 5; i++) {
        for(var j = 1; j <= i; j++) {
            document.write(i+" ");
        }
        document.write("<br>");
    }
}

function pattern3() {
    for(var i = 5; i >= 1; i--) {
        for(var j = 1; j <= i; j++) {
            document.write(i+" ");
        }
        document.write("<br>");
    }
}

function pattern4() {
    for(var i = 5; i >= 1; i--) {
        for(var j = i; j >= 1; j--) {
            document.write(j+" ");
        }
        document.write("<br>");
    }
}

//  ARRAYS
// document.write("These are arrays : <br>");
var arr = [10,20,30];
console.log(arr);
// document.write("<br>");
var sum = 0;
for (var i = 0; i< arr.length; i++) {
    console.log(arr[i]);
// document.write("<br>");
    sum = sum + arr[i];
}
console.log("Total sum is : "+sum);

// constructor method to construct array
// var ary = new Array(1,2,'a','b',"amit","rawat");
// var ary = new Array();
// // getting values from the users
// for(var g = 0; g<3; g++) {
//     ary[g] = prompt("Enter the value : ");
// }
// console.log(ary);

//  MULTIDIMENSIONAL ARRAY
/*
 var a = [
    ["Rone", 18, "Male", "btech"],
    ["Rahya", 19, "Female", "btech"],
    ["David", 19, "Male", "btech"]
 ];
 console.log(a.length);
 document.write("<br>");
 document.write("This is a multidimensional array : <br>");
document.write("<table border='2px' cellspacing='0'>");
for(var row = 0; row < a.length; row++) {
     document.write("<tr>");
    for(var col = 0; col < a[row].length; col++) {
    document.write("<td> "+a[row][col]+ " </td> ");
 }
 document.write("<br>");
}
document.write("</tr>");
document.write("</table>");
*/

document.write("<br>");
var a = ["jake", "amber", "jack", "simpson", "dude"];
var a2 = [3,45,23,1,46,76,54,2];
document.write(a+"<br>");
document.write(a2+"<br>");
document.write("After sorting :<br>");
document.write(a.sort()+"<br>");
document.write(a.reverse()+"<br>");
document.write(a2.sort());

// push() bhi last se karega and pop() bhi last se he karega.
// shift() use karenge toh pop kardega 1st value ko.
// unshift() use karenge toh 1st value pe add hoga.
// concat() use karenge toh 2 strings ya arrays ko jodega.
// join() join karega puri array ko ek string mai.
// slice(start,end) slice karega array ko start and end ke according.
// splice(index,howmany delete, "new value") kisi bhi value ko beech mai daal skta hai.
// isArray() is used to check wheather the given data is array or not.
// indexOf("search item", start), batayega koi value exist karti hai ki nhi.
// lastIndexOf("search item", start), last se batayega.
// includes() search karega kisi data ko array mai. sirf true or false batayega.
// some() similar to for loop. kisi bhi ek value ko check karega pure array mai ki wo usse badi hai ya choti. for loop + if condition
// every() similar to some() lekin some() ek value ke liye bhi true hoga toh true return karega lekin
// every mai harr ek value ko true hona padega. Or ye dono function he kisi or function ke saath kaam karte hai.
// some() and every() jesa he find() function bhi hai, bas find() value return karta hai jo value pass ho jati hai.
// findIndex() index value return karega.

document.write("<br>");
a.pop();
document.write("<br>");
document.write(a+"<br>");
a.push("pushpa");
document.write("<br>");
document.write(a+"<br>");

var a3 = a.concat(a2);
document.write(a3+"<br>");

var a4 = a.join(" ");
document.write(a4+"<br>");

a4.toString();
document.write(a4);

/*
var ages = [12, 34, 53, 13, 21, 14];
console.log(ages);

function checkAdult(age) {
    return age >= 18;
}

var age1 = ages.some(checkAdult);
console.log(age1);

// ek value bhi galat hui toh puri condition galat ho jayegi.
var age2 = ages.every(checkAdult);
console.log(age2);

var age3 = ages.find(checkAdult);
console.log(age3);

var age4 = ages.findIndex(checkAdult);
console.log(age4);

// filter() ek new array banayega unka jo condition ko pass kar rhe hai.
var age5 = ages.filter(checkAdult);
console.log(age5)

// for each loop similar to for loop
ages.forEach(function(value, index){
    console.log(index +") " +value);
})
*/

// OBJECTS ******************************************
/*
var obj = {
    fname : 'sam',
    lname : 'wilson',
    age : 20,
    email : 'samwil@gmail.com',
    favRapper : ['eminem', 'jcole', 'raftaar'],
    salary : function(){
        return 100000;
    },
    fullName : function(){
        return this.fname+" " +this.lname;
    },
    address : {
        city : 'New Delhi',
        country : 'India'
    }
}
console.log(obj);
console.log(obj.fname)
console.log(obj.fullName());
console.log(obj.salary());
console.log(obj.address.city);
*/

// ARRAY OF Object

// var arrObj = [
//     {name : 'shawn', age : 20},
//     {name : 'mark', age : 22},
//     {name : 'hulk', age : 24},
// ];
// console.log(arrObj);
// console.table(arrObj);

/*
var obj = {
    fname : 'sam',
    lname : 'wilson',
    age : 20,
    email : 'samwil@gmail.com',
    favRapper : ['eminem', 'jcole', 'raftaar'],
    salary : function(){
        return 100000;
    },
    fullName : function(){
        return this.fname+" " +this.lname;
    },
    address : {
        city : 'New Delhi',
        country : 'India'
    }
}
for (var i in obj) {
    document.write(i + " : " +obj[i]+"<br>");
}
*/
// for (var i in obj) {
//     console.log(obj[i]);
// }

// creating the object
/*
var car = new Object();
car.fname = 'rolls';
car.lname = 'royce';
car.model = 'phantom';
*/

// document.write(car.model);
// constant object ki value bhi change nhi hogi, aise he constant array ki value bhi change nhi hogi.


// map()
var arry = [1,2,3,4,5];
// var arry1 = arry.map(mul);
var arry1 = arry.map(function(x){
    return x*10;
})
// OR WE CAN MAKE ANOTHER FUNCTION LIKE THIS.
// function mul(x) {
//     return x * 10;
// }
console.log(arry1);


// EXTRA CODE
// var num = prompt("just write a number");
// document.getElementById('game').innerHTML = num;    // not working properly.
// alert("Your computer is just hit by the virus.")


// STRINGS AND STRING MANIPULATION
// let book = "Encyclopedia";
// console.log(book);
// console.log(book.length)        // 12
// console.log(book.indexOf('y'))  // 3
// console.log(book.slice(3, 6))   // ycl last wala number print nhi hota, same as python.
// console.log(book.replace("Encyclo", "Wiki"))  // Wikipedia, case sensitive hai isliye harr ek letter ka dhyaan rakhna hai.
// console.log(book.toUpperCase(book));
// console.log(book.toLowerCase(book));
// console.log(book.split(''));    // split everything with comma.



