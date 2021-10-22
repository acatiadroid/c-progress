#include <stdio.h>
#include <stdlib.h>

int main()
{
    int fizzbuzz = 15;
    int fizz = 3;
    int buzz = 5;
    for (int i = 1; i <= 100; ++i) {
        if (i % fizzbuzz == 0) {
            printf("FizzBuzz\n");
        } else if (i % fizz == 0) {
            printf("Fizz\n");
        } else if (i % buzz == 0) {
            printf("Buzz\n");
        } else {
            printf("%d\n", i);
        }
    }
}
