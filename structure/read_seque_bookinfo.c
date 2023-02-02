/* The program takes the book info file from the first example of
chapter 28; also reads each line from the file and outputs it to the
screen. */
#include <stdio.h>
#include <stdlib.h>
FILE * fptr;
int main(void)
{
    char fileLine[100]; // Will hold each line of input
    fptr = fopen("C:\\Users\\HP\\projects\\beginner\\structure\\bookinfo.txt","r");
    if (fptr != 0)
    {
        while (!feof(fptr))
        {
            fgets(fileLine, 100, fptr);
            if (!feof(fptr))
            {
                puts(fileLine);
            }
        }
    }
    else
    {
        printf("\nError opening file.\n");
    }
    fclose(fptr); // Always close your files
    return(0);
}
// feof() returns a true condition if you 
// just read the last line from the file. 