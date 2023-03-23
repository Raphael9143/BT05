#include <iostream>
using namespace std;

void printLine(int m, int n);

int main()
{
    int n;
    cin >> n;
    for (int i=1; i<=n; i++)
    {
        printLine(i, n-i);
        cout << endl;
    }
    return 0;
}

void printLine(int m, int n)
{
    for (int i=1; i<=n; i++)
    {
        cout << " ";
    }
    for (int i=1; i<=2*m-1; i++)
    {
        cout << "*";
    }
}
