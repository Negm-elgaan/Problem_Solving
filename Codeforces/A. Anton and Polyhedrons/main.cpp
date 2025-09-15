#include <iostream>

using namespace std;

enum Polyhedrons { Tetrahedron = 4 , Cube = 6 , Octahedron = 8 , Dodecahedron = 12 , Icosahedron = 20};
istream& operator>> (istream& is, Polyhedrons& p)
{
    string token;
    if (is >> token)
    {
        if (token == "Tetrahedron")
            p = Tetrahedron;
        else if (token == "Cube")
            p = Cube;
        else if (token == "Octahedron")
            p = Octahedron;
        else if (token == "Dodecahedron")
            p = Dodecahedron;
        else if (token == "Icosahedron")
            p = Icosahedron;
    }
    return is;
}
int main()
{
    int Number = 0 , Faces = 0;
    cin >> Number;
    Polyhedrons* EnPtr = new Polyhedrons[Number];
    for (int i = 0 ; i < Number ; i++)
    {
        cin >> EnPtr[i];
        Faces += EnPtr[i];
    }
    cout << Faces;
    return 0;
}
