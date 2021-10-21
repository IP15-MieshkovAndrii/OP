#include <cmath>
#include <iostream>

using namespace std;
int main() {
    int n; //натуральне число
    int i; //лічильник
    float a, b; //дійсні числа
    float h; //проміжний коефіцієнт
    float r; //результат - член послідовності
    cout << "Введіть натуральне число n:";
    cin >> n;
    cout << "Введіть два дійсних числа a та b:";
    cin >> a >> b;
    if(a!=b){
        h=(b-a)/float(n);
        for(i=1; i<=n; i++){
            r=a+i*h;
            cout << r << endl;
        }
    }

    else cout << "Введіть інші числа a та b" << endl;
        
    
}
