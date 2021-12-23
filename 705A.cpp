#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i = 0; i<n; i++){
        cout<<"I ";
        if(i%2!=0){
            cout<<"love";
        } else {
            cout<<"hate";
        }
        if(i<n-1 ){
            cout<<" that ";
        }

    }
    cout<<" it"<<endl;

    return 0;
}
