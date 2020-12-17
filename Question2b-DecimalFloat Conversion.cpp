#include <iostream>
#include <iomanip>
#include <time.h>
#include <math.h>
#include <bitset>
using namespace std;

void decttobin(int number)
{
    int a[32],i;
    for(i=0; number>0; i++)
    {
        a[i]=number%2;
        number = number/2;
    }
    cout<<"\t\t";
    for(i=i-1 ;i>=0 ;i--)
    {
        cout<<a[i];
    }
    cout<<".";
}
void floattobin(double decimal)
{
    string binary = "";
    string remark = "";
    int counter = 0;
    while(counter < 6)
    {
        if(decimal == 0.0)
        {
           remark = "Exactly";
           break;
        }
        else
        {
            decimal = decimal * 2;
            int fract_bit = decimal;
            if(fract_bit == 1)
            {
                decimal = decimal - fract_bit;
                binary.push_back(1 + '0');
            }
            else
            {
                binary.push_back(0 + '0');
            }
            remark = "Approximately";
        }
        counter ++;
    }
    cout<<binary<<"       \t";
    cout<<remark;
    cout<<endl;
}
int main()
{
    //Generate random decimal float
    srand(time(NULL));
    const unsigned int sizeofArray = 30;
    float decValues [sizeofArray];
    cout<<"Decimal values\t\tBinary values\t\tRemarks:"<<endl;
    for (int i=0; i<sizeofArray; i++)
    {
        cout<<i+1<<". ";
        decValues[i] = ((float)rand()/(float)RAND_MAX) * 500;
        cout<<fixed;
        cout<<setprecision(3)<<decValues[i];
        int intpart = decValues[i];
        double decpart = decValues[i] -intpart;
        //Convert integer part of the decimal float to binary
        decttobin(intpart);
        //Convert float part of the decimal float to binary
        floattobin(decpart);
    }
    return 0;
}