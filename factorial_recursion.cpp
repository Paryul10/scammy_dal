#include<bits/stdc++.h>
using namespace std;

#define ll long long int
ll mod=1e9+7;

// vector<ll> g[200005];
// ll vis[200005];
// queue<ll> q;
// ll level[200005];

// void dfs(ll i)
// {
//     vis[i] = 1;
//     for(ll j=0;j<g[i].size();j++)
//     {
//         ll child = g[i][j];
//         if(vis[child] == 0)
//         {
//             dfs(child);
//         }
//     }
// }

// void bfs(ll i)
// {
//     vis[i] = 1;
//     while(!q.empty())
//     {
//         ll top = q.front();
//         ll len_adj = g[top].size();
//         ll j;
//         for(j=0;j<len_adj;j++)
//         {
//             ll v = g[top][j];
//             if(vis[v]==0)
//             {
//                 vis[v]=1;
//                 q.push(v);
//                 level[v] = level[top] + 1;
//             }
//         }   
//         q.pop();
//     }
// }

vector<ll> DecToBinary(ll num,ll trailing_zero, ll nbits)
{
    vector<ll> bits;
    while(num > 0)
    {
        bits.push_back(num%2);
        num /= 2;
    }

    if(trailing_zero == 1)
    {
        while(bits.size() < nbits)
        {
            bits.push_back(0);
        }
    }

    return bits;
}

long long int BinaryToDec(vector<ll> bits)
{
    ll number = 0;
    ll i;
    for(i=bits.size()-1;i>=0;i--)
    {
        number += (bits[i] * (long long)pow((ll)2 , i));
    }
    return number;
}



ll modular_exponentiation(ll base, ll power)
{
    ll ans = 1;
    base = base % mod;
    while (power > 0)
    {
        if (power & 1)
        {
            ans = (ans * base) % mod;
        }

        power /= 2;
        base = (base * base) % mod;
    }
    return ans;
}

ll factorial_recursion(ll num)
{
    if(num == 0)
    {
        return 1;
    }

    return num*factorial_recursion(num-1);
}


int main()
{
    /* Faster input ouput */
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
    // cout.tie(NULL);

    /* To read input from a file and output to a file */
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    
    ll t = 1;
    // cin >> t;
    while(t--)
    {        
        ll n,i,j;
        cin >> n;
        // ll arr[n];

        // for(i=0;i<n;i++)
        // {
        //     cin >> arr[i];
        // }

        cout << "Factorial of " << n << " is " << factorial_recursion(n) << '\n';
    }

    
    
}