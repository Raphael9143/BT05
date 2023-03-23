#include <iostream>
#include <math.h>
#include <ctime>
using namespace std;

int* getRandomArray(int* arr, int n);
void sumOfArray(int arr[], int n);

int main()
{
    int n;
    cin >> n;
    int *arr = new int [n];
    arr = getRandomArray(arr, n);
    for (int i=0; i<n; i++)
    {
        cout << arr[i] << " ";
    }
    sumOfArray(arr, n);
}

int* getRandomArray(int* arr, int n)
{
    srand(time(0));
    for (int i=0; i<n; i++)
    {
        arr[i] = rand() % 50;
    }
    return arr;
}

void sumOfArray(int arr[], int n)
{
    for (int i=0; i<n-2; i++)
    {
        for (int j=i+1; j<n-1; j++)
        {
            for (int k=j+1; k<n; k++)
            {
                if ((arr[i] + arr[j] + arr[k]) % 25 == 0)
                    cout << arr[i] << " " << arr[j] << " " << arr[k] << endl;
            }
        }
    }

}
