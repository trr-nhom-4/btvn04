#include <iostream>

using namespace std;
int nto (long long n)
{
    if(n<=1) return 0;
    for(int i=2;i*i<n;i++)
    {
        if(n%i==0) return 0;
    }
    return 1;
}
int main()
{
    long long n;
    cin>>n;
    if (nto(n)==0) cout<<n<<" khong phai nto";
    else cout<<n<<" la nto";
    return 0;
}
