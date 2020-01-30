#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        long long int n;
        cin>>n;
        n--;
        cout<<3*(((n/3)*((n/3)+1))/2)+5*(((n/5)*((n/5)+1))/2)-15*(((n/15)*((n/15)+1))/2)<<endl;
    }

}
