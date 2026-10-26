#include "foto.h"

using namespace std;

foto::foto() {
    ruta = "";
    tamanio = 0;
    fechaCaptura = fecha();
    likes = 0;
}

foto::foto(string r, unsigned int tam, fecha fCap, unsigned int l) {
    ruta = r;
    tamanio = tam;
    fechaCaptura = fCap;
    likes = l;
}

foto::foto(const foto& otra) {
    ruta = otra.ruta;
    tamanio = otra.tamanio;
    fechaCaptura = otra.fechaCaptura;
    likes = otra.likes;
}

foto::~foto() {}

foto& foto::operator=(const foto& otra) {
    if (this != &otra) {
        ruta = otra.ruta;
        tamanio = otra.tamanio;
        fechaCaptura = otra.fechaCaptura;
        likes = otra.likes;
    }
    return *this;
}

bool foto::operator==(const foto& otra) const {
    return (ruta == otra.ruta);
}

string foto::getRuta() const { return ruta; }
unsigned int foto::getTamanio() const { return tamanio; }
fecha foto::getFechaCaptura() const { return fechaCaptura; }
unsigned int foto::getLikes() const { return likes; }

void foto::setRuta(string r) { ruta = r; }
void foto::setTamanio(unsigned int tam) { tamanio = tam; }
void foto::setFechaCaptura(fecha fCap) { fechaCaptura = fCap; }
void foto::setLikes(unsigned int l) { likes = l; }

void foto::aumentarLikes() {
    likes++;
}
