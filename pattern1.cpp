#include<iostream>
using namespace std;

int main()
{
    int n,a;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            a=n-j+1;
            cout<<a;
        }
         cout<<endl;
    }
}