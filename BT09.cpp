#include <iostream>
#include <ctime>
using namespace std;

int getRandomNumber(int n)
{
    srand(time(0));
    return rand()%n + 1;
}

int main ()
{
    int n;
    cin >> n;
    int result = getRandomNumber(n);
    cout << result;
    return 0;
}
