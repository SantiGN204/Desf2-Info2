#ifndef FOTO_H
#define FOTO_H

#include <string>
#include "fecha.h"

using namespace std;

class foto
{
private:
    string ruta;
    unsigned int tamanio;
    fecha fechaCaptura;
    unsigned int likes;
public:
    foto();
    foto(string r, unsigned int tam, fecha fCap, unsigned int l = 0);
    foto(const foto& otra);
    ~foto();

    //sobrecargando los operadores tururu
    foto& operator=(const foto& otra);
    bool operator==(const foto& otra) const;

    string getRuta() const;
    unsigned int getTamanio() const;
    fecha getFechaCaptura() const;
    unsigned int getLikes() const;

    void setRuta(string r);
    void setTamanio(unsigned int tam);
    void setFechaCaptura(fecha fCap);
    void setLikes(unsigned int l);

    void aumentarLikes(); //bastante intuitivo
};

#endif // FOTO_H
