#include<iostream>
using namespace std;

int main()
{
    int n, a[30]={-1},b[30] ={-1}, ans=0;
    cin>>n;
    for(int i = 0; i<n; i++){
        cin>>a[i]>>b[i];
    }
    for(int i = 0; i<n; i++){
        for(int j = i; j < n; j++ ){
            if(a[i] == b[j] ){
                ans++;
                //cout<<"\n A = "<<a[i];
            }
            if(b[i] == a[j]){
                ans++;
                //cout<<"\n A = "<<a[i];
            }
        }
    }

    cout<<ans<<endl;




    return 0;
}
