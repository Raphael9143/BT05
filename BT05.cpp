#include <iostream>
#include <math.h>

bool isPrime(int n);

int main()
{
    int n;
    std::cin >> n;
    bool result = isPrime(n);
    std::cout << result;
    return 0;
}

bool isPrime(int n)
{
    for (int i=2; i<= sqrt(n); i++)
    {
        if (n%i == 0) return false;
    }
    return true;
}
