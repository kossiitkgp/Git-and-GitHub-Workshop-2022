#include <stdio.h>

int add_two_numbers(a,b) {
    int sum;
    sum = a + b;                      // correction  done  [sign - to + done]
    printf("%d", sum);
}


int main() {
    add_two_numbers(5,2); // expected result 7
}
//just a comment added 
