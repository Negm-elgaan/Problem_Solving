#include <iostream>

using namespace std;

int main()
{
    int n = 0 ;
    cin >> n;
    int *ptr = new int[n];

    for (int i = 0 ; i < n; i++)
    {
        int number = 0 ;
        cin >> number;
        ptr[number - 1] = i + 1;
    }

    for (int i = 0 ; i < n; i++)
    {
        cout << ptr[i] << " ";
    }

    cout << endl;

    delete[] ptr;

    return 0;
}
