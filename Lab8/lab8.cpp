//Варіант 22
#include <iomanip>
#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <cmath>
#include <ctime>
using namespace std;
/*Максимальне першої матриці на мінімальне першої
 та максимальне другої на мінімальне другої*/
//typedef double Matrix[10][10];
//Matrix C, B;
//void input_before(Matrix, int, int);
//void output_before(Matrix, int, int);
//int max_in(Matrix, int, int);
//int min_in(Matrix, int, int);
//void new_matr(Matrix, int, int, int, int);
//
//int main() {
//    int n, m;
//    int max_l, min_l;
//    cout<<"Enter n, m: ";
//    cin >> n >> m;
//    cout << endl << "C(n x m):" << endl;
//    srand(time(NULL));
//    input_before(C, n, m);
//    output_before(C, n, m);
//    cout << "B(n x m):" << endl;
//    input_before(B, n, m);
//    output_before(B, n, m);
//    cout << "Y(n x m):" << endl;
//    max_l=max_in(C, n, m);
//    min_l=min_in(C, n, m);
//    new_matr(C, n, m, max_l, min_l);
//    output_before(C, n, m);
//    cout << "Z(n x m):" << endl;
//    max_l=max_in(B, n, m);
//    min_l=min_in(B, n, m);
//    new_matr(B, n, m, max_l, min_l);
//    output_before(B, n, m);
//
//}
//
//void input_before(Matrix matr, int l, int k){
//    int range_min=-100, range_max=200, rang_double=3;
//
//    for (int i=0; i<l; i++){
//        for (int j=0; j<k; j++){
//        matr[i][j] = range_min + 1 + rand()%(range_max-range_min + 1) - (rand()%((int)pow(10,rang_double)) / pow(10,rang_double));
//        }
//    }
//}
//void output_before(Matrix matr, int l, int k){
//    for (int i=0; i<l; i++){
//        for (int j=0; j<k; j++){
//            cout<<setw(9)<<matr[i][j];
//        }
//        cout<<endl;
//    }
//    cout<<endl;
//}
//
//int max_in(Matrix matr, int n, int m){
//    double max=-100;
//    int line=0;
//    for (int i=0; i<n; i++){
//        for (int j=0; j<m; j++){
//            if(matr[i][j]>max){
//                max=matr[i][j];
//                line=i;
//            }
//        }
//    }
//    return line;
//}
//int min_in(Matrix matr, int n, int m){
//    double min=200;
//    int line=0;
//    for (int i=0; i<n; i++){
//        for (int j=0; j<m; j++){
//            if(matr[i][j]<min){
//                min=matr[i][j];
//                line=i;
//
//            }
//        }
//    }
//    return line;
//}
//
//void new_matr(Matrix matr, int n, int m, int max, int min){
//    double e;
//    for (int j=0; j<m; j++){
//        e=matr[max][j];
//        matr[max][j]=matr[min][j];
//        matr[min][j]=e;
//        }
//}



/*Максимальне першої матриці на максимальне другої
 та мінімальне першої матриці на мінімальне другої*/
typedef double Matrix[10][10];
Matrix C, B;
void input_before(Matrix, int, int);
void output_before(Matrix, int, int);
int max_in(Matrix, int, int);
int min_in(Matrix, int, int);
void new_matr(Matrix, Matrix, int, int, int, int, int, int);

int main() {
    int n, m;
    int max_c, min_c, max_b, min_b;
    cout<<"Enter n, m: ";
    cin >> n >> m;
    cout << endl << "C(n x m):" << endl;
    srand(time(NULL));
    input_before(C, n, m);
    output_before(C, n, m);
    cout << "B(n x m):" << endl;
    input_before(B, n, m);
    output_before(B, n, m);
    cout << "Y(n x m):" << endl;
    max_c=max_in(C, n, m);
    min_c=min_in(C, n, m);
    max_b=max_in(B, n, m);
    min_b=min_in(B, n, m);
    new_matr(C, B, n, m, max_c, min_c, max_b, min_b);
    output_before(C, n, m);
    cout << "Z(n x m):" << endl;
    output_before(B, n, m);

}

