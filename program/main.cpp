#include <iostream>
#include "System.h"

int main() {
    std::cout << "Inicio" << std::endl;

    System *system = new System();

    system->addComponent(50, "www.google.com");

    std::cout << "Fim!" << std::endl;

    return 0;
}
