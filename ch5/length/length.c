#include <stdio.h>
#include <string.h>

char first[100]; /* First name of person we are working with */
char last[100]; /* His last name */

/* First and last name of the person (computed) */
char full[200];

int main() 
{
    printf("Enter first name: ");
    fgets(first, sizeof(first), stdin);
    
    first[strlen(first)-1] = '\0';
    
    printf("Enter last name: ");
    fgets(last, sizeof(last), stdin);
    
    last[strlen(last)-1] = '\0';
    
    strcpy(full, first);
    strcat(full, " ");
    strcat(full, last);
    
    printf("The name is %s\n", full);
    return 0;
}