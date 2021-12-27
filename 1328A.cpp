#include<iostream>
using namespace std;

int main()
{
    int n,a,b,mod,div;
    cin>>n;
    for(int i = 0; i<n; i++)
    {
        cin>>a>>b;
        div = a/b;
        mod = a%b;
        if(mod == 0)
            cout<<mod<<endl;
        else
            cout<<b-mod<<endl;


    }

    return 0;
}
