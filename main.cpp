#include <iostream>
using namespace std;


void mostrarvec(int vec[], int dim)
{
    for (int i = 0; i < dim; ++i)
        cout << vec[i] << '\t';
    cout << endl;
}

void mostrarmat(int m[][5], int dfil)
{
    const int Columnas = 5; // solo por prolijidad
    for (int i = 0; i < dfil; ++i) {
        for (int j = 0; j < Columnas; ++j)
            cout << m[i][j] << '\t';
        cout << endl;
    }

}

void Vectorreverso(int vec[], int dim){
    int division=2;
    int mitad = dim / division;
    for(int i = 0; i < mitad; i++)
        swap(vec[i], vec[dim-1-i]);
}

void Matriztranspuesta(int m[][5], int dfil){
    for(int Fi = 0; Fi < dfil; Fi++)
        for(int Col = Fi + 1; Col < dfil; Col++)
            swap( m[Fi][Col], m[Col][Fi]);
}



int main()
{
    const int dim5 {5};
    const int dim10 {10};

    int vec5[dim5] {4, 11, 19, 8, 3};
    int vec10[dim10] {23, 15, 1, 7, 6, 27, 2, 14, 12, 9};

    int matriz[dim5][dim5] {36, 7, 19, 28, 45,
                            17, 33, 42, 3, 25,
                            22, 41, 32, 11, 9,
                            39, 47, 14, 4, 23,
                            16, 38, 8, 27, 44};

    cout<<"Vector original de 5 elementos"<<endl;
    mostrarvec(vec5, dim5);

    cout<<"vector invertido"<<endl;
    Vectorreverso(vec5, dim5);
    mostrarvec(vec5, dim5);

    cout<<"vector original de 10 elementos"<<endl;
    mostrarvec(vec10, dim10);

    cout<<"vector invertido"<<endl;
    Vectorreverso(vec10, dim10);
    mostrarvec(vec10, dim10);

    cout<<"Matriz original"<<endl;
    mostrarmat(matriz, dim5);
    Matriztranspuesta(matriz, dim5);

    cout<<"Matriz transpuesta"<<endl;
    mostrarmat(matriz, dim5);

    return 0;
}