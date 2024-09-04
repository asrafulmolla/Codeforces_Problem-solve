#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    vector<vector<char>> map(n, vector<char>(m));
    for (int i=0;i<n;i++)
    {
        for (int j=0;j<m;j++)
        {
            cin>>map[i][j];
        }
    }
    int row[4], col[4];
    int count = 0;
    for (int i=0;i<n;++i)
    {
        for (int j=0; j < m; ++j)
        {
            if (map[i][j] == '*')
            {
                row[count] = i;
                col[count] = j;
                count++;
            }
        }
    }
    int fourth_row, fourth_col;
    if (row[0] == row[1]) {
        fourth_row = (row[2] == row[0]) ? row[3] : row[2];
    } else if (row[0] == row[2]) {
        fourth_row = (row[1] == row[0]) ? row[3] : row[1];
    } else {
        fourth_row = row[0];
    }

    if (col[0] == col[1]) {
        fourth_col = (col[2] == col[0]) ? col[3] : col[2];
    } else if (col[0] == col[2]) {
        fourth_col = (col[1] == col[0]) ? col[3] : col[1];
    } else {
        fourth_col = col[0];
    }

    cout << fourth_row + 1 << " " << fourth_col + 1 << endl;

    return 0;
}
