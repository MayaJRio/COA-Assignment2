#include <iostream>
#include <iomanip>
#include <time.h>
#include <math.h>
using namespace std;
int DecimalToBinary(int,int);
int binaryNum[30];
int main()
{
    //Generate random decimal float
    srand(time(NULL));
    const unsigned int sizeofArray = 30;
    float decValues [sizeofArray];
    cout<<"Decimal\t\tBinary\t\tRemarks";
    for (int i=0; i<sizeofArray; i++)
    {
        decValues[i] = ((float)rand()/(float)RAND_MAX) * 500;
        cout<<fixed;
        cout<<setprecision(3)<<decValues[i]<<endl;
        int intpart = decValues[i];
        double decpart = decValues[i] -intpart;
    }
    return 0;
    //calculate decimal to binary
     //int decValues;
    //float i = DecimalToBinary(decValues, 0);
    //for(i=(i-1); i>=0; i--){
       // cout<<binaryNum[i];
   // }

    //cout<<endl;
    return 0;
}
int DecimalToBinary(int decValues, int i)
{
    while(decValues!=0)
    {
        binaryNum[i] = decValues%2;
        i++;
        decValues = decValues/2;
    }
    return i;
}