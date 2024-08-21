#include <iostream>
#include <vector>
using namespace std;

/*El bubble sort es un algoritmo de ordenamiento que recorre repetidamente una lista que necesita ordenarse.
 Compara elementos adyacentes y los intercambia si están en el orden incorrecto. Este procedimiento se repite hasta que no se requiere más intercambios, 
 lo que indica que la lista está ordenada. El algoritmo, que es un algoritmo de comparación, es estable y tiene una complejidad cuadrática de tiempo y espacio.
 */

void swap(vector<int> &vec, int j){
    int temp = vec[j];
    vec[j] = vec[j+1];
    vec[j+1] = temp;
}

void bubbleSort(vector<int> &vec){
    int n = vec.size();
    for(int i =0; i<n; i++){
        for(int j = 0; j < n-1 -i; j++){
            if(vec[j] > vec[j+1]){
                swap(vec, j);
           }
        }
    }
}

int main(){
    
    vector<int> vec = {64, 34, 25, 12, 22, 11, 90};

    bubbleSort(vec);

    cout << endl << "================================" << endl;

    for(int num : vec){
        cout << num << " ";
    }

    //Pre-screen

    vector<int> calificaciones(7);

    cout << endl << "================================" << endl;

    for(int i=0; i<7; i++){
        cout << "Ingrese la calificacion " << i+1 << " del alumno: ";
        cin >> calificaciones[i];
    }

    bubbleSort(calificaciones);

    cout << "==============================" << endl << "Las calificaciones ordenadas son: " << endl;
    for(int num : calificaciones){
        cout << "-" << num << " " << endl;
    }
    cout << endl << "==============================" << endl;

    cout << "La calificacion mas baja es: "<< calificaciones[0] << endl << "La calificacion mas alta es: " << calificaciones[calificaciones.size()-1] << endl;

    return 0;
}
