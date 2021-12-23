#include<iostream>
using namespace std;

int main(){
    int n,ans[101]={0},t;
  string a[101];
  cin>>n;
  for(int i = 0; i<n; i++){
    cin>>t;
    cin>>a[i];
    int flag = -1;
    for(int j = 0; j<a[i].length(); j++){
        if(a[i][j]=='y'&& a[i][j+1] == 'b' && a[i][j+2] == 'b'){
            ans[i]++;
            flag = j+3;
        }
        if(i<flag){
            if(flag == j && a[i][j] == 'b'){
            flag = j+1;
            ans[i]++;
        }
        } else {
            flag = -1;
        }

    }

  }

  for(int i = 0; i< n; i++){
  cout<<ans[i]<<endl;

  }


  return 0;
}
