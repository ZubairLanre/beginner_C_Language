/* This program asks a user for their hometown and the two-letter
abbreviation of their home state. It then uses string concatenation
to build a new string with both town and state and prints it using
puts. */
// stdio.h is needed for puts() and gets()
// string.h is needed for strcat()
#include <stdio.h>
#include <string.h>
int main(void)
{
    char city[15];
    // 2 chars for the state abbrev. and one for the null zero
    char st[3];
    char fullLocation[18] = "";
    puts("What town do you live in? ");
    gets(city);
    puts("What state do you live in? (2-letter abbreviation)");
    gets(st);
    /* Concatenates the strings */
    strcat(fullLocation, city);
    strcat(fullLocation, ", "); //Adds a comma and space between
    // the city
    strcat(fullLocation, st); //and the state abbreviation
    puts("\nYou live in ");
    puts(fullLocation);
    return(0);
}

// puts() automatically puts a newline at the end of every string it prints. 
// You don’t have to add a \n at
// the end of an output string unless you want an extra blank line printed