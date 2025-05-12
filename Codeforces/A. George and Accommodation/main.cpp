#include <iostream>

using namespace std;

int main()
{
    int n = 0 , x  = 0, num = 0;

    cin >> n;

    int *ptr = new int [n * 2];

    for (int i = 0 ; i < n * 2 ; i++)
    {
        cin >> ptr[i];
    }

    for (int i = 0 ; i < n * 2 ; i += 2)
    {
        x = ptr[i + 1] - ptr[i];
        if (x - 2 >= 0)
            num++;
        x = 0;
    }

    cout << num;

    return 0;
}
