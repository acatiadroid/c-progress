#include <stdio.h>
#include <stdlib.h>

struct person {
    char name[50];
    int age;
    int height_in_inches;
};
int main()
{
    struct person me;
    struct person you;
    me.age = 39;
    you.height_in_inches = 4;
    printf("%i %i", me.age, you.height_in_inches);
}
