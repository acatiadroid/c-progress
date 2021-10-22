#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1;
    int num2;
    printf("Enter 2 numbers");
    scanf("%d%d", &num1, &num2);

    if(num1 == num2) {
        printf("they are equal");
    }
    else if(num1 > num2) {
        printf("num1 is bigger than num2");
    }
    else {
        printf("num2 is bigger than num1");
    }

    return 0;
}
