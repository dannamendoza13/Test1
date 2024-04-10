#include <iostream>

using namespace std;

int main()
{
    char palabra[20] = "abcde";
    char reverso [20] = "edcba";

    cin.get(palabra, 20);

    int j = 0;

    for(int i = 19; i >= 0; i--)
    {
        reverso[j] = palabra[i];
        j++;
    }
    cout << reverso [j] << endl;
    return 0;
}
