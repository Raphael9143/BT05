#include <iostream>
using namespace std;

int toHop(int k, int n);
int kiemTra(int k, int n);
//void nhapKN(int k[], int n[], int* soPhanTu);
int giaiThua(int num);

int main()
{
    int *k = new int [1000];
    int *n = new int [1000];
    int soPhantu = 0;
    //nhapKN(k, n, soPhantu);
    for (int i=0; i<1000; i++)
    {
        cin >> k[i] >> n[i];
        soPhantu++;
        if (kiemTra(k[i], n[i]) == 0)
        {
            cout << "khong thoa man dieu kien\n";
            return 0;
        }
        if (k[i] == -1 && n[i] == -1)
            break;
    }
    for (int i=0; i<soPhantu-1; i++)
    {
        cout << toHop(k[i], n[i]) << endl;
    }
    return 0;
}

int giaiThua(int n)
{
    int result = 1;
    for (int i=2; i<=n; i++)
    {
        result *= i;
    }
    return result;
}
/*
void nhapKN(int k[], int n[], int* soPhanTu)
{
    int cnt = 0;
    for (int i=0; i<1000; i++)
    {
        int ck, cn;
        cin >> ck >> cn;
        k[cnt] = ck;
        n[cnt] = cn;
        cnt++;
        if (ck == -1 && cn == -1)
            break;
    }
    *soPhanTu = cnt;

}
*/
int kiemTra(int k, int n)
{
    if (n == -1 && k == -1)
        return 1;
    if (n<1 || n>20)
        return 0;
    if (k<0 || k>n)
        return 0;
    return 1;
}

int toHop(int k, int n)
{
    int gK = giaiThua(k), gN = giaiThua(n), gN_K = giaiThua(n-k);
    return (gN)/(gK*gN_K);
}

