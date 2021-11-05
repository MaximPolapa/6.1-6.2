#include <iostream>
#include  <time.h>
#include <iomanip>

using namespace std;

void create(int a[],int n, const int Low, const int High)
{
	for (int i = 0; i < n; i++)
	{
		a[i] = Low + rand() % (High - Low + 1);

	}

}

void vuvid(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << endl;
	}
}

int Min(int* a, const int n)
{
	int index = 0;
	int min = a[index];
	for (int i = 1; i < n; i++)
		if (a[i] < min)
		{
			min = a[i];
			index = i;
		}
			
	return index;
}

int Max(int* a, const int n)
{
	int index = 0;
	int max = a[0];
	for (int i = 1; i < n; i++)
		if (a[i] > max)
		{
			max = a[i];
			index = i;
		}
			

	return index;
	
}

int Sum(int* a, const int n)
{
	int Summa = 0;
	Summa += Max(a, n) + Min(a, n);
	return Summa;

}

int main()
{
	srand(time(NULL));

	int n = 0;
	cout << "n="; cin >> n;
	int *a = new int[n];
	int High = 20;
	int Low = -20;
	create(a, n,Low,High);
	vuvid(a, n);
	Max(a, n);
	Min(a, n);
	cout << "Min=" << Min(a, n) << endl;
	cout << "Max=" << Max(a, n) << endl;
	cout << "Sum=" << Sum(a,n) << endl;

	delete[] a;
	return 0;
}
