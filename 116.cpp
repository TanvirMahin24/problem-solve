#include<iostream>
using namespace std;

int main()
{
    int enter[1000]= {0};
    int exit[1000]= {0};
    int n,tmp=0,max=0,i=0;
    while(cin>>n)
    {
        for(int i =0; i< n; i++)
        {
            cin>>exit[i]>>enter[i];
            tmp=tmp+enter[i]-exit[i];
            if(tmp>max)
            {

                max=tmp;
            }
        }
    cout<<max<<endl;

    }


    return 0;
}
