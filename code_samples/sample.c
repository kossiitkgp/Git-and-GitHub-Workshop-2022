#include <stdio.h>
#include <math.h>

int subtract_two_numbers(int a,int b) {
    int diff;
    diff = (int)fabs((double)(a - b));
    return diff;
}

int add_two_numbers(int a,int b) {
    int sum;
    sum = a + b;
    return sum;
}


int main() {
    printf("The sum of 2 and 5 is: %d\n", add_two_numbers(2,5)); // expected result 7
    printf("The difference of 2 and 5 is: %d", subtract_two_numbers(2,5)); // expected result 3
}
//just a comment added 