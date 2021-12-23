#include<iostream>
#include<string>
using namespace std;
int a,b,c,d,num;

bool check(int n){
    string temp = to_string(n);
    a = (int)temp[0];
    b = (int)temp[1];
    c = (int)temp[2];
    d = (int)temp[3];

    if(a != b && a != c && a != d){
        if(b!= c && b != d ){
            if(c != d){
                return true;
            }
        }
    }

    return false;
}

int main(){
    cin>>num;
    int ans;
    for(int i = num + 1; ;i++){
        if(check(i) == true){
            cout<<i<<endl;
            break;
        }
    }

    return 0;
}
