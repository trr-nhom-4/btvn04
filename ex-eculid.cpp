#include <iostream>

using namespace std;


int main()
{
    //tim nghich dao cua a theo module m:
    int a,m;
    cin>>a>>m;
    //TH1: a>m
    if(a>m)
    {
    int x[20],y[20];
    x[0] = 1;
    x[1] = 0;
    y[0] = a;
    y[1] = m;
        int i=1;
    while(y[i]!=0)
    {
        i++;
        int q=y[i-2] / y[i-1];
        x[i] = x[i-2] - q*x[i-1];
        y[i] = y[i-2] % y[i-1];
    }
        while(x[i-1] < 0) x[i-1] += m;
        cout<<x[i-1];
    }


    //TH2: a<m
    else
    {
        int x[20],y[20];
         x[0] = 0;
         x[1] = 1;
         y[0] = m;
         y[1] = a;
        int i=1;
        while (y[i]!=1)
        {
            i++;
            int q = y[i-2] / y[i-1];
            y[i] = y[i-2] - y[i-1]*q;
            x[i] = x[i-2] - x[i-1]*q;
        }
        while(x[i]<0) x[i]+=m;
        cout<<x[i];
    }
    return 0;
}
