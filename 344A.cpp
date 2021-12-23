#include<iostream>
using namespace std;

int main()
{
    int n,num, last, ans = 1;
    cin>>n;
    for(int i = 0; i<n; i++)
    {
        cin>>num;
        if(i!= 0){
            if(last != num){
                ans++;
            }
        }
        last = num;

    }

    cout<<ans<<endl;


    return 0;
}
