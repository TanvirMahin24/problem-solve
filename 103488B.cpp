#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    int n;
    long double height[101],  total_floor[101], current_floor[101];
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>current_floor[i]>>total_floor[i]>>height[i];
    }

    for(int i=0;i<n;i++){
        if(current_floor[i]==1){
            cout<<"0"<<endl;
        }else{
            long double ans = (current_floor[i] - 1)*(height[i]/total_floor[i]);
            cout<<setprecision(9)<<ans<<endl;
        }

    }

    return 0;
}
