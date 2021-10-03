
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main ()
{
    //setlocale(LC_ALL, ".Ukrainian");
    int i;
    int fact;
    float n;
    float res, prevRes;
    res = 1;
    fact = 1;
    prevRes = 0;
    i = 1;
    cout << "Результат буде обчислено з точністю: ";
    cin >> n;
    while ((res - prevRes) >= n){
        prevRes = res;
        fact = fact * i;
        res += 1/double(fact);
        i++;
    }
    
    int countAfterPoint = log10(1/n) + 2;
    cout << "e = " << setprecision(countAfterPoint) << res << endl;
    
}


