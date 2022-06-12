#include <stdio.h>

int main()
{
    int number;
    int check = 0;
    printf("Put a number: ");
    scanf("%d", &number);

   int i;
   
   for(i = 2; i <= number/2; i++)
   {
        if (number % i == 0)
        {
         check = 1;
         break;
        }
    }

    if (number == 1)
    {
        printf("1 is not a prime number.");
    }
    else
        if (check == 0)
        {
            printf(" %d is a prime number\n", number);
        }
        else
        {
            printf(" %d is not a prime number\n", number);
        }
    return 0;
}
