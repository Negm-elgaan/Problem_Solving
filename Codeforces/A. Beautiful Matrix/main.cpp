#include <iostream>

using namespace std;

int main()
{
    short arr[5][5] , number1 = 0 , number2 = 0;
    for (short i = 0 ; i < 5 ; i++)
    {
        for (short j = 0 ; j < 5 ; j++)
        {
            cin >> arr[i][j];
            if (arr[i][j] == 1)
            {
                number1 = i;
                number2 = j;
            }
        }
    }

    if (number1 == 2 && number2 == 2)
    {
        cout << 0;
    }
    else if (number1 >= 2 && number2 >= 2)
    {
        number1 -= 2;
        number2 -= 2;
        cout << number1 + number2;
    }
    else if (number1 >= 2 && number2 < 2)
    {
        number1 -= 2;
        number2 = 2 - number2;
        cout << number1 + number2;
    }
    else if (number1 < 2 && number2 >= 2)
    {
        number2 -= 2;
        number1 = 2 - number1;
        cout << number1 + number2;
    }
    else
    {
        number1 = 2 - number1;
        number2 = 2 - number2;
        cout << number1 + number2;
    }
    return 0;
}
