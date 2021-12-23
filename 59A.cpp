#include<iostream>
#include<string>
using namespace std;

int main(){
    int res = 0;
    string str;
    cin>>str;
    for(int i = 0; i<str.length(); i++){
        if((int)str[i] >64 && (int)str[i]<91){
            res--;
        } else {
            res++;
        }
    }

    if(res<0){
       for(int i =0; i< str.length(); i++){
            str[i] = toupper(str[i]);
       }
    } else {
       for(int i =0; i< str.length(); i++){
            str[i] = tolower(str[i]);
       }
    }

    cout<<str<<endl;

    return 0;
}
