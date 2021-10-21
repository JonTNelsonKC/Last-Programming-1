//
//  OOOC.cpp
//  Lab6
//
//  Created by Jonathan Nelson on 2/22/21.
//

#include <iostream>

using namespace std;

int main(){
int a{4};
int b{12};
int c{37};
int d{51};
int result{d % a * c + a % b + a};

cout << result;
}

