#include <stdio.h>
#include <stdlib.h>

//Global scope
#define MAX 100
#define MIN 55

//prototypes
int addThree(int);
void showMessage();
void checkRange(int);
int main()
{ // int to 1 so you don't get random numbers  START MAIN

/*  int num = 1;

    num = addThree(num);

    printf("%d", num);

    showMessage();
*/
    checkRange(101);

    return 0;
} // END MAIN

//blueprints
int addThree(int x)
{
    return x + 3;
}
void showMessage()
    {
        printf("Value is out of range.\n");
    }

void checkRange(int enteredValue)
{//|| or && and
    if (enteredValue > MAX || enteredValue < MIN);
    {
        showMessage();
    }
}
