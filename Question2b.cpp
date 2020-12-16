#include <iostream>
#include <iomanip>
#include <time.h>
#include <math.h>
using namespace std;

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
}


