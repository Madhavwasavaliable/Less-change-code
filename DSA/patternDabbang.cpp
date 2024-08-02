#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int row = 1;
    int i = 1;
    while (row <= n)
    {

        // 1st Triangle
        int star = n - row + 1;
        while (star)
        {
            cout << n - star + 2 - row;
            star--;
        }

        // 2nd Triangle

        int col = 2;
        while (col <= row)
        {
            cout << "**";
            col++;
        }

        // 3rd Triangle
        int j2 = n - row + 1;

        while (j2)
        {
            cout << j2;
            j2--;
        }

        cout << endl;
        row++;
    }
}
