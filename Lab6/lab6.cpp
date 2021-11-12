#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

long long int fact(long long int f)
{
    long long int FACT=1;
    int m;
    for(m=1; m <= f; m++){
        FACT*=m;
    }
    return FACT;
}

long double Cos(long double x, long double eps1)
{
    long long int i;
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
    rad=M_PI/180*x;
    sum=1;
    prevsum=0;
    i=1;
    while (fabs(sum-prevsum) > eps1){
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
    long double eps;
    
    
    cout << "a:";
    cin >> a;

    cout << "b:";
    cin >> b;

    cout << "The result will be calculated with accuracy: ";
    cin >> eps;
    

    y=Cos(a,eps) + Cos(b,eps) * Cos(b,eps) + Cos(a+b,eps);
    
    int countAfterPoint = log10(1/eps) + 2;

    cout << setprecision(countAfterPoint)<< "y = " << y << endl;
    
}
