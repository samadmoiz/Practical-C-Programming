#include <string.h>
#include <stdio.h>

char name[30];  /* First name of someone */

/**
 *
 * Functions:
 * strcpy(string1, string2) : Copy string2 into string1
 * strcat(string1, string2) : Concatenate string2 onto end of string1
 * length = strlen(string)  : Get the length of string
 * strcmp(string1, string2) : Oif string1 equals string2
 *                            otherwise nonzero
 */

int main()
{
    strcpy(name, "Sam"); /* Initialize the name */
    printf("The name is %s\n", name);
    return 0;
}
