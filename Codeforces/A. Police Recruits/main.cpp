#include <iostream>

using namespace std;

int main()
{
    int x = 0  , z = 0 , n = 0;

    cin >> n ;

    for (int i = 0 ; i < n ; i++)
    {
        short b = 0;
        cin >> b ;

        if (b == -1 && x == 0)
        {
            z++;
        }

        else if (b == -1 && x > 0)
        {
            x--;
        }

        else
        {
            x += b;
        }
    }

    cout << z;

    return 0;
}
