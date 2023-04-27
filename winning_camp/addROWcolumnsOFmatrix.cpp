#include <iostream>
using namespace std;
int main()
{
    int a[3][3];
    int n = 3;
    int addRow, addColumn;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }

    for (int i = 0; i < n; i++)
    {

        addRow = 0;
        for (int j = 0; j < n; j++)
        {
            addRow += a[i][j];

            cout << a[i][j] << " ";
        }

        cout << "\n"
             << addRow << " ";
        cout << "\n";
    }

    for (int i = 0; i < n; i++)
    {
        addColumn = 0;

        for (int j = 0; j < n; j++)
        {

            addColumn += a[j][i];
        }

        cout << addColumn << " ";
    }

    return 0;
}