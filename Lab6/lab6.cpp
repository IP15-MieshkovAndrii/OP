#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
float eps;
const float PI=3.141592653589793;


int fact(int f)
{
    float FACT=1;
    int m;
    for(m=1; m <= f; m++){
        FACT*=m;
    }
    return FACT;
}

float Cos(float x)
{
    int i;
    float sum;
    float prevsum;
    float rad;

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
        sum = sum + pow(-1,i) * pow(rad, i*2)/fact(i*2);
        i++;
    }
    return sum;
}


int main ()
{
    //setlocale(LC_ALL, ".Ukrainian");

    float a, b;
    float y;
    cout << "a:";
    cin >> a;

    cout << "b:";
    cin >> b;

    cout << "The result will be calculated with accuracy: ";
    cin >> eps;

    y=Cos(a) + Cos(b) * Cos(b) + Cos(a+b);
    
    int countAfterPoint = log10(1/eps) + 2;

    cout << setprecision(countAfterPoint)<< "y = " << y << endl;
}
