def add_two_numbers(a,b):
    '''
    The function takes in 2 numbers and prints their sum
    
    Args:
        a,b : two real numbers
    '''
    sum = a + b
    return sum

def subtract_two_numbers(a,b):
    '''
    The function takes in 2 numbers and prints their difference
    
    Args:
        a,b : two real numbers
    '''
    diff = 0
    if(a>b):
        diff = a - b
    else:
        diff = b - a
    return diff

ans_sum = add_two_numbers(5,2) # expected result 7
ans_diff = subtract_two_numbers(2,5) # expected result 3
print("The sum of the two numbers is ", ans_sum)
print("The difference of the two numbers is ", ans_diff)