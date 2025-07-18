#include <iostream>
#include <fstream>
#include <sstream>
#include <iomanip>
using namespace std;

const int TAMANO = 8;

void guardarTablero(int filaReina, int colReina, int numeroMovimiento) {
    string carpeta = "C:/Users/HP/Desktop/Trabajos/Estructura/output/movs";
 // nombre de la carpeta
    ostringstream nombreArchivo;
    nombreArchivo << carpeta << "/tablero_" << setw(3) << setfill('0') << numeroMovimiento << ".txt";
    ofstream archivo(nombreArchivo.str());

    if (!archivo) {
        cerr << "Error al crear el archivo " << nombreArchivo.str() << "\n";
        return;
    }

    // escribir el tablero
    archivo << "   ";
    for (int col = 0; col < TAMANO; ++col)
        archivo << col << " ";
    archivo << "\n";

    for (int fila = 0; fila < TAMANO; ++fila) {
        archivo << fila << "  ";
        for (int col = 0; col < TAMANO; ++col) {
            if (fila == filaReina && col == colReina)
                archivo << "Q ";
            else
                archivo << ". ";
        }
        archivo << "\n";
    }

    archivo.close();
}


// Dibuja el tablero en consola
void mostrarTablero(int filaReina, int colReina) {
    cout << "   ";
    for (int col = 0; col < TAMANO; ++col)
        cout << col << " ";
    cout << "\n";

    for (int fila = 0; fila < TAMANO; ++fila) {
        cout << fila << "  ";
        for (int col = 0; col < TAMANO; ++col) {
            if (fila == filaReina && col == colReina)
                cout << "Q ";
            else
                cout << ". ";
        }
        cout << "\n";
    }
}

int main() {
    int filaReina = 0, colReina = 0;
    int numeroMovimiento = 1;

    guardarTablero(filaReina, colReina, numeroMovimiento);

    while (true) {
        mostrarTablero(filaReina, colReina);

        cout << "Ingrese nueva posición de la reina (fila columna, o -1 -1 para salir): ";
        int nuevaFila, nuevaCol;
        cin >> nuevaFila >> nuevaCol;

        if (nuevaFila == -1 && nuevaCol == -1) {
            cout << "Programa terminado.\n";
            break;
        }

        if (nuevaFila >= 0 && nuevaFila < TAMANO && nuevaCol >= 0 && nuevaCol < TAMANO) {
            filaReina = nuevaFila;
            colReina = nuevaCol;
            numeroMovimiento++;
            guardarTablero(filaReina, colReina, numeroMovimiento);
        } else {
            cout << "Coordenadas inválidas. Intente de nuevo.\n";
        }
    }

    return 0;
}
