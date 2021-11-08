#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
long double eps;
const long double PI=3.141592653589793;


unsigned long long int fact(unsigned long long int f)
{
    unsigned long long int FACT=1;
    int m;
    for(m=1; m <= f; m++){
        FACT*=m;
    }
    return FACT;
}

long double Cos(long double x)
{
    unsigned long long int i;
    long double sum;
    long double prevsum;
    long double rad;

    if (x>360){
        while (x>360){
            x-=360;
        }
    }
    else
    {
        if (x<-360)
    {
        while (x<-360){
            x+=360;
        }
    }
    }
    rad=PI/180*x;
    sum=1;
    prevsum=0;
    i=1;
    while (fabs(sum-prevsum) > eps){
        prevsum=sum;
        sum = sum + pow(-1,i) * pow(rad, i*2)/float(fact(i*2));
        i++;
    }
    return sum;
}


int main ()
{
    //setlocale(LC_ALL, ".Ukrainian");

    long double a, b;
    long double y;
    cout << "a:";
    cin >> a;

    cout << "b:";
    cin >> b;

    cout << "The result will be calculated with accuracy: ";
    cin >> eps;

    y=Cos(a) + Cos(b) * Cos(b) + Cos(a+b);
    
    int countAfterPoint = log10(1/eps) + 1;

    cout << setprecision(countAfterPoint)<< "y = " << y << endl;
}
