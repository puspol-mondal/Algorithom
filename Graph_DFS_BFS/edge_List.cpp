#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<pair<int, int>> v;
    int n, e;
    cin >> n >> e;
    while (e--)
    {
        int a, b;
        cin >> a >> b;
        v.push_back({a, b});
    }
    for (pair<int, int> x : v)
    {
        cout << x.first << " " << x.second << "\n";
    }

    return 0;
}