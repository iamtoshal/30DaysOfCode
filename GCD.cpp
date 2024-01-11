#include <iostream>
using namespace std;

int GCD(int m, int n)
{
    while (m > 0 && n > 0)
    {
        if (m > n)
        {
            m = m % n;
        }
        else
        {
            n = n % m;
        }
    }

    if (m == 0)
    {
        return n;
    }
    else
    {
        return m;
    }
}

int main()
{
    cout << GCD(10, 8);
    return 0;
}