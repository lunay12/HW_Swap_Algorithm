#include <iostream>

using namespace std;

// Variable - START
//	define variables that are global between the two Variable marker

// Variable - END

// Function/Method Declaration - START
//	define function/method declaration signatures between the two markers
void sort(int a[], int number_used);
//Precondition: number_used <= declared size of the array a.
//Array elements a[0] through a[number_used - 1] have values
void display(int a[], int size);
// Function/Method Declaration - END

int main() {
	int size;
	int* a;
	
	cout << "How many integers do you want to enter ? ";
	cin >> size;
	a = new int[size];
	
	cout << "Enter your " << size << " integers " << endl;
	for (int i = 0; i < size; i++) cin >> a[i];
	
	cout << "Not in numerical order:"<<endl;
	display(a, size);
	sort(a, size);
	cout << "In numerical order:" << endl;
	display(a, size);

	return 0;
}

// Function/Method Definition - START
//	define function/method declaration signatures between the two markers

void sort(int a[], int size)
{
	//outer loop
	for (int i = 0; i < size; i++)
	{
	
		for (int y = i + 1; y < size; y++)
		{
			if (a[i] > a[y])
			{
				int size = a[i];
				a[i] = a[y];
				a[y] = size;
                         }
}
		
	}
	
}

void display(int a[], int size)
{
	for (int i = 0; i < size; i++) cout << a[i] << " ";
	cout << endl;
}
