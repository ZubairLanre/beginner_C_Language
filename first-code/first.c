#include <stdio.h>
#include <string.h>


int main(void) 
{ 
    char days[10] = "saturday";
    days[6] = 'b';
    strcpy(days, "tuesday");
    printf("the days are %s\n", days);
}