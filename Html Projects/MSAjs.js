
    // get global access to all inputs / divs here.
    // bill input,tip input, number of people div, and per person total div.

    const bill = document.getElementById('firstBox')
    const tip = document.getElementById('secondBox')
    const noOFpeople = document.getElementById('people')
    const value = document.getElementById('result')

    // get no. of people (it will change acc. to user's input)
    let totalPerson = Number(noOFpeople.innerText)

const calculateBill = () => {
    
    // get bill from user input and convert it into a number.
    const billValue = Number(bill.value)
    
    // get the tip from user and convert it into a percentage
    const tipPercent = Number(tip.value)/100

    // get the total tip amount
    const tipTotal = billValue * tipPercent
    console.log({tipTotal})

    // calculate the total (tip amount + bill)
    const totalAmount = tipTotal + billValue
    console.log({totalAmount})

    // calculate the per person total (total divided by no. of persons)
    let totalValue = totalAmount/totalPerson

    // updating the DOM.
    result.innerText = totalValue
    console.log({totalValue})
}
 
const increasePeople = () => {

    // increment the amount of people
    totalPerson += 1;

    // Update the DOM with the new number of people
    noOFpeople.innerText = totalPerson

    // Calculate the bill based on new number of people.
    calculateBill()
}

 const decreasePeople = () => {
    if(totalPerson <= 1) {
        throw 'You cannot go less than 1 person.'
        // alert("you can not go beyond 1.")
    }

    // decrement the amount of people
    totalPerson -= 1;

    // update the DOM with the new number of people
    noOFpeople.innerText = totalPerson

    // Calculate the Bill based on the new number of people
    calculateBill()
 }