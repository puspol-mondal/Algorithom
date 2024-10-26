#include <bits/stdc++.h>
using namespace std;
// class Pair
// {
// public:
//     int a, b;
//     void make_pair(int a, int b)
//     {
//         this->a = a;
//         this->b = b;
//     }
// };
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    // Pair p;
    // p.make_pair(10, 20);
    // cout << p.a << " " << p.b;

    pair<int, int> p;
    p = make_pair(10, 40);
    cout << p.first << " " << p.second;
    return 0;
}