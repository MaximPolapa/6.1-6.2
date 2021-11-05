#include <iostream>
#include  <time.h>
#include <iomanip>

using namespace std;
void create(int *a, int n, int i, const int Low, const int High)
{
	if (i < n)
	{
		a[i] = Low + rand() % (High - Low + 1);
		 create(a, n, i + 1,Low,High);

	}
}

void vuvid(int* a, int n, int i)
{
	if (i < n)
	{
		cout << a[i];
		if (i != n - 1)
			cout << ", ";
		else cout << " " << endl;
	    vuvid(a, n, i + 1);
	}
}

int Min(int* a, const int size, int i, int min)
{
	if (a[i] < min)
		min = a[i];
	if (i < size - 1)
		return Min(a, size, i + 1, min);
	else
		return min;
}

int Max(int* a, const int n, int i, int max)
{
	if (a[i] > max)
		max = a[i];
	if (i < n - 1)
		return Max(a, n, i + 1, max);
	else
		return max;
}

int Sum(int* a, const int n)
{
	int Summa = 0;
	Summa += Max(a, n,0,0) + Min(a, n,0,0);
	return Summa;

}



int main()
{
	srand(time(NULL));

	int n = 0;
	cout << "n="; cin >> n;
	int* a = new int[n];
	int High = 20;
	int Low = -20;
	create(a, n,0, Low, High);
	vuvid(a, n,0);
	Max(a, n,0,0);
	Min(a, n,0,0);
	cout << "Min=" << Min(a, n,0,0) << endl;
	cout << "Max=" << Max(a, n,0,0) << endl;
	cout << "Sum=" << Sum(a, n) << endl;

	delete[] a;
	return 0;


}