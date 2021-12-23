#include<iostream>
using  namespace std;

char andCheck(char a, char b){
    if((a=='1' || b == '1') && a != b){
        return '1';
    }
    return '0';
}

int main(){
    string a,b;
    cin>>a>>b;

    for(int i = 0; i<a.length(); i++){
        cout<<andCheck(a[i],b[i]);
    }

    cout<<endl;


    return 0;
}
