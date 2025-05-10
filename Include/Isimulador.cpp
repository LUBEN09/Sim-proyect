// include/ISimulador.h

#ifndef ISIMULADOR_H
#define ISIMULADOR_H
#include <iostream>
class ISimulador {
public:
    virtual void inicializar() = 0;
    virtual void ejecutar() = 0;
    virtual void finalizar() = 0;
    virtual ~ISimulador() {}
};

extern "C" {
    typedef ISimulador* (*crearSimulador_t)();

}

#endif
