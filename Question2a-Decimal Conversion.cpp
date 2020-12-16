#include <iostream>
using namespace std;
void print_hex(int dnum)
{
    int temp,rem;
    string hnum="";
    char hex[]={'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F' };
    temp=dnum;
    if(temp==0)
    {
        hnum="0";
    }
    while(temp>0)
    {
        rem = temp%16;
        hnum=hex[rem]+hnum;
        temp=temp/16;
    }
    cout<<"\n The Hexadecimal equivalent of "<<dnum<<" is: "<<hnum;

}
int main()
{
    int a[10], n, i,temp;
    cout<<"Enter the number to convert: ";
    cin>>n;
    temp=n;
    for(i=0; n>0; i++)
    {
    a[i]=n%2;
    n= n/2;
    }
    cout<<"Binary of the given number= ";
    for(i=i-1 ;i>=0 ;i--)
    {
    cout<<a[i];
    }
    print_hex(temp);
}
