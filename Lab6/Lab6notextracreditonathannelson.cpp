//
//  Lab6.cpp
//  Lab6
//
//  Created by Jonathan Nelson on 2/18/21.
//
/*extra credit - add a while loop that lets user repeat the program after being prompted*/

#include <iostream>

using namespace std;

int main ()
{
    
    int answer{0};
    
    do {
          cout << "Please enter an integer between 5 and 15 " << endl;
      cin >> answer;
      if (answer < 5 or answer > 15)
              cout << "Entry was not between 5 and 15, enter an integer between 5 and 15 \n ";
    } while (answer < 5 or answer > 15);
    
    

    for (int i = 1; i <= answer; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    
    for (int i = answer; i >= 1; i--)
    {
        for (int j = i; j >= 1; j--)
        {
            cout << "*";
        }
        cout << endl;
    }
    
    return 0;
}



