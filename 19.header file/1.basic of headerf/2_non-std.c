#include <stdio.h>
#include <conio.h> //contain some useful console function
void displaymsg();

int main() {
    printf("Press any key to print the message \n");
    getch(); //function used for wait and execute when press the key
    displaymsg();
    return 0;
}

void displaymsg(){
    printf("Hello world ! \n");
}