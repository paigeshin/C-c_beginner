//
//  main.c
//  learning_c
//
//  Created by shin seunghyun on 05/05/2019.
//  Copyright © 2019 shin seunghyun. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    char str[100];
    int i;
    
    printf("Enter a value : ");
    scanf("%s %d", str, &i);
    
    printf("\nYou entered: %s %d ", str, i);
    
    return 0;
}
