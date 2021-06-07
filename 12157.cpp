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
    int T, N, num, mileCost, juiceCost;
    scanf("%d", &T);

    for (int t = 1; t <= T; ++t)
    {
        scanf("%d", &N);
        mileCost = juiceCost = 0;
        while (N--)
        {
            scanf("%d", &num);
            mileCost += (num / 30) * 10 + 10;
            juiceCost += (num / 60) * 15 + 15;
        }
        printf("Case %d: ", t);

        if (mileCost < juiceCost)
            printf("Mile %d\n", mileCost);
        else if (mileCost == juiceCost)
            printf("Mile ");

        if (juiceCost <= mileCost)
            printf("Juice %d\n", juiceCost);
    }
}
