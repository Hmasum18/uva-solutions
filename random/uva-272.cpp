// link: https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=208
// uva-272-Text Quates
#include<bits/stdc++.h>
using namespace std;

int main(void)
{
    string s;
    getline(cin,s);
    char ch=34;
    int n=count(s.begin(),s.end(),'"');
    for(int i=1;i<=n;i++)
    {
        if(i%2!=0)
        {
            int temp=s.find(ch);
            s.erase(s.find(ch),1);
            s.insert(temp,"``");
        }

        else
        {
            int temp=s.find(ch);
            s.erase(s.find(ch),1);
            s.insert(temp,"''");
        }

    }

    cout<<s;
    return 0;
}
