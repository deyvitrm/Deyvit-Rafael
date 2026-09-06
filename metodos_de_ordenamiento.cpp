#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <algorithm>
#include <chrono>

using namespace std;
using namespace std::chrono;

// 1. ALGORITMOS DE ORDENAMIENTO

void bubbleSort(vector<int>& a) {
    int n = a.size();
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (a[j] > a[j + 1]) {
                swap(a[j], a[j + 1]);
            }
        }
    }
}

void insertionSort(vector<int>& a) {
    int n = a.size();
    for (int i = 1; i < n; i++) {
        int key = a[i];
        int j = i - 1;
        while (j >= 0 && a[j] > key) {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = key;
    }
}

void selectionSort(vector<int>& a) {
    int n = a.size();
    for (int i = 0; i < n - 1; i++) {
        int minIdx = i;
        for (int j = i + 1; j < n; j++) {
            if (a[j] < a[minIdx]) minIdx = j;
        }
        if (minIdx != i) swap(a[i], a[minIdx]);
    }
}

void merge(vector<int>& a, int inicio, int medio, int fin) {
    vector<int> izq(a.begin() + inicio, a.begin() + medio + 1);
    vector<int> der(a.begin() + medio + 1, a.begin() + fin + 1);

    size_t i = 0, j = 0;
    int k = inicio;
    while (i < izq.size() && j < der.size()) {
        if (izq[i] <= der[j]) a[k++] = izq[i++];
        else a[k++] = der[j++];
    }
    while (i < izq.size()) a[k++] = izq[i++];
    while (j < der.size()) a[k++] = der[j++];
}

void mergeSortRec(vector<int>& a, int inicio, int fin) {
    if (inicio >= fin) return;
    int medio = inicio + (fin - inicio) / 2;
    mergeSortRec(a, inicio, medio);
    mergeSortRec(a, medio + 1, fin);
    merge(a, inicio, medio, fin);
}

void mergeSort(vector<int>& a) {
    if (a.size() > 1) mergeSortRec(a, 0, a.size() - 1);
}

int partition(vector<int>& a, int bajo, int alto) {
    int pivote = a[alto];
    int i = bajo - 1;
    for (int j = bajo; j < alto; j++) {
        if (a[j] <= pivote) {
            i++;
            swap(a[i], a[j]);
        }
    }
    swap(a[i + 1], a[alto]);
    return i + 1;
}

void quickSortRec(vector<int>& a, int bajo, int alto) {
    if (bajo < alto) {
        int p = partition(a, bajo, alto);
        quickSortRec(a, bajo, p - 1);
        quickSortRec(a, p + 1, alto);
    }
}

void quickSort(vector<int>& a) {
    if (a.size() > 1) quickSortRec(a, 0, a.size() - 1);
}

void countingSort(vector<int>& a) {
    if (a.empty()) return;
    int minimo = a[0], maximo = a[0];
    for (int num : a) {
        if (num < minimo) minimo = num;
        if (num > maximo) maximo = num;
    }
    int rango = maximo - minimo + 1;

    vector<int> conteo(rango, 0);
    for (int num : a) conteo[num - minimo]++;

    int idx = 0;
    for (int i = 0; i < rango; i++) {
        while (conteo[i] > 0) {
            a[idx++] = i + minimo;
            conteo[i]--;
        }
    }
}

// 2. ESTRUCTURAS Y VARIABLES GLOBALES

struct Resultado {
    string algoritmo;
    double tiempoMs;
    int cantidadElementos;
};

vector<int> numeros;
vector<Resultado> resultados;

// 3. FUNCIONES AUXILIARES

void imprimirVector(const vector<int>& v) {
    if (v.size() <= 20) {
        cout << "[ ";
        for (int num : v) cout << num << " ";
        cout << "]" << endl;
    } else {
        cout << "Primeros 10: [ ";
        for (int i = 0; i < 10; i++) cout << v[i] << " ";
        cout << "]" << endl;

        cout << "Últimos 10 : [ ";
        for (size_t i = v.size() - 10; i < v.size(); i++) cout << v[i] << " ";
        cout << "]" << endl;
    }
}

void generarNumeros() {
    int cantidad, minimo, maximo;
    cout << "\n--- GENERAR NUMEROS ALEATORIOS ---" << endl;
    cout << "Cuantos numeros desea generar?: ";
    cin >> cantidad;
    cout << "Valor minimo: ";
    cin >> minimo;
    cout << "Valor maximo: ";
    cin >> maximo;

    if (minimo > maximo) swap(minimo, maximo);

    numeros.clear();
    for (int i = 0; i < cantidad; i++) {
        int num = minimo + rand() % (maximo - minimo + 1);
        numeros.push_back(num);
    }

    // Se reinician los resultados almacenados cuando se generan nuevos datos
    resultados.clear();
    cout << "\nSe generaron " << cantidad << " numeros con exito." << endl;
}

void mostrarNumeros() {
    cout << "\n--- NUMEROS GENERADOS ---" << endl;
    if (numeros.empty()) {
        cout << "Aun no se han generado numeros. Use la opcion 1." << endl;
        return;
    }
    cout << "Cantidad total: " << numeros.size() << endl;
    imprimirVector(numeros);
}

double ejecutarAlgoritmo(int opcion, bool silencioso = false) {
    if (numeros.empty()) {
        if (!silencioso) cout << "Primero debe generar numeros." << endl;
        return -1.0;
    }

    vector<int> copia = numeros;
    string nombre = "";

    auto inicio = high_resolution_clock::now();

    switch (opcion) {
        case 1: nombre = "Bubble Sort"; bubbleSort(copia); break;
        case 2: nombre = "Insertion Sort"; insertionSort(copia); break;
        case 3: nombre = "Selection Sort"; selectionSort(copia); break;
        case 4: nombre = "Merge Sort"; mergeSort(copia); break;
        case 5: nombre = "Quick Sort"; quickSort(copia); break;
        case 6: nombre = "Counting Sort"; countingSort(copia); break;
    }

    auto fin = high_resolution_clock::now();
    double tiempoMs = duration<double, milli>(fin - inicio).count();

    // Guardar resultado de la ejecución
    resultados.push_back({nombre, tiempoMs, (int)numeros.size()});

    if (!silencioso) {
        cout << "\n--- " << nombre << " ---" << endl;
        cout << "Tiempo de ejecucion: " << tiempoMs << " ms" << endl;
        cout << "Resultado: ";
        imprimirVector(copia);
    }

    return tiempoMs;
}

void compararTodos() {
    if (numeros.empty()) {
        cout << "Primero debe generar numeros." << endl;
        return;
    }

    // Limpia ejecuciones individuales anteriores para mostrar la comparación limpia
    resultados.clear();

    cout << "\n--- COMPARANDO TODOS LOS METODOS ---" << endl;
    for (int i = 1; i <= 6; i++) {
        ejecutarAlgoritmo(i, true);
    }

    cout << "Comparacion completada con exito. Seleccione 'Mostrar resultados' para ver la tabla." << endl;
}

void mostrarResultados() {
    cout << "\n--- RESULTADOS DE COMPARACION ---" << endl;
    if (resultados.empty()) {
        cout << "No hay resultados registrados. Ejecute una prueba primero (opcion 3 o 4)." << endl;
        return;
    }

    // Se realiza una copia temporal para ordenar la tabla de menor a mayor tiempo
    vector<Resultado> tabla = resultados;
    for (size_t i = 0; i < tabla.size(); i++) {
        for (size_t j = 0; j < tabla.size() - 1; j++) {
            if (tabla[j].tiempoMs > tabla[j + 1].tiempoMs) {
                swap(tabla[j], tabla[j + 1]);
            }
        }
    }

    cout << "\nPos. | Algoritmo           | Cantidad   | Tiempo (ms)" << endl;
    cout << "-----------------------------------------------------" << endl;
    for (size_t i = 0; i < tabla.size(); i++) {
        cout << i + 1 << "   | ";
        cout << tabla[i].algoritmo;
        
        // Espaciado dinámico simple para alinear la columna
        int espacios = 20 - tabla[i].algoritmo.length();
        for (int k = 0; k < espacios; k++) cout << " ";
        
        cout << "| " << tabla[i].cantidadElementos << "      | " << tabla[i].tiempoMs << " ms" << endl;
    }

    cout << "\nEl metodo mas rapido fue: " << tabla.front().algoritmo 
         << " (" << tabla.front().tiempoMs << " ms)" << endl;
}

// 4. SUBMENÚ Y MENÚ PRINCIPAL

void subMenuOrdenar() {
    int opcion = 0;
    while (opcion != 8) {
        cout << "\n==========================================" << endl;
        cout << "         METODOS DE ORDENAMIENTO" << endl;
        cout << "==========================================" << endl;
        cout << "1. Bubble Sort" << endl;
        cout << "2. Insertion Sort" << endl;
        cout << "3. Selection Sort" << endl;
        cout << "4. Merge Sort" << endl;
        cout << "5. Quick Sort" << endl;
        cout << "6. Counting Sort" << endl;
        cout << "7. Todos los metodos" << endl;
        cout << "8. Regresar" << endl;
        cout << "==========================================" << endl;
        cout << "Seleccione una opcion: ";
        cin >> opcion;

        if (opcion >= 1 && opcion <= 6) {
            ejecutarAlgoritmo(opcion);
        } else if (opcion == 7) {
            compararTodos();
            mostrarResultados();
        } else if (opcion != 8) {
            cout << "opcion invalida. Intente de nuevo." << endl;
        }
    }
}

int main() {
    srand(time(0));

    int opcion = 0;
    while (opcion != 6) {
        cout << "\n==========================================" << endl;
        cout << "  SISTEMA DE ORDENAMIENTO Y COMPARACION" << endl;
        cout << "==========================================" << endl;
        cout << "1. Generar numeros aleatorios" << endl;
        cout << "2. Mostrar numeros generados" << endl;
        cout << "3. Ordenar con un metodo" << endl;
        cout << "4. Comparar todos los metodos" << endl;
        cout << "5. Mostrar resultados" << endl;
        cout << "6. Salir" << endl;
        cout << "==========================================" << endl;
        cout << "Seleccione una opcion: ";
        cin >> opcion;

        switch (opcion) {
            case 1: generarNumeros(); break;
            case 2: mostrarNumeros(); break;
            case 3: subMenuOrdenar(); break;
            case 4: 
                compararTodos(); 
                mostrarResultados();
                break;
            case 5: mostrarResultados(); break;
            case 6: cout << "\nSaliendo del sistema. Hasta luego, graciass..." << endl; break;
            default: cout << "opcion invalida. Intente de nuevo." << endl;
        }
    }

    return 0;
}
