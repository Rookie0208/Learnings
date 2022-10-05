
//  How to target DOM object :
//  1. id : document.getElementById(id_name)
//  2. class name : document.getElementsByClassName(name)
//  3. Tag name : document.getElementsByTagName(name)

// there are two more DOM Targetting Methods :
//  1. querySelector : sab mai se first wale ko target karga.
//  2. QuerySelectorAll : sabhi selectors ko target karta hai. similar to getElementByClassNames().


// DOM get methods :
// 1. innerText : sirf data dikhata hai. (without tags)
// 2. innerHTML : data ke saath tags bhi show hote hai.
// 3. getAttribute : attribute ki value deta hai.
// 4. getAttributeNode : attribute ki value ke saath uss element ko bhi return karega.
// 5. Attributes : saare attributes return kar deta hai.

// To set the DOM methods :
// 1. innerText
// 2. innerHTML
// 3. setAttribute
// 4. Attributes : index ki value se bhi change kar skte hai attribute ki value.
// 5. removeAttribute : to delete the attribute

// STYLING WITH JS  :
// style : koi sa bhi style de skte hai like, color, backgroundColors etc.
// classname : class ka name return karega as a string.
// classlist : class ke name ka array return karega, with indecies. isse bhi multiple classes ko add kar skte hai. [.classlist.add("name","name2")ew]

// Event Attributes :
// we can use event attributes by two methods : inline javascript and in JS file.
// document.getElementById(name).onClick = function name;
// .addEventListener("click", functionName, useCapture); OR
// .removeEventListener("onclick", function_name);  remove kar dega selected event ko.
// .addEventListener("click", function(){
    // statement
// })
// useCapture zyada use mai aata nhi, bas kon sa function pehle chalega wo batayega. jese ki ek box ke andara dusra box hai or agar useCapture ki value 'false' hui toh
// pehle andar wala box chalega fir bahar wala or agar uski value 'true' hui toh reverse ho jayega.



// let test = document.getElementById("content").innerText // content id ko uthayega or uski inner text show karega.
// let test = document.getElementById("header").getAttribute("style")  // yaani header ke andar koi attribute hai toh usse return karo, or yaha pe humne style attribute ka data manga hai, ex: class hai ya id ya style ya value ya asie he kuch or.
// let test = document.getElementById("header").attributes
// let test = document.getElementById("header").innerText = "new Text";     // this will only change the heading(DoM ..) to the defined text but will not show it inside <h1> tag
let test = document.getElementById("header").innerHTML = "<h1>click me</h1>"; // ab ye heading mai (new text ) likha.
// console.log(test);

// to change the attribute value.
test = document.getElementById("header").setAttribute("style", "border: 2px dotted black");     // means style attribute ki value ko set kardo, given value ke according.
test = document.getElementById("header").removeAttribute("style");  // style attribute ko he remove kar diya.

// query selector
document.getElementById("header").addEventListener("click", function() {
    document.querySelector("#header").innerHTML = "<h1> Query Selector </h1>"
})
test = document.querySelectorAll("#header h1")  // advance selector.
// document.getElementById("header").style.color = "red"    // this is how we can style the HTML with JS.
// console.log(test)

// DOM event listener :
function changeColor() {
    document.getElementById("footer").style.color = "blue";
    // function to change the color of email in last line.
}
document.getElementById("header").addEventListener("click", changeColor);   // click me(header) par click karne se link blue hogi.

document.getElementById("header").addEventListener("mouseleave",function(){
    document.getElementById("footer").style.color = "red";
    // header par hover karne se footer ka color red ho jayega.
});
document.getElementById("footer").addEventListener("click", function(){
    document.getElementById("header").removeEventListener("mouseleave",changeColor);
})