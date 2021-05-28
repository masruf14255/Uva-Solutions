/*
            Bismillahir Rahmanir Rahim
            Read in the name of Allah, who created you!
            Al Mashruf Tonoy
            Department of CSE, Daffodil Internatinal University.
*/
#include <bits/stdc++.h>
using namespace std;
 typedef long long ll;

ll cut(ll a)
{
    while(a!=0)
    {
        if(a<11)
        {
            return -1;
        }
        else if(a>=11 && a<111)
        {
            cut(a-=11);//22
        }
        else if(a>=111 && a<1111)
        {
            cut(a-=111);
        }
        else if(a>=1111 && a<11111)
        {
           cut(a-=1111);
        }
        else if(a>=11111 && a<1000000000)
        {
            cut(a-=11111);
        }
        else{
            return a;
        }

    }

}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll a,ans;
        cin>>a;
        ans=cut(a);
        if(ans==-1)
        {
            cout<<"NO\n";
        }
        else if(ans!=0)
        {
            cout<<"NO\n";
        }
        else{
            cout<<"YES\n";
        }

    }
}
