#include <iostream>
using namespace std;

int round(double n);

int main()
{
    double n;
    cin >> n;
    cout << round(n);
    return 0;
}

int round(double n)
{
    int result;
    result = n*10;
    if (result >= 0)
        result = result/10 + bool (result%10 >= 5);
    else
        result = result/10 - bool (result%10 <=-5);
    return result;
}
