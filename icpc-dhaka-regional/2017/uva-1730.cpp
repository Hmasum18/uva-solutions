#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast ios_base::sync_with_stdio(0);cin.tie(0);

#define m 20000005

ll sum[m] = {0}, dp[m] = {0};


int main(){
    fast;
    ll n;

    // Maximum sum LCM set is the set of 
    // all divisors of n
    // So, so we calculate and add all divisors of n
    // and we store all the sums upto m in an array
    for (ll i = 1; i <= m; i++)
    {
        for (ll j = i; j<=m; j+=i)
        {
            sum[j] += i; // i is a divisor of j
        }  
    }

    dp[2]= sum[2];

    // find the cumulated sum of all divisors of n
    for(ll i = 3; i<=m; i++){
        dp[i] = dp[i-1] + sum[i];
    }

    while(true){
        cin>>n;
        if(n==0)
            break;
        cout<<dp[n]<<endl;
    }
    return 0;
}

