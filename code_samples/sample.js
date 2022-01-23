function add_two_numbers(a,b) {
    const sum = a + b
    console.log("The sum of the two numbers is",sum)
}

function subtract_two_numbers(a,b) {
    var diff = 0
    if(a>b){
        diff=a-b
    }else{
        diff=b-a
    }
    console.log("The difference of the two numbers is",diff)
}

add_two_numbers(5,2) // expected result 7
subtract_two_numbers(2,5) // expected result 3