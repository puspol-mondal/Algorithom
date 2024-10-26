#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, e;
    cin >> n >> e;
    vector<int> mat[n];
    while (e--)
    {
        int a, b;
        cin >> a >> b;
        mat[a].push_back(b);
        mat[b].push_back(a);
    }
    // for (int x : mat[1])
    // {
    //     cout << x << "\n";
    // }
    for (int i = 0; i < mat[0].size(); i++)
    {
        cout << mat[0][i] << "\n";
    }

    return 0;
}