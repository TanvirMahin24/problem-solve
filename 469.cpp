#include<iostream>
using namespace std;

int main(){
    int n,a,b,data[101];
    bool ar[101] = {false},flag=true;
    cin>>n>>a;
    for(int i = 0; i<a; i++){
        cin>>data[i];
        ar[data[i]] = true;
    }
    cin>>b;
    for(int i = 0; i<b; i++){
        cin>>data[i];
        ar[data[i]] = true;
    }
    for(int i = 1; i<n+1; i++){
        if(ar[i]==false){
            cout<<"Oh, my keyboard!"<<endl;
            flag=false;
            break;
        }
    }
    if(flag == true){
        cout<<"I become the guy."<<endl;
    }



    return 0;
}
