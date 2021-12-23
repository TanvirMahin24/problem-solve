#include<iostream>
using namespace std;

int main()
{
    string ar;
    int num,n,flag=-1;
    char temp;
    cin>>num>>n;
    cin>>ar;
    for(int j=0; j<n; j++)
    {
        for(int i=0; i<ar.length(); i++)
        {


            if(flag == i)
            {
                flag=-1;
            }
            else
            {
                if(ar[i]=='B' && ar[i+1]=='G')
                {
                    temp = ar[i];
                    ar[i] = ar[i+1];
                    ar[i+1] = temp;
                    flag = i+1;
                }
            }
        }

    }

    cout<<ar<<endl;

    return 0;
}
