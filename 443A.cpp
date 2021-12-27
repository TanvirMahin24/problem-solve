#include<bits/stdc++.h>
using namespace std;

int main()
{
    char str[1001]={0};
    bool ar[26] = {false};
    int ans = 0;
    cin.getline(str,1001);
    for(int i=1; i<1001; i++)
    {
        if(str[i]>= 'a' && str[i]<='z')
            ar[(int)str[i] - 97] = true;
    }

    for(int i= 0; i<26; i++)
    {
        if(ar[i] == true)
        {
            ans++;
        }
    }

    cout<<ans<<endl;



    return 0;
}
