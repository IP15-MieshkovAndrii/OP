#include <cmath>
#include <iostream>
#include <cstdio>


using namespace std;
int main() {
    unsigned long long int a, b, z;

    for(a=1000000; a<=1000000000; a++){
        b=a;
        z=0;
        while(b>0){
            z = z * 10;
            z = z + b % 10;
            b=b/10;
            
        }
        if(a==z) cout << a << endl;
    }
        
}
