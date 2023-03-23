#include <math.h>
#include <iostream>
using namespace std;

int ucln(int x, int y);

int main()
{
    int x, y;
    cin >> x >> y;
    cout << ucln(x, y);
    return 0;
}

int ucln(int x, int y)
{
    int result;
    for (int i=2; i<=min(x, y); i++)
    {
        if (x%i == 0 && y%i == 0)
            result = i;
    }
    return result;
}
