#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int a,b,c=1;
    cin>>a>>b;
    for(int i = 1;;i++){
        if((pow(3,i)*a - pow(2,i)*b ) > 0){
            break;

        }
        c++;
    }

    cout<<c<<endl;

    return 0;
}
