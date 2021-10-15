// link: https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=868&page=show_problem&problem=4925
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast ios_base::sync_with_stdio(0);cin.tie(0);

// the minimum number of character(from a-z)
// in the given string is the solution
// ex: abcde , the string doesn't iclude the characters
// from f to z. so we can create string of lenght 5 
// using any 5 of f to z(we can use them more than once though)
// so answer is 0( LCS will be an empty string)
void solve(){
    string s;
    cin>>s;
    vector<int> mp(26,0);

    for(auto ch: s){
        mp[ch-'a']++;
    }
    
    int mn = mp[0];
    for(int i: mp){
        mn = min(mn,i);
    }
    cout<<mn<<endl;

}

int main(){
    fast;

    int t;
    cin>>t;
    for (int i = 1; i <= t; i++)
    {
        cout<<"Case "<<i<<": ";
        solve();
    }
    
}