#include <stdio.h>
int main()
{ double number;
 printf("Enter ");
    scanf("%lf", &number);

    if (number <= 0.0)
    {
        if (number == 0.0)
            printf("Yoentered 0.");
        else
            printf("You etered a negative number.");
    }
    else
        printf("You entered a positive number.");
    return 0;}
