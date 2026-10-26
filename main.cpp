#include <iostream>
#include <fstream>
#include <string>

using namespace std;

// Función auxiliar para probar la apertura usando el nombre simple del archivo
bool probarAbrirArchivo(const string& nombreArchivo) {
    ifstream archivo(nombreArchivo);

    if (!archivo.is_open()) {
        cout << "[ERROR] No se pudo abrir el archivo: " << nombreArchivo << endl;
        return false;
    }

    string primeraLinea;
    getline(archivo, primeraLinea);

    cout << "[OK] Archivo abierto con exito: " << endl;
    cout << "     Primera linea: " << primeraLinea << endl;

    archivo.close();
    return true;
}

int main() {
    cout << "=== PRUEBA DE LECTURA DE ARCHIVOS PERSISTENTES ===" << endl << endl;

    // Rutas relativas simples (buscara los archivos en la carpeta de ejecucion)
    string archivoUsuarios = "C:/Users/Santiago Garcia/Desktop/Estudio/UdeA/Informatica/Informatica 2/QT/Desf2_2026-2/usuarios.txt";
    string archivoRelaciones = "C:/Users/Santiago Garcia/Desktop/Estudio/UdeA/Informatica/Informatica 2/QT/Desf2_2026-2/relaciones.txt";
    string archivoMensajes = "C:/Users/Santiago Garcia/Desktop/Estudio/UdeA/Informatica/Informatica 2/QT/Desf2_2026-2/mensajes.txt";
    string archivoAlbumes = "C:/Users/Santiago Garcia/Desktop/Estudio/UdeA/Informatica/Informatica 2/QT/Desf2_2026-2/albumes_fotos.txt";

    int exitosos = 0;

    if (probarAbrirArchivo(archivoUsuarios)) exitosos++;
    if (probarAbrirArchivo(archivoRelaciones)) exitosos++;
    if (probarAbrirArchivo(archivoMensajes)) exitosos++;
    if (probarAbrirArchivo(archivoAlbumes)) exitosos++;

    cout << endl;
    cout << "Resultado: " << exitosos << " de 4 archivos leidos correctamente." << endl;

    if (exitosos == 4) {
        cout << "¡Todo listo para continuar con las clases!" << endl;
    } else {
        cout << "Verifica que los archivos .txt esten en la carpeta de trabajo del ejecutable." << endl;
    }

    return 0;
}
/*
#include <iostream>

using namespace std;

int main()
{
    cout << "Hello World!" << endl;
    return 0;
}
*/
//Rutas en general
//C:/Users/Santiago Garcia/Desktop/Estudio/UdeA/Informatica/Informatica 2/QT/Desf2_2026-2/
// al final será albumes_fotos.txt o los otros
