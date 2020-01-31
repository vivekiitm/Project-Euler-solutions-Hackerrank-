#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n;
        cin>>n;
        int ans=-1;
        for(int a=3;a<n/3;a++)
        {
            int b=(n*n-2*a*n)/(2*n-2*a);
            int c=n-b-a;
            if(c*c==a*a+b*b)
                if(ans<a*b*c)
                    ans=a*b*c;
        }
        cout<<ans<<endl;
    }
	return 0;
}
