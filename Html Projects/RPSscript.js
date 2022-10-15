/*

concept covered :
1. for loops
2. DOM Manipulation
3. Variables 
4. Conditionals (if else if)
5. Event_listeners
6. Higher Order Function (Math.random())

*/


// taking every id separately
let point = document.getElementById('result')
let rst = document.getElementById('reset');
let ans = 0;

// computer generates the random no. and convert it into string.
const num = ['Rock', 'Paper', 'Scissor']
const randomNum = () => {
num = Math.floor(Math.random() * 3)
if(num == 0) {
    num = 'ROCK'
}
if(num == 1) {
    num = 'PAPER'
}
if(num == 2) {
    num = 'SCISSOR'
}
console.log("computer chooses : ", num)
return num;
}

// USER CHOICE :
function getResult(num, userChoice) {

// RESULT IN WHICH WE KNOW WHO WINS.
let score;
if(num == userChoice) {
    score = 0;
} else if(num == 'Rock' && userChoice == 'Scissor' ) {
    score = 1;
} else if(num == 'Scissor' && userChoice == 'Paper') {
    score = 1;
} else if(num == 'Paper' && userChoice == 'Rock') {
    score = 1;
}  
 else if(num == 'Rock' && userChoice == 'Paper') {
    score = 1;
} else if(num == 'Scissor' && userChoice == 'Rock') {
    score = 1;
}
else if(num == 'Paper' && userChoice == 'Rock') {
    score = 1;
} else if(num == 'Paper' && userChoice == 'Scissor') {
    score = 1;
}
return score;
}

function showResult(score, userChoice, computerChoice) {
    let point = document.getElementById('resutl')
    switch (point) {
        case -1:
            point.innerText = `You Lose!`
            break;
        case 0:
            point.innerText = `It's a Draw!`
            break;
        case 1:
            point.innerText = `You Win!`
            break;
    }
}

function onClickBtn(userChoice){
    console.log({userChoice})
    const computerChoice = randomNum();
    console.log({computerChoice})
    const score = getResult(computerChoice, userChoice.value)
    showResult(score, userChoice.value, computerChoice)
}

function game() {
    const playButton = document.querySelectorAll('.btn')
    playButton[0].onclick = () => console.log(playButton[0].value)

    playButton.forEach(buttons => {
        buttons.onclick = () => onClickBtn(buttons.value)
    });
}

let reset = () => {
console.log("reset points.")
ans = 0;
point.innerText = ans;
}

game() 