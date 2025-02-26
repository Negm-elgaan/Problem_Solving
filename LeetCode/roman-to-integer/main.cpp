#include <iostream>

using namespace std;
class Solution {
public:
    int romanToInt(string s) {
        short number = 0 , x = 0 , y = 0;
        string ch = "";
        for (int i = 0 ; s[i] != '\0' ; i++)
        {
            y = x;

            switch(s[i])
            {
                case 'I':
                    number += 1;
                    x = 1;
                    break;
                case 'V':
                    number += 5;
                    x = 5;
                    break;
                case 'X':
                    number += 10 ;
                    x = 10;
                    break;
                case 'L':
                    number += 50;
                    x = 50;
                    break;
                case 'C':
                    number += 100 ;
                    x = 100;
                    break;
                case 'D':
                    number += 500 ;
                    x = 500;
                    break;
                case 'M':
                    number += 1000 ;
                    x = 1000;
                    break;
            }

            ch += s[i];

            if (ch.length() == 2)
            {
                if (ch == "IV" || ch == "IX")
                {
                    number -= 2;
                }
                else if (ch == "XL" || ch == "XC")
                {
                    number -= 20;
                }
                else if (ch == "CD" || ch == "CM")
                {
                    number -= 200;
                }
                ch = ch[1];
            }
            //if ( y < x)
               // number -= y;
        }
        return number;
    }
};
int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
