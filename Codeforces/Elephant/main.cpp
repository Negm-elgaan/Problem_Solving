#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    int x = 0;
    int* ptr = (int*)malloc(4);
    cin >> *ptr;
    while (*ptr >= 5)
    {
        *ptr -= 5;
        x++;
    }
    while (*ptr >= 4)
    {
        *ptr -= 4;
        x++;
    }
    while (*ptr >= 3)
    {
        *ptr -= 3;
        x++;
    }
    while (*ptr >= 2)
    {
        *ptr -= 2;
        x++;
    }
    while (*ptr >= 1)
    {
        *ptr -= 1;
        x++;
    }
    free(ptr);
    cout << x << endl;
    return 0;
}