void input_before(Matrix matr, int l, int k){
    int range_min=-100, range_max=200, rang_double=3;

    for (int i=0; i<l; i++){
        for (int j=0; j<k; j++){
        matr[i][j] = range_min + 1 + rand()%(range_max-range_min + 1) - (rand()%((int)pow(10,rang_double)) / pow(10,rang_double));
        }
    }
}
void output_before(Matrix matr, int l, int k){
    for (int i=0; i<l; i++){
        for (int j=0; j<k; j++){
            cout<<setw(9)<<matr[i][j];
        }
        cout<<endl;
    }
    cout<<endl;
}

int max_in(Matrix matr, int n, int m){
    double max=-100;
    int line=0;
    for (int i=0; i<n; i++){
        for (int j=0; j<m; j++){
            if(matr[i][j]>max){
                max=matr[i][j];
                line=i;
            }
        }
    }
    return line;
}
int min_in(Matrix matr, int n, int m){
    double min=200;
    int line=0;
    for (int i=0; i<n; i++){
        for (int j=0; j<m; j++){
            if(matr[i][j]<min){
                min=matr[i][j];
                line=i;

            }
        }
    }
    return line;
}

void new_matr(Matrix matr1, Matrix matr2, int n, int m, int max_c, int min_c, int max_b, int min_b){
    double a, z;
    for (int j=0; j<m; j++){
        a=matr2[max_b][j];
        matr2[max_b][j]=matr1[max_c][j];
        matr1[max_c][j]=a;
        z=matr2[min_b][j];
        matr2[min_b][j]=matr1[min_c][j];
        matr1[min_c][j]=z;
        }
}

/*Максимальне першої матриці на мінімальне другої
 та мінімальне першої матриці на максимальне другої*/
//typedef double Matrix[10][10];
//Matrix C, B;
//void input_before(Matrix, int, int);
//void output_before(Matrix, int, int);
//int max_in(Matrix, int, int);
//int min_in(Matrix, int, int);
//void new_matr(Matrix, Matrix, int, int, int, int, int, int);
//
//int main() {
//    int n, m;
//    int max_c, min_c, max_b, min_b;
//    cout<<"Enter n, m: ";
//    cin >> n >> m;
//    cout << endl << "C(n x m):" << endl;
//    srand(time(NULL));
//    input_before(C, n, m);
//    output_before(C, n, m);
//    cout << "B(n x m):" << endl;
//    input_before(B, n, m);
//    output_before(B, n, m);
//    cout << "Y(n x m):" << endl;
//    max_c=max_in(C, n, m);
//    min_c=min_in(C, n, m);
//    max_b=max_in(B, n, m);
//    min_b=min_in(B, n, m);
//    new_matr(C, B, n, m, max_c, min_c, max_b, min_b);
//    output_before(C, n, m);
//    cout << "Z(n x m):" << endl;
//    output_before(B, n, m);
//
//}
//
//void input_before(Matrix matr, int l, int k){
//    int range_min=-100, range_max=200, rang_double=3;
//
//    for (int i=0; i<l; i++){
//        for (int j=0; j<k; j++){
//        matr[i][j] = range_min + 1 + rand()%(range_max-range_min + 1) - (rand()%((int)pow(10,rang_double)) / pow(10,rang_double));
//        }
//    }
//}
//void output_before(Matrix matr, int l, int k){
//    for (int i=0; i<l; i++){
//        for (int j=0; j<k; j++){
//            cout<<setw(9)<<matr[i][j];
//        }
//        cout<<endl;
//    }
//    cout<<endl;
//}
//
//int max_in(Matrix matr, int n, int m){
//    double max=-100;
//    int line=0;
//    for (int i=0; i<n; i++){
//        for (int j=0; j<m; j++){
//            if(matr[i][j]>max){
//                max=matr[i][j];
//                line=i;
//            }
//        }
//    }
//    return line;
//}
//int min_in(Matrix matr, int n, int m){
//    double min=200;
//    int line=0;
//    for (int i=0; i<n; i++){
//        for (int j=0; j<m; j++){
//            if(matr[i][j]<min){
//                min=matr[i][j];
//                line=i;
//
//            }
//        }
//    }
//    return line;
//}
//
//void new_matr(Matrix matr1, Matrix matr2, int n, int m, int max_c, int min_c, int max_b, int min_b){
//    double a, z;
//    for (int j=0; j<m; j++){
//        a=matr2[max_b][j];
//        matr2[max_b][j]=matr1[min_c][j];
//        matr1[min_c][j]=a;
//        z=matr2[min_b][j];
//        matr2[min_b][j]=matr1[max_c][j];
//        matr1[max_c][j]=z;
//        }
//}
