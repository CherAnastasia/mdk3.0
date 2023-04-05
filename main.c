#include <stdio.h>

#include "askname.h"

int main(int argc, char **argv)
{
    char first[255], last[255];

    askname(first, last);


    printf("Hello, %s %s!\n", first, last);

    printf("Now enter your last name: ");
    gets(last); /* buffer overflow? what's that? */

    printf("Hello hahahaha", first, last);

    return 0;
}
