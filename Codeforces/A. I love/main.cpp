#include <iostream>

using namespace std;

int main()
{
    short n = 0 , Max = 0 , Min = 0 , num = 0;
    short *ptr;
    cin >> n ;
    ptr = new short[n];
    for (short i = 0 ; i < n ; i++)
    {
        cin >> *(ptr + i);
    }
    Max = ptr[0];
    Min = ptr[0];
    for (short i = 0 ; i < n ; i++)
    {
        if (*(ptr + i) > Max)
        {
            num++;
            Max = ptr[i];
        }

        if (*(ptr + i) < Min)
        {
            num++;
            Min = ptr[i];
        }
    }
    cout << num << endl;
    return 0;
}
