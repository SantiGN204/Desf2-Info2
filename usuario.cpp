#include "usuario.h"
#include <iostream>

using namespace std;

// Constructor por defecto
usuario::usuario() {
    id = 0;
    userName = "";
    contrasenia = "";
    correo = "";
    ciudad = "";
    pais = "";
}

usuario::usuario(unsigned int idVal, string user, string pass, foto fPerfil,
                 fecha fNac, string mail, string ciu, string p, fecha fInsc) {
    id = idVal;
    userName = user;
    contrasenia = pass;
    fotoPerfil = fPerfil;
    fechaNacimiento = fNac;
    correo = mail;
    ciudad = ciu;
    pais = p;
    fechaInscrip = fInsc;
}

// Constructor de copia
usuario::usuario(const usuario& otro) {
    id = otro.id;
    userName = otro.userName;
    contrasenia = otro.contrasenia;
    fotoPerfil = otro.fotoPerfil;
    fechaNacimiento = otro.fechaNacimiento;
    correo = otro.correo;
    ciudad = otro.ciudad;
    pais = otro.pais;
    fechaInscrip = otro.fechaInscrip;
}

usuario::~usuario() {}

// Sobrecarga del Operador de Asignacion
usuario& usuario::operator=(const usuario& otro) {
    if (this != &otro) {
        id = otro.id;
        userName = otro.userName;
        contrasenia = otro.contrasenia;
        fotoPerfil = otro.fotoPerfil;
        fechaNacimiento = otro.fechaNacimiento;
        correo = otro.correo;
        ciudad = otro.ciudad;
        pais = otro.pais;
        fechaInscrip = otro.fechaInscrip;
    }
    return *this;
}

// Sobrecarga del Operador de Igualdad (compara por ID o Username)
bool usuario::operator==(const usuario& otro) const {
    return (id == otro.id || userName == otro.userName);
}

// --- GETTERS ---
unsigned int usuario::getId() const { return id; }
string usuario::getUserName() const { return userName; }
string usuario::getContrasenia() const { return contrasenia; }
foto usuario::getFotoPerfil() const { return fotoPerfil; }
fecha usuario::getFechaNacimiento() const { return fechaNacimiento; }
string usuario::getCorreo() const { return correo; }
string usuario::getCiudad() const { return ciudad; }
string usuario::getPais() const { return pais; }
fecha usuario::getFechaInscrip() const { return fechaInscrip; }

// --- SETTERS ---
void usuario::setId(unsigned int idVal) { id = idVal; }
void usuario::setUserName(string user) { userName = user; }
void usuario::setContrasenia(string pass) { contrasenia = pass; }
void usuario::setFotoPerfil(foto fPerfil) { fotoPerfil = fPerfil; }
void usuario::setFechaNacimiento(fecha fNac) { fechaNacimiento = fNac; }
void usuario::setCorreo(string mail) { correo = mail; }
void usuario::setCiudad(string ciu) { ciudad = ciu; }
void usuario::setPais(string p) { pais = p; }
void usuario::setFechaInscrip(fecha fInsc) { fechaInscrip = fInsc; }

// --- METODOS DE NEGOCIO (Esqueletos pendientes por implementar) ---
void usuario::enviarSolicitud() {
    // Pendiente: logica para enviar solicitud de amistad
}

void usuario::aceptarSolicitud() {
    // Pendiente: logica para aceptar solicitud recibida
}

void usuario::verUnAmigo() {
    // Pendiente: consultar la informacion de un amigo
}

void usuario::verSugeridos() {
    // Pendiente: mostrar sugerencias de amistad
}

void usuario::enviarMensaje() {
    // Pendiente: enviar mensaje a otro usuario
}

void usuario::leerMensaje() {
    // Pendiente: desplegar mensajes recibidos/enviados
}

void usuario::buscarMensaje() {
    // Pendiente: busqueda de mensajes por filtro/fecha
}
