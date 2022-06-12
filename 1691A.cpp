#include<iostream>

using namespace std;

int main(){
    long long int loopCount=0, size,arr[999999],ans1=0,ans2=0;

    cin>>loopCount;

    for(int i = 0; i< loopCount; i++){
        cin>>size;
        for(int j = 0; j< size; j++){
            cin>>arr[j];
            if(arr[j] % 2 == 0){
                ans2++;
            } else {
                ans1++;
            }
        }
        if(ans1<ans2){
        cout<<ans1<<endl;
    } else {
        cout<<ans2<<endl;
    }
    ans1= 0;
    ans2 =0;
    }



}
