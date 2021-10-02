#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

vector<int> divisor[123];

int main()
{
    optimize();

    int n;
    cin>>n;

    for(int i=1;i<=n;i++){
        int sq=sqrt(i);
        for(int j=1;j<=sq;j++){
            if(i%j==0){
                divisor[i].push_back(j);//<=sqrt(n)

                if(i/j !=j){
                    divisor[i].push_back(i/j);////>sqrt(n)
                }
            }
        }
    }

    for(int i=1;i<=n;i++){
        sort(divisor[i].begin(),divisor[i].end());
        cout<<i<<" : ";
        for(auto u:divisor[i]){
            cout<<u<<" ";
        }
        cout<<endl;
    }

    return 0;
}//complexity=O(n(sqrt(n))


Output:
10
1: 1
2: 1 2
3: 1 3
4: 1 2 4
5: 1 5
6: 1 2 3 6
7: 1 7
8: 1 2 4 8
9: 1 3 9
10: 1 2 5 10
