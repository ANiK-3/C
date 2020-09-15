#include <stdio.h>

int main()

{
    int n, v, convert;
    char c;
    printf("1.ASCII Character to ASCII Value\n2.ASCII Value to ASCII Character\n\n");
    printf("Enter an integer : ");
    scanf("%d", &convert);
    switch (convert)
    {
    case 1:
        printf("Enter ASCII Character : ");
        scanf(" %c", &c);
        printf("ASCII Value is : %d\n", c);
        break;

    case 2:
        printf("Enter ASCII Value : ");
        scanf("%d", &v);
        printf("ASCII Character is : %c\n", v);
        break;

    default:
        printf("Invalid");
        break;
    }

    return 0;
}
