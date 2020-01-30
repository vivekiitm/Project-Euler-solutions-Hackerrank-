#include<iostream>
using namespace std;
long long int esum(long long int n)
{
    if(n<2)
        return 0;
    long long int temp,temp1,temp2,sum;
    temp1=0;
    temp2=2;
    sum=temp1+temp2;
    while(temp2<n)
    {
        temp=4*temp2+temp1;
        if(temp>n)
            break;
        temp1=temp2;
        temp2=temp;
        sum=sum+temp2;
    }
    return sum;
}
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        long long int n;
        cin>>n;
        cout<<esum(n)<<endl;
    }
}
