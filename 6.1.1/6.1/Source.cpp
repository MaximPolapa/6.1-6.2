#include <iostream>
#include <iomanip>
#include <time.h>

using namespace std;

void create(int r[], const int size)
{
    for (int i = 0; i < size; i++)
    {
        r[i] = 3 + rand() % (92 - 3 + 1);
    }

}


void vuvid(int r[], const int size)
{
 
    for (int i = 0; i < size; i++)
    {
        cout << r[i] << " " ;
    }
    cout << endl;
}



int Count(const int const r[], const int size)
{
    int C = 0;
    for (int i = 0; i < size; i++)
    {
        if (!(r[i] % 2 != 0 || i % 7 == 0))
            C++;
    }
    return C;
}

int Sum(const int* const r, const int size)
{
    int S = 0;
    for (int i = 0; i < size; i++)
    {
        if (!(r[i] % 2 != 0 || i % 7 == 0))
            S += r[i];
    }
    return S;
}


void Replasment(int r[], const int size)
{
    for (int i = 0; i < size; i++)
    {
        if (!(r[i] % 2 != 0 || i % 7 == 0))
            r[i] = 0;
    }
}


void main()
{
    srand(time(NULL));

    const int n = 2;
    int b[n];
    const int size = 26;
    int r[size];
    create(r, size);
    vuvid(r,size);
    cout << "Sum elements = " << Sum(r, size) << endl;
    cout << "Number elements = " << Count(r, size) << endl;
    Replasment(r, size);
    vuvid(r, size);

}
