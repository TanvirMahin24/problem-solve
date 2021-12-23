#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    int j=0;
    string a,b,c;
    cin>>a;
    cin>>c;
    b=a;

    for(int i = a.length()-1;i>=0;i--){
        b[j]=a[i];
        j++;
    }

    //cout<<"STR:"<<a<<endl<<"REV:"<<b<<endl<<"GIVEN:"<<c<<endl;

    if(c==b){
        cout<<"YES"<<endl;
    } else {
        cout<<"NO"<<endl;
    }

    return 0;
}
