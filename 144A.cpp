#include<iostream>
using namespace std;

int main(){
    int n,ar[101],min=0,m=0,k=0,max=0,ans=0;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>ar[i];
        if(i == 0){
            max = ar[i];
            min = ar[i];
            m = 0;
            k = 0;
        }
        if(ar[i]<=min){
            min = ar[i];
            k = i;
        } else if(ar[i]>max){
            max = ar[i];
            m = i;
        }
    }

    if(m<k){
        cout<< m + n-k-1<<endl;
    } else {
        cout<< m + n-k-2<<endl;
    }


    return 0;
}
