#include<iostream>
using namespace std;
int add(int a, int b);

int main()
{
    cout<<"5 + 6 = "<<add(5,6)<<endl;
    return 0;
}
int add(int a, int b)
{
    return a+b;
}