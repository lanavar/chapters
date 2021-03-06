#include <stdio.h>
#include <stdlib.h>

#define MAXBUF 100    /* Maximum size of the buffer */

/* Main file for the program, this is the interface where the user will be asked to select what they want to do.
   this is part of lab1 for acr1 class written by Lenin Navar */
int main()
{
  char element;                // Element to find out what 
  int choice;                  // int for the choice entered by user
  char buf[MAXBUF];               // Buffer for receiving elements


  /* Loop for selecting the choice by the customer */
  while(choice!=9){

    /* Display the message of options to the user */
    printf("Please select the desired choice by entering the corresponding number.  \n");
    printf("1. Add a new employee name. \n");
    printf("2. Remove an employee name. \n");
    printf("3. List all of the employee names. \n");
    printf("4. Read employee information from a file. \n");
    printf("5. Write employee information into a file. \n");
    printf("9. Exit program. \n");
    printf("Please enter your choice: ");

    /* Get information from user */
    choice = getchar();

    printf("%c, char %d num choice for user \n", choice, choice);
  }
  return 0;
}
