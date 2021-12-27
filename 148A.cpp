#include<iostream>
using namespace std;

int main()
{
    int j,k,l,m,n,safe = 0;
    cin>>j>>k>>l>>m>>n;
    for(int i=1;i<n+1;i++){
        if(i%j != 0 && i%k!=0 && i%l!=0 && i%m!=0){
            safe++;
        }
    }

    cout<<n-safe<<endl;



    return 0;
}
