#include<iostream>
using namespace std;

int main(){
    int n,h,ar[1000],ans=0;
    cin>>n>>h;
    for(int i = 0; i<n; i++){
        cin>>ar[i];
        if(ar[i]>h){
            ans+=2;
        } else {
            ans+=1;
        }
    }

    cout<<ans<<endl;

    return 0;
}
