#include <ctime> // Necesario para la fecha del sistema
#include <iostream>
#include "fecha.h"

using namespace std;

// Constructor por defecto: Toma la fecha actual del sistema operativo
fecha::fecha() {
    time_t now = time(0);
    tm* ltm = localtime(&now);

    // tm_mday: día del mes (1-31)
    dia = ltm->tm_mday;
    // tm_mon: meses desde enero (0-11), por eso se le suma 1
    mes = ltm->tm_mon + 1;
    // tm_year: años desde 1900, por eso se le suma 1900
    anio = 1900 + ltm->tm_year;}

// Constructor parametrizado
fecha::fecha(short d, short m, int a) {
    dia = d;
    mes = m;
    anio = a;
}

// Constructor desde texto "DD/MM/AAAA" usando solo .find() y .substr()
fecha::fecha(string fechaStr) {
    dia = 1;
    mes = 1;
    anio = 2026;

    if (fechaStr.length() >= 8) {
        // Encontrar la primera barra '/'
        int pos1 = fechaStr.find('/');
        if (pos1 != -1) {
            // Extraer el día (desde el inicio hasta la primera barra)
            string strDia = fechaStr.substr(0, pos1);
            dia = stoi(strDia);

            // Encontrar la segunda barra '/' buscando después de pos1
            int pos2 = fechaStr.find('/', pos1 + 1);
            if (pos2 != -1) {
                // Extraer el mes (entre la primera y la segunda barra)
                string strMes = fechaStr.substr(pos1 + 1, pos2 - pos1 - 1);
                mes = stoi(strMes);

                // Extraer el año (todo lo que queda después de la segunda barra)
                string strAnio = fechaStr.substr(pos2 + 1);
                anio = stoi(strAnio);
            }
        }
    }
}

// Constructor de copia
fecha::fecha(const fecha& otra) {
    dia = otra.dia;
    mes = otra.mes;
    anio = otra.anio;
}

fecha::~fecha() {}

fecha& fecha::operator=(const fecha& otra) {
    if (this != &otra) {
        dia = otra.dia;
        mes = otra.mes;
        anio = otra.anio;
    }
    return *this;
}

bool fecha::operator==(const fecha& otra) const {
    if (dia == otra.dia && mes == otra.mes && anio == otra.anio) {
        return true;
    }
    return false;
}

bool fecha::operator<(const fecha& otra) const {
    if (anio < otra.anio) return true;
    if (anio > otra.anio) return false;

    if (mes < otra.mes) return true;
    if (mes > otra.mes) return false;

    return dia < otra.dia;
}

bool fecha::operator>(const fecha& otra) const {
    if (anio > otra.anio) return true;
    if (anio < otra.anio) return false;

    if (mes > otra.mes) return true;
    if (mes < otra.mes) return false;

    return dia > otra.dia;
}

short fecha::getDia() const { return dia; }
short fecha::getMes() const { return mes; }
int fecha::getAnio() const { return anio; }

void fecha::setDia(short d) { dia = d; }
void fecha::setMes(short m) { mes = m; }
void fecha::setAnio(int a) { anio = a; }

// Convertir a texto
string fecha::aTexto() const {
    string dStr = "";
    if (dia < 10) dStr += "0";
    dStr += to_string(dia);

    string mStr = "";
    if (mes < 10) mStr += "0";
    mStr += to_string(mes);

    return dStr + "/" + mStr + "/" + to_string(anio);
}
