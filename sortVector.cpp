#include <bits/stdc++.h>
using namespace std;

void sortVector()
{
    vector<int> v = {5, 4, 9, 10, -4, 3, 100};
    sort(v.begin(), v.end());
    for (auto u : v)
    {
        cout << u << " ";
    }
}
int main()
{
    sortVector();
    return 0;
}