#include <iostream>

using namespace std;

void DisplayArray(int*, int);
void CountingSigns(int*, int, int&, int&, int&);
void Order(int, int, int, int);
void IsEqual(int, int);

int main()
{
	int array[32];
	int dim;
	cout << "Enter the dimention, array < 33: ";
	cin >> dim;
	while (dim <= 1 || dim > 32)
	{
		if (dim = 1)
		{
			cout << "Dimension = 1, there is nothing to compare with\n";
		}
		cout << "Invalid data!\nTry again\n";
		cin >> dim;
		
	}
	for (int i = 0; i < dim; i++)
	{
		cout << "[" << i + 1 << "] : ";
		cin >> array[i];
	}
	
	int lessthan = 0, greaterthan = 0, equal = 0;

	CountingSigns(array, dim, lessthan, greaterthan, equal);
	IsEqual(equal, dim);
	cout << " and ";
	Order(lessthan, greaterthan, equal, dim);
	
	system("pause");
}



void DisplayArray(int* array, int dim)
{
	for (int i = 0; i < dim; i++)
	{
		cout << "[" << i + 1 << "] = " << array[i] << endl;
	}
}

void CountingSigns(int*array, int dim, int& lessthan, int& greaterthan, int& equal)
{
	for (int i = 0; i < dim - 1; i++)
	{
		if (array[i] < array[i + 1])
		{
			++lessthan;
		}
		else if (array[i] > array[i + 1])
		{
			++greaterthan;
		}
		else if (array[i] == array[i + 1])
		{
			++equal;
		}

	}

}

void IsEqual(int equal,int dim)
{
	if (equal == dim - 1)
	{
		cout << "Equal";
	}
	else
	{
		cout << "Unequal";
	}
}

void Order(int lessthan, int greaterthan, int equal, int dim)
{
	if (lessthan == dim - 1)
	{
		cout << "Strictly increasing\n";
	}
	else if (greaterthan == dim - 1)
	{
		cout << "Strictly decreasing\n" << endl;
	}
	else if (lessthan + equal == dim - 1 && equal != dim - 1 && lessthan != dim - 1)
	{
		cout << "Increasing instrictly\n" << endl;
	}
	else if (greaterthan + equal == dim - 1 && equal != dim - 1 && greaterthan != dim - 1)
	{
		cout << "Decreasing instrictly\n" << endl;
	}
	else cout << "Not ordered\n" << endl;
}

