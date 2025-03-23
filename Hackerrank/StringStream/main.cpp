#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) {
	// Complete this function
    vector <int> VGuys;
    string a = "";
    for (int i = 0 ; str[i] != '\0' ; i++)
    {

        if (str[i] == ',')
        {
            VGuys.push_back(stoi(a));
            a = "";
            continue;
        }
        a += str[i];
    }
    if (a != "")
        VGuys.push_back(stoi(a));
    return VGuys;
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }

    return 0;
}
