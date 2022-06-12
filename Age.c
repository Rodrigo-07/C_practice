// #include <cs50.h> //
#include <stdio.h>

int main(void)
{
    printf("What's your age?\n");
    int myage = 16;
    int age = scanf("What's your age\n");  // get_int //
    if (age > myage)
    {
        printf("You are %i years older than me.\n", age-myage);
    }
    if (age < myage)
    {
        printf("You are %i years younger than me.\n", myage-age);
    }
    if (age == myage)
    {
        printf("We are the same age.\n");
    }
}
