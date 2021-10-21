/*
 Name: Jonathan Nelson
 Assignment: Lab 6
 Date: 02/18/2021

 
 Triangle-Printing Program. Write a program that displays the following 2 patterns separately, one below the other.
 First * **
      ***
      ****
      *****
      ******
      *******
      ********
      *********
      **********
 second
 **********
 *********
 ********
 *******
 ******
 *****
 **** *** **
 *
 Use 2 sets of nested for loops to generate the patterns. All asterisks (*) should be printed by a single statement of the form cout << ‘*’; which causes the asterisks to print side by side. A statement of the form cout << endl; can be used to move to the next line.
 Your program should be able to print triangles 5 to 15 stars long. Prompt the user at the beginning of the program to find out how big a triangle they want to print out. Make sure the user gives you a number from 5 to 15. If not tell them they gave bad input and prompt them again. Continue to prompt until the correct input is given.
 **** Extra Credit chance for rounding grade
 For extra credit after each set of triangles is printed prompt the user if they want to print another set of triangles. The program should continue until the user chooses NO they don’t want to print another set.
 */

#include <iostream>

using namespace std;

int main ()
{
    
    int answer{0}; //variable entered by the user that determines the amount of stars
    int keep{0}; //used to continue or end the program
    
    do {//continue program do loop
        
        do {//do loop to get a valid entry that satisfies the given parameters
              cout << "Please enter an integer between 5 and 15 " << endl;
          cin >> answer;
          if (answer < 5 or answer > 15)
                  cout << "Entry was not between 5 and 15, enter an integer between 5 and 15 \n ";
        } while (answer < 5 or answer > 15);
        
        

        for (int i = 1; i <= answer; i++)//nested for statements that print the 1-7 trees
        {
            for (int j = 1; j <= i; j++)
            {
                cout << "*";
            }
            cout << endl;
        }
        
        for (int i = answer; i >= 1; i--)//nested for statements that print the 7-1 trees
        {
            for (int j = i; j >= 1; j--)
            {
                cout << "*";
            }
            cout << endl;
        }
        
        
        
        cout << "Enter 1 to run the program again or any other number to quit: ";
        
        cin >> keep;
        
        if(keep == 1){
        
        }} while (keep == 1);//closes the repeat the program do loop
    
    return 0;
}






