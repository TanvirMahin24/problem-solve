#include<iostream>
using namespace std;

int main(){
    long int n,ar[7],ans[1000000],tmp;
    cin>>n;
    for(int i =0; i<n;i++){
        bool check = true;
        for(int j=0;j<7;j++){
            cin>>ar[j];

        }
        for(int k=0; k<7;k++){
            for(int p = 1; p<7; p++){
                if(ar[k]<ar[p]){
                    tmp = ar[k];
                    ar[k] = ar[p];
                    ar[p] = tmp;
                }
            }

        }


        ans[i]=ar[0]-1;
        if(ans[i]>=999999999){
            ans[i] = -1;
        }

    }

    for(int i=0;i<n;i++){
        cout<<ans[i]<<endl;
    }

    return 0;
}
