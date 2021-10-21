//  do while Example for class
//  Prof Hale-Lespier
//  9/26/18
#include <iostream>
#include <string>
using namespace std;

int main() {   
   
   string answer;
   cout << "This shows how to use do while for checking input." << endl << endl;
   
   // loop until they enter the correct input
   do {   
         cout << "Please enter Y/N " << endl;
	 cin >> answer;
	 if (answer != "Y" && answer != "N")
             cout << "The only valid answers are Y or N. Please try again. \n ";
   } while (answer != "Y" && answer != "N"); 

} 

