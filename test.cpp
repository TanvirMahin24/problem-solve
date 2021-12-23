#include<iostream>
using namespace std;

double sum(double a = 1){
    return a*a;
}

int main()
{
    double a = 3.14159;
    printf("%f",sum());
    printf("%f",sum(a));

    return 0;
}
