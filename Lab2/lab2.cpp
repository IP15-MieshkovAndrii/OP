#include<iostream>
#include<cmath>
using namespace std;
int main ()
{
    //setlocale(LC_ALL, ".Ukrainian");
    float x, a; //вхідні дані
    float y; //результат
    cout << "Введіть x:";
    cin >> x;
    cout << "Введіть в:";
    cin >> a;
    
    if(x<0) y=x;
    else y=a;
    cout << "y= " << y << endl;
    
}

