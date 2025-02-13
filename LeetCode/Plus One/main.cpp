#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {

        if (digits.size() == 1 && digits[digits.size() - 1] == 9)
        {
            digits[digits.size() - 1] = 1;
            digits.push_back(0);
            return digits;
        }

        int i = 1;

        for (i ; i < digits.size() ; i++)
        {
            if (digits[digits.size() - i] != 9)
                break;

            digits[digits.size() - i] = 0;
        }

        if (digits[0] == 9 && i == digits.size())
        {
            digits[0] = 1;
            digits.push_back(0);
            return digits;
        }
        digits[digits.size() - i]++;

        return digits;
    }
};


int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
