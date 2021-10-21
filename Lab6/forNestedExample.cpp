/* nested example */
#include <iostream> 

using namespace std;

int main ()
{
	
	cout << "Multiplication tables: \n";
	for (int i=1;i <= 12; i++)
	{
		for (int j=1;j <= 12;j++)
		{	
		cout << i << " * " << j << " = " << i*j << endl;
		}
	}


	return 0;
}
