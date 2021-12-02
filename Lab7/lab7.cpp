#include <iomanip>
#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <cmath>
#include <ctime>
using namespace std;
void input_b(double arr[], int m);
void output_b(double arr[], int m);
int less_z(double arr[], int m, int x);
int less_index(double arr[]);
int max(double arr[], int m, int x);
void new_arr(double arr[], int n, int j);

int main(){
    int n;
    int z, l;
    int j;
    cout << "Size of array B, n = " ;
    cin >> n;
    cout << "z = ";
    cin >> z;
    cout << endl;
    double *b = new double[n];
    input_b(b, n);
    cout<< "B: ";output_b(b, n);
    if(z>0){
        cout << "Number of elements in array B less than z = " << less_z(b, n, z) << endl<<endl;
    }
    else{
        cout << "z must be natural"<<endl<< endl;
    };
    
    j = max(b, n, z);
    new_arr(b, n, j);
    delete [] b;
}

void input_b(double arr[], int m){
    int range_min=-50, range_max=50, rang_double=3;
    srand(time(NULL));
    for (int i=0; i<m; i++){
        arr[i] = range_min + 1 + rand()%(range_max-range_min + 1) - (rand()%((int)pow(10,rang_double)) / pow(10,rang_double));
    }
}

void output_b(double arr[], int m){
    for (int i=0; i<m; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl<<endl;
}

int less_z(double arr[], int m, int x){
    int l=0;
    for (int i=0; i<m; i++){
        if(arr[i]<x) l+=1;
    }
    return l;
}

int max(double arr[], int m, int x)
{
    double max=-100;
    int j;
    
    for (int i=0; i<m; i++){
        if(arr[i]>max && arr[i]<x){
            max=arr[i];
            j=i;
        }
    }
    cout << "Maximum array value = " << max << endl;
    cout << "Maximum element index = "<< j <<endl<<endl;
    return j;
}
void new_arr(double arr[], int n, int j){
    double e;
    e=arr[0];
    arr[0]=arr[j];
    arr[j]=e;
    cout<<"B: ";
    for (int i=0; i<n; i++){
        cout<<arr[i] << " ";
    }
    cout<<endl<<endl;
}
