#ifndef FECHA_H
#define FECHA_H

#include <string>
using namespace std;

class fecha
{
private:
    short dia;
    short mes;
    int anio;

public:
    fecha(); //Constructores
    fecha(short d, short m, int a);
    fecha(string fechaStr); // para leer las fechas de los archivos
    fecha(const fecha& otra); // constructor de copia
    ~fecha(); // destructor

    //sobrecargas de algunos operadores :p
    fecha& operator=(const fecha& otra);
    bool operator==(const fecha& otra) const;
    bool operator<(const fecha& otra) const;
    bool operator>(const fecha& otra) const;

    short getDia() const;
    short getMes() const;
    int getAnio() const;

    void setDia(short d);
    void setMes(short m);
    void setAnio(int a);

    string aTexto() const; //pa imprimir
};

#endif // FECHA_H
