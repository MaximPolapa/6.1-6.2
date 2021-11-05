#include <iostream> 
#include <iomanip> 
#include <time.h> 
using namespace std;

void creat(int* r, const int size, int i)
{
    if (i < size)
    {
        r[i] = 3 + rand() % (92 - 3 + 1);
        return creat( r,size, i+1);
    }
}

void vuvid(int* r, const int size, int i)
{
    if (i < size)
    {
        cout << r[i];
        if (i != size - 1)
            cout << ", ";
        else cout << " " << endl;
        return vuvid(r, size, i + 1);
    }

}

int Sum(int* r, const int size, int i)
{
    if (i < size)
    {
        if (!(r[i] % 2 != 0 || i % 7 == 0))
            return r[i] + Sum(r, size, i + 1);
        else
            return Sum(r, size, i + 1);
    }
    else return 0;
}

void replasment(int* r, const int size, int i)
{
    if (i < size)
    {
        if (!(r[i] % 2 != 0 || i % 7 == 0))
            r[i] = 0;
        return replasment(r, size, i + 1);
    }
}


int Count(const int* r, const int size, int i)
{
    if (i < size)
    {
        if (!(r[i] % 2 != 0 || i % 7 == 0))
            return 1 + Count(r, size, i + 1);
        else
            return Count(r, size, i + 1);

    }
    else return 0;
}

int main()
{
    srand(time(NULL));

    const int size = 26;
    int r[size];
    creat(r, size, 0);
    vuvid(r, size,0);
    cout << "Sum elements = " << Sum(r, size, 0) << endl;
    cout << "Number elements = " << Count(r, size,0) << endl;
    replasment(r, size, 0);
    vuvid(r, size, 0);
    return 0;

}






