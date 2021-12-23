#include<iostream>
using namespace std;

int main(){
    int ar[4],ans=0;
    bool done[4]={false};
    cin>>ar[0]>>ar[1]>>ar[2]>>ar[3];
    for(int i = 0; i < 4; i++){
        for(int j = i+1; j < 4 ; j++){
            if(ar[i] == ar[j] && done[j] == false){
                ans++;
                done[j] = true;
            }
        }
    }

    cout<<ans<<endl;



    return 0;
}
