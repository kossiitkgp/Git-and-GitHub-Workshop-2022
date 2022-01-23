#include <stdio.h>

int add_two_numbers(int a,int b) {
    int sum;
    sum = a + b;
    return sum;
}


int main() {
    int x;
    x = add_two_numbers(5,2); // expected result 7
    printf("The sum of 5 and 7 is: %d",x);
    return 0;
}