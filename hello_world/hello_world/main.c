//
//  main.c
//  hello_world
//
//  Created by shin seunghyun on 03/05/2019.
//  Copyright © 2019 shin seunghyun. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char *argv[])
{
    // insert code here...

    //%d - integer
    //%s - character
    //%f - float
    int a, b, c;
    printf("Enter the no.s\n");
    scanf("%d%d", &a, &b);
    c = a + b;
    printf("The Answer is = %d\n", c);

    float x, y, z;
    printf("Enter the no.s\n");
    scanf("%f%f", &x, &y);
    z = x + y;
    printf("The Answer is = %f\n", z);
    return 0;
}
