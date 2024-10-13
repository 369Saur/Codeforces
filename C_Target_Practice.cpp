#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        char mat[10][10];
        for (int i = 0; i < 10; i++)
        {
            for (int j = 0; j < 10; j++)
            {
                cin >> mat[i][j];
            }
        }
        int count = 0;
        for (int i = 0; i < 10; i++)
        {
            for (int j = 0; j < 10; j++)
            {
                if (mat[i][j] == 'X')
                {
                    if (i == 0 || i == 9)
                    {
                        count += 1;
                    }
                    else if (i == 1 || i == 8)
                    {
                        if (j == 0 || j == 9)
                        {
                            count += 1;
                        }
                        else
                        {
                            count += 2;
                        }
                    }
                    else if (i == 2 || i == 7)
                    {
                        if (j == 0 || j == 9)
                        {
                            count += 1;
                        }
                        else if (j == 1 || j == 8)
                        {
                            count += 2;
                        }
                        else
                        {
                            count += 3;
                        }
                    }
                    else if (i == 3 || i == 6)
                    {
                        if (j == 0 || j == 9)
                        {
                            count += 1;
                        }
                        else if (j == 1 || j == 8)
                        {
                            count += 2;
                        }
                        else if (j == 2 || j == 7)
                        {
                            count += 3;
                        }
                        else
                        {
                            count += 4;
                        }
                    }
                    else if (i == 4 || i == 5)
                    {
                        if (j == 0 || j == 9)
                        {
                            count += 1;
                        }
                        else if (j == 1 || j == 8)
                        {
                            count += 2;
                        }
                        else if (j == 2 || j == 7)
                        {
                            count += 3;
                        }
                        else if (j == 3 || j == 6)
                        {
                            count += 4;
                        }
                        else
                        {
                            count += 5;
                        }
                    }
                }
            }
        }
        cout << count << endl ;
    }
    return 0;
}