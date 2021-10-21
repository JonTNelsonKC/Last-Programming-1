/* scope example */
#include <iostream> 

using namespace std;

int main ()
{
	int i = 1;
	
	cout << "i for loop \n";
	for (i;i <= 10; i++)
	{
		cout << i;
	}

	cout << endl;
	cout << "i is equal to " << i << endl;

	cout << "j for loop \n";
	for (int j=1;j <= 10;j++)
	{
		cout << j;
	}

	cout << endl;
  	cout << "j is equal to " << j << endl;
      

	return 0;
}
