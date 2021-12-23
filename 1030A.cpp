#include<iostream>
using namespace std;

int main()
{
    int n,num;
    bool flag = false;
    cin>>n;
    for(int i = 0; i<n; i++)
    {
        cin>>num;

            if(num == 1){
                flag = true;
            }

    }
    if(flag == true) {
        cout<<"HARD"<<endl;
    } else {

    cout<<"EASY"<<endl;
    }


    return 0;
}

