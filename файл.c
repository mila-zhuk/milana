#include <stdio.h>
#include <string.h>

int main(int argc, char **argv)
{
    char first[255], last[255];


    printf("Enter your name: ");
    fgets(name, 255, stdin);
    printf("length = %d\n", strlen(name)); /* debug line */
    name[strlen(name)-1] = '\0'; /* remove the newline at the end */

    printf("Hello, %s!\n", name);

    printf("Enter your first name: ");
    
    

    printf("Now enter your last name: ");
    gets(last); /* buffer overflow? what's that? */

    printf("Hello %s %s!\n", first, last);

    return 0;
}

