
//#include <iostream>
#include <windows.h>
#include <"NucleoSim/Include/Isimulador.cpp">
#include <"NucleoSim/SimDemo/SimuladorDemo.cpp">
#include <"NucleoSim/SimDemo/src/GestorModulos.cpp">


int main(int argc, char* argv[]) {}
    // Load the DLL
    HINSTANCE hinstLib = LoadLibrary(TEXT("NucleoSim/Modules/SimuladorDemo.dll"));
    if (hinstLib == NULL) {
        std::cerr << "Failed to load the DLL." << std::endl;
        return 1;
    }

    // Get the function address
    crearSimulador_t crearSimulador = (crearSimulador_t)GetProcAddress(hinstLib, "crearSimulador");
    if (crearSimulador == NULL) {
        std::cerr << "Failed to get the function address." << std::endl;
        FreeLibrary(hinstLib);
        return 1;
    }

    // Create an instance of ISimulador
    ISIMULADOR* simulador = crearSimulador();
    if (simulador == NULL) {
        std::cerr << "Failed to create an instance of ISimulador." << std::endl;
        FreeLibrary(hinstLib);
        return 1;
    }

    // Use the simulator
    simulador->inicializa();
    simulador->simula();
    simulador->imprime();
    simulador->limpa();

    // Clean up
    delete simulador;
    FreeLibrary(hinstLib);

    return 0;
}