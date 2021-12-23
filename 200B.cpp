#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    int n;
    long double num,sum=0;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>num;
        sum+=num;
    }
    cout<<setprecision(12)<<sum/n<<endl;


    return 0;
}
