/*
            Bismillahir Rahmanir Rahim
            Read in the name of Allah, who created you!
            Al Mashruf Tonoy
            Department of CSE, Daffodil Internatinal University.
*/

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long l;
typedef vector<int> vint;
typedef pair<int,int> pint;
typedef unsigned long long ull;

#define sc scanf
#define pf printf
#define nl pf("\n")

int main()
{
    int a,b;
    while(sc("%d %d",&a,&b))
    {
        if(a==-1 && b==-1)
        {
            break;
        }
        int x=0,y=0;
        if(a>b)
        {
            x=a-b;//0
            y=100-a +b;//1
        }
        else
        {
            x=b-a;
            y=100-b +a;
        }

        if(x<y)
        {

            pf("%d\n",x);
        }
        else
        {
            pf("%d\n",y);

        }
    }
}
