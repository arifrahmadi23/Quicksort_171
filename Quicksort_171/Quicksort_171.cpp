#include <iostream>
using namespace std;

//array of intgrers to hold values
int arr[20];
int cmp_count = 0; // number of comparasion
int mov_count = 0; // nummber of movement
int n;
void input() {
	while (true)
	{
		cout << "Masukan panjang element array : ";
		cin >> n;

		if (n <= 20)
			break;
		else
			cout << "\n Maksimum panjang array adalah 20" << endl;
	}

	
	cout << "\n-------------------" << endl;
	cout << "\nEnter array element" << endl;
	cout << "\n-------------------" << endl;

	for (int i = 0; i < n; i++)
	{
		cout << "<" << (i + 1) << ">";
		cin >> arr[i];
	}
}
//swap the element at index x with the element at index x y
void swap(int x, int y)
{
	int temp;
	temp = arr[x];
	arr[x] = arr[y];
	arr[y] = temp;
}
void q_short(int low, int high)
{
	int pivot, i, j;
	if l(low > high) // langkah 1
		return;

	// partition the list into two part
	// one containing element lee that or equal to pivot
	// outher containing element grether than pivot
	i = low + 1; // langkah 3
	j = high; // langkah 4
	pivot = arr[low]; // langkah 2

		
}
