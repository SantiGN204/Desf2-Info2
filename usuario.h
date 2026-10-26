#ifndef USUARIO_H
#define USUARIO_H

#include <string>
#include "fecha.h"
//#include "foto.h"

using namespace std;

class usuario
{
private: //atributos
    unsigned int id;
    string userName;
    string contrasenia;
    foto fotoPerfil;
    fecha fechaNacimiento;
    string correo;
    string ciudad;
    string pais;
    fecha fechaInscrip;

public:
    usuario(); //contructor
    usuario(unsigned int idVal, string user, string pass, foto fPerfil,
            fecha fNac, string mail, string ciu, string p, fecha fInsc);
    usuario(const usuario& otro); //contruc de copia
    ~usuario(); //destructor

    // Sobrecarga de Operadores
    usuario& operator=(const usuario& otro);
    bool operator==(const usuario& otro) const;

    unsigned int getId() const;
    string getUserName() const;
    string getContrasenia() const;
    foto getFotoPerfil() const;
    fecha getFechaNacimiento() const;
    string getCorreo() const;
    string getCiudad() const;
    string getPais() const;
    fecha getFechaInscrip() const;

    void setId(unsigned int idVal);
    void setUserName(string user);
    void setContrasenia(string pass);
    void setFotoPerfil(foto fPerfil);
    void setFechaNacimiento(fecha fNac);
    void setCorreo(string mail);
    void setCiudad(string ciu);
    void setPais(string p);
    void setFechaInscrip(fecha fInsc);

    //funcionalidades II al VI
    void enviarSolicitud();
    void aceptarSolicitud();
    void verUnAmigo();
    void verSugeridos();
    void enviarMensaje();
    void leerMensaje();
    void buscarMensaje();

};

#endif // USUARIO_H
