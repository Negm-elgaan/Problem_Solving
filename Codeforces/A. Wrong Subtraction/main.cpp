#include <iostream>

using namespace std;

void WrongSubtraction(int n , short k)
{
    int rem = 0;
    for (int i = 0 ; i < k ; i++)
    {
        rem = n % 10;
        if (rem == 0)
            n /= 10;
        else
            n--;
    }

    cout << n << endl;
}
int main()
{
    int n = 0 ;
    short k = 0;
    cin >> n >> k;
    WrongSubtraction(n,k);
    return 0;
}
