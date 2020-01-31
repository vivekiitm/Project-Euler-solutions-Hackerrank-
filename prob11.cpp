#include<iostream>
using namespace std;
int main()
{
    int arr[20][20];
    for(int i=0;i<20;i++)
        for(int j=0;j<20;j++)
            cin>>arr[i][j];
    long long int ans=0;
    long long int temp;
    for(int i=0;i<20;i++)
    {
        for(int j=0;j<17;j++)
        {
            temp=arr[i][j]*arr[i][j+1]*arr[i][j+2]*arr[i][j+3];
            if(ans<temp)
                ans=temp;
        }
    }
    for(int i=0;i<17;i++)
    {
        for(int j=0;j<20;j++)
        {
            temp=arr[i][j]*arr[i+1][j]*arr[i+2][j]*arr[i+3][j];
            if(ans<temp)
                ans=temp;
        }
    }
    for(int i=0;i<20;i++)
    {
        for(int j=0;j<20;j++)
        {
            if((i+3)<20&&(j+3)<20)
            {
                temp=arr[i][j]*arr[i+1][j+1]*arr[i+2][j+2]*arr[i+3][j+3];
                if(ans<temp)
                    ans=temp;
            }
        }
    }
    for(int i=0;i<20;i++)
    {
        for(int j=0;j<20;j++)
        {
            if((i+3)<20&&(j-3)>=0)
            {
                temp=arr[i][j]*arr[i+1][j-1]*arr[i+2][j-2]*arr[i+3][j-3];
                if(ans<temp)
                    ans=temp;
            }
        }
    }
    cout<<ans<<endl;
}
