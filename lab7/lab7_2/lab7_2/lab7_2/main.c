//
//  main.c
//  lab7_2
//
//  Created by Александр on 28.11.2018.
//  Copyright © 2018 Александр. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#define sz 8

int search_sym(char *str, char sym)
{
    int i = 0, counter = 0;
    for(i = 0; i < sz; ++i)
        if(str[i] == sym)
            ++counter;
    return counter;
}

int main()
{
    char *str = "Hello!!!";
    char sym;
    printf("\nEnter the symbol where u search: ");
    scanf("%c", &sym);
    printf("Number of symbols in string: %d\n", search_sym(str, sym));
    return 0;
}
