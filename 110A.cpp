#include<iostream>
using namespace std;

int main()
{
    long long int n,ans=0;
    cin>>n;
    while(n != 0){
        if(n%10 ==7 || n%10 == 4){
            ans++;
        }
        n=n/10;
    }

    if(ans ==4 || ans == 7){
        cout<<"YES"<<endl;
    } else {
        cout<<"NO"<<endl;
    }

    return 0;
}
