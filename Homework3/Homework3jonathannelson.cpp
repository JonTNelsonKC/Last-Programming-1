//
//  Homework3.cpp
//  Homework3
//
//  Created by Jonathan Nelson on 2/18/21.
//

/*Count from 1 to 100 in increments of 1.
Count from 100 down to 1 in decrements of 1.
Count from 7 to 77 in steps of 7.
Count from 20 down to 2 in steps of -2.
Iterate over the sequence 2, 5, 8, 11, 14 , 17 , 20.
Iterate over the sequence 99, 88, 77, 66 , 55 , 44 , 33 , 22 , 11, 0. Hint use int rather than unsigned int here because the condition does not become false until i’s value is -11, so the control variable must be able to represent both positive and negative values.*/
/*
 Name: Jonathan Nelson
 Date: 02/20/2021
 Assignment: Homework 3
 */

#include <iostream>

using namespace std;

int main(){
    
    for (unsigned int counter{1};
         counter <= 100; ++counter){
        cout << counter << " ";
    }
    
    cout << endl;
    cout << endl;
    
    
    
    for (unsigned int counter{100};
         counter >= 1; --counter){
        cout << counter << " ";
    }
    
    cout << endl;
    cout << endl;
    
    
    
    for (unsigned int j = 7; j <= 77; j = j+7)
    {
        cout << j << " ";
    }
    
    cout << endl;
    cout << endl;
    
    
    
    for (unsigned int counter{20};
         counter >= 2; counter = counter-2){
        cout << counter << " ";
    }
    
    cout << endl;
    cout << endl;
    
    
    
    for (unsigned int counter{2};
         counter <= 20; counter = counter+3){
        cout << counter << " ";
    }
    
    cout << endl;
    cout << endl;
    
    
    
    for (int counter{99};
         counter >= 0; counter = counter-11){
        cout << counter << " ";
    }
    
    cout << endl;
    cout << endl;
    
    
    
    
    
   /* cout << "Multiplication tables: \n:";
    for (int i=1;i <= 12; i++)*/
    
   /* string answer;
    
    do{
        cout << "Please enter Y/N " << endl;
        cin >> answer;
        if(answer != "Y" && answer != "N")
            cout << "The only valid answers are Y or N. Please try again. \n ";
    } while (answer != "Y" && answer != "N");
    */
}
