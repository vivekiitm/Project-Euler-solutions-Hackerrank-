#include<iostream>
#include <cstdlib>
using namespace std;
int main()
{
    long int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        long int n;
        cin>>n;
        cout<<abs((n*(n+1)*(n+2-3*n*n))/12)<<endl;
    }
}
