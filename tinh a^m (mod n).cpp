#include <iostream>

using namespace std;

int main()
{
    //tinh a^m (mod n)
    long a,m,n;
    cin>>a>>m>>n;

    //chuyen m ve nhi phan
    string t="";
    while(m!=0)
    {
        int tmp = m%2;
        m=m/2;
        char c = tmp + '0';
        t+=c;
    }
    string m1="";
    for(int i=t.size()-1;i>=0;i--) m1+=t[i];

    //m1 la nhi phan cua m

    int s = m1.size();
    long b[s+1];
    b[0] = a%n;
    for(int i=1;i<s;i++)
    {
        b[i] = b[i-1]*b[i-1];
        b[i] %= n;
    }
    int ans=1;
    for(int i=0;i<s;i++)
    {
        if(m1[i]=='1')
        {
            ans*=b[i];
            ans%=n;
        }
    }
    cout<<ans;
    return 0;
}
