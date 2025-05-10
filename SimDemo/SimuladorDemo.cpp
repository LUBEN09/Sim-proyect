
#include <iostream>
#include <"Sim-proyect.sln\Include/Isimulador.cpp">


class SimuladorDemo : public ISIMULADOR {
    public:
        void inicializa() override {
            std::cout << "SimuladorDemo: Inicializando..." << std::endl;
        }

        void simula() override {
            std::cout << "SimuladorDemo: Simulando..." << std::endl;
        }

        void imprime() override {
            std::cout << "SimuladorDemo: Imprimindo resultados..." << std::endl;
        }

        void limpa() override {
            std::cout << "SimuladorDemo: Limpando recursos..." << std::endl;
        }
    
}