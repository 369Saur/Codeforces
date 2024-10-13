#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        char mat[n][m];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> mat[i][j];
            }
        }
        int flag = 0;
        for (int j = 0; j < m; j++)
        {
            for (int i = 0; i < n; i++)
            {
                if (flag == 0)
                {
                    if (mat[i][j] == 'v')
                    {
                        flag = 1;
                        break;
                    }
                    else
                    {
                        continue;
                    }
                }
                else if (flag == 1)
                {
                    if (mat[i][j] == 'i')
                    {
                        flag = 2;
                        break;
                    }
                    else
                    {
                        continue;
                    }
                }
                else if (flag == 2)
                {
                    if (mat[i][j] == 'k')
                    {
                        flag = 3;
                        break;
                    }
                    else
                    {
                        continue;
                    }
                }
                else if (flag == 3)
                {
                    if (mat[i][j] == 'a')
                    {
                        flag = 4;
                        break;
                    }
                    else
                    {
                        continue;
                    }
                }
            }
            if (flag == 4)
            {
                break;
            }
        }
        if (flag == 4)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}