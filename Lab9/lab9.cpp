//22 варіант
#include <cstring>
#include <iostream>
#include <cstdio>
#include <iomanip>
//#include <Windows.h>

using namespace std;
int palindrome(char*);

int main() {
    setlocale(LC_ALL,"ua");
//    SetConsoleCP(1251);
//    SetConsoleOutputCP(1251);
    int j=0;
    char s[100];
    cout<<"Enter row: ";
    cin.getline(s,100);
    char delims[] = " ";
    char *tok;
    tok = strtok(s, delims);
    while(tok) {
        j=j+palindrome(tok);
        tok  = strtok(NULL, delims);
    }
    cout << "Кількість паліндромів: "<<j<<endl;
    return 0;
}

int palindrome(char* t){
    char* j=t;
    int k=0;
    bool f=true;
    int n=strlen(j);
    for(int i=0; i<n/2; i++){
        if((j[i] != j[n-i-1])&&(abs(j[i]-j[n-i-1]))!=32){
            f=false;
        }
    }
    if(f==false){
        return k;
    }
    else {
        cout<<t<<endl;
        k=1;
        return k;
}
}
