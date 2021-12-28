#include<iostream>
#include <cctype>
using namespace std;

int main(){
    int n;
    bool check[26] = {false},ans=true;
    string str;
    cin>>n>>str;
    for(int i = 0; i<n; i++){
        if((int)str[i]<95){
            str[i] = tolower(str[i]);
        }
        check[(int)str[i] - 97] = true;

    }

    for(int i = 0; i<26; i++){
        if(check[i] == false)
        {
            ans = false;
            break;
        }
    }

    if(ans == true){
        cout<<"YES"<<endl;
    } else {
        cout<<"NO"<<endl;

    }




    return 0;
}
