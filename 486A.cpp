#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    long long int n;

    cin>>n;
    if(n%2==0){
        cout<<setprecision(17.0)<<n/2;
    } else {
        cout<<setprecision(17.0)<<-n+n/2;
    }



return 0;
}
