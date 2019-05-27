#include <stdio.h>
#include <stdlib.h>

int main()
{

    char str[100];
    int i;

    printf("Enter a value :");

    //%d : int

    scanf("%d %s", &i, str);
    //This is how the program store user input. %d means the user input should be 'integer' data type

    printf("\nYou entered: %d::::::%s\n", i, str);

    return 0;

}
