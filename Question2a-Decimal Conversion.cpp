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
    cout<<"          \t";
    cout<<hnum<<endl;

}
void print_bin(int num)
{
    int a[10],i,temp=num;
    cout<<"\t\t";
    for(i=0; num>0; i++)
    {
        a[i]=num%2;
        num= num/2;
    }
    if(temp==0)
    {
        cout<<"0";
    }
    for(i=i-1 ;i>=0 ;i--)
    {
        cout<<a[i];
    }
}
int main()
{
    cout<<"Decimal values\tBinary values\tHexadecimal values:"<<endl;
    for (int i=0; i<=256; i++)
    {
        cout<<"\t";
        cout<<i;
        print_bin(i);
        print_hex(i);
    }
}