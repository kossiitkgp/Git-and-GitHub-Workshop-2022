#include <stdio.h>

int add_two_numbers(int a,int b) {
    int sum;
    sum = a + b;
    return sum;
}


int main() {
    printf("%d", add_two_numbers(5,2)); // expected result 7
}
//just a comment added 