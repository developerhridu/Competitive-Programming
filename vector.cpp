#include <bits/stdc++.h>
using namespace std;

void inputInVectors()
{
    int n;
    vector<int> v;
    cin >> n;

    // Taking Input
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        v.push_back(a);
    }

    // printing input
    cout << "vector size is = " << v.size() << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << "value of [" << i << "] = " << v[i] << endl;
    }
}

void inputVectorManually()
{
    vector<int> vc = {10, 20, 30, 40, 50};
    cout << "Size of manually taken vector " << vc.size() << endl;
    for (int i = 0; i < vc.size(); i++)
    {
        cout << vc[i] << endl;
    }
    vc.clear(); // clear the vector
    cout << vc.size() << endl;
}

int main()
{
    // inputInVectors();
    inputVectorManually();
    return 0;
}