#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int row = 1;
    int num = 1;
    while (row <= n)
    {
        // space print karlo
        int space = n - row;
        while (space)
        {
            cout << " ";
            space = space - 1;
        }
        // Number print karlo
        int col = 1;
        while (col <= row)
        {
            cout << num << " ";
            num = num + 1;
            col = col + 1;
        }
        cout << endl;
        row = row + 1;
    }

    return 0;
}