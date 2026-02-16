// factorail of a number

#include <iostream>
using namespace std;
int main()
{
int n;
cout<<"enter a number";
cin>>n;
long int fact=1;
for(int i=1;i<=n;i++)
{
    fact=fact*i;
}
cout<<"factorial of a number:"<<fact<<endl;
    return 0;
}
