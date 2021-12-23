
#include<iostream>
using namespace std;

int main()
{
    int k,w,n,ans,sum;

    cin>>k>>n>>w;

    sum = (k*(w*(w+1)))/2;

    ans = sum - n;
    if(ans < 0){
        ans = 0;
    }

    cout<<ans<<endl;

    return 0;
}
