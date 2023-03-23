#include <iostream>
#include <math.h>
using namespace std;

long long toBinary(long long n);
long long toDecimal(long long n);

int main()
{
    long long n;
    cin >> n;
    n = toBinary(n);
    cout << n << endl;
    cout << toDecimal(n);
    return 0;
}

long long toBinary(long long n)
{
    long long result = 0;
    int cnt = 0;
    while (n > 0)
    {
        if (n%2 == 1)
        {
            result += pow(10, cnt);
        }
        cnt++;
        n/=2;
    }
    return result;
}

long long toDecimal(long long n)
{
    long long result = 0;
    int cnt = 0;
    while (n > 0)
    {
        result += (n%10)*pow(2, cnt);
        n/=10;
        cnt++;
    }
    return result;
}
