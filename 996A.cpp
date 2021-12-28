#include<iostream>
using namespace std;

int main(){
    int bills[5] = {100,20,10,5,1},num,ans=0;
    cin>>num;
    for(int i = 0 ; i<5; i++){
        if(num >= bills[i]){
            ans += (num/bills[i]);
            num = num%bills[i];
        }
    }

    cout<<ans<<endl;


    return 0;
}
