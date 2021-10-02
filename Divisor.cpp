#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define fraction(a)               \
    cout.unsetf(ios::floatfield); \
    cout.precision(a);            \
    cout.setf(ios::fixed, ios::floatfield);
#define endl '\n'

int main()
{
    optimize();

    int n;
    cin >> n;

    vector<int> divisor;

    int sq = sqrt(n);
    for (int i = 1; i <= sq; i++)
    {
        if (n % i == 0)
        {
            divisor.push_back(i); //<=sqrt(n)

            if (n / i != i)
            {
                divisor.push_back(n / i); ////>sqrt(n)
            }
        }
    }

    sort(divisor.begin(), divisor.end());

    for (auto u : divisor)
    {
        cout << u << " ";
    }
    cout << endl;

    return 0;
} //complexity=O(sqrt(n))
