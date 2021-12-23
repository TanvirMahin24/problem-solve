#include<iostream>
using namespace std;

int main()
{
    int n = 0, room[2],ans=0;
    cin>>n;
    for(int i = 0; i< n ;i ++)
    {
        cin>>room[0]>>room[1];
        if(room[1] - room[0] > 1){
            ans++;
        }

    }
    cout<<ans<<endl;

    return 0;
}
