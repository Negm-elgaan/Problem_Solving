#include <iostream>
#include <string>

using namespace std;

int lexicograph(string S1 , string S2)
{

    int arr[] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26};

    for (int i = 0 ; S1[i] != '\0' ; i++)
    {
        int x = arr[tolower(S1[i]) - 97];
        int y = arr[tolower(S2[i]) - 97];
        if (x > y)
            return 1;
        else if (x < y)
            return -1;
    }

    return 0;
}

int main()
{
    string s1 ,s2;
    cin >> s1 >> s2;
    cout << lexicograph(s1,s2);
    return 0;
}
