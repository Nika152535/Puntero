#include <iostream>
#include <cstdlib>
#include <vector>
#include <memory>

using namespace std;

class AgentesV {
private:
    int edad;
    string nombre;
    string ulti;

public:
    AgentesV(int edadL, string nombreL, string ultiL) {
        edad = edadL;
        nombre = nombreL;
        ulti = ultiL;
        cout << "Se está spawneando a " << nombre << endl;
    }

    ~AgentesV() {
        cout << "Le dispararon a " << nombre << endl;
    }

    void Descripcion() {
        cout << "\n";
        cout << "Me llaman " << nombre << " y tengo " << edad << " años de edad" << endl;
        cout << "\n";
    }
};

int main() {
    vector<shared_ptr<AgentesV>> Regreso;
    Regreso.push_back(make_shared<AgentesV>(40, "Brimstone", "Aro de fuego"));
    Regreso.push_back(make_shared<AgentesV>(29, "Sage", "Revivir"));

    for (auto& aunRegreso : Regreso) {
        aunRegreso->Descripcion();
    }

    return 0;
}
