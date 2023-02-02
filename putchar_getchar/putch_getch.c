// getch() does not echo the input characters to the screen as getchar() does.
// Therefore, you must follow getch() with a mirror-image putch() if you want the
// user to see onscreen the character he or she typed. To echo the initials, you could do
// this:
#include <stdio.h>
#include <string.h>
int main(void)
{
    char firstInit, lastInit;
    printf("What are your two initials?\n");
    firstInit = getch();
    putch(firstInit);
    lastInit = getch();
    putch(lastInit);
}