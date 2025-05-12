#include <iostream>

using namespace std;

int main()
{
    short n = 0 , h = 0 , w = 0;

    cin >> n >> h;

    short *ptr = new short[n];

    for (int i = 0 ; i < n ; i++)
    {
        cin >> ptr[i];
        if (ptr[i] > h)
            w += 2;
        else
            w++;
    }

    cout << w ;

    return 0;
}
