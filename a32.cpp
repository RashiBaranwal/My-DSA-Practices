#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int i = 1, num = 1;
    while (i <= n)
    {
        // space print karlo
        int j = 1 , space = 1;
        while (space<= n-i)
        {
            cout << "  ";//Notice two spaces
            space = space + 1;
        }
        // Number print karlo
        while (j <= i)
        {
            cout << num << " ";
            num = num + 1;
          j = j + 1;
        }
        i = i + 1;
        
        cout << endl;
    }

    return 0;
}