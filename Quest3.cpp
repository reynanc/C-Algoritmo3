#include <iostream>
#include <cmath>

int main() {

    //Elaborar um algoritmo que lê 3 valores a,b,c e verifica se eles formam ou não um triângulo.
    //Supor que os valores lidos são inteiros e positivos. Caso os valores formem um triângulo, calcular
    //e escrever a área deste triângulo. Se não formam triângulo escrever os valores lidos.
    // (se a > b + c não formam triângulo algum, se a é o maior).

    int A;
    int B;
    int C;

    bool problema = false;

    double sp;
    double area;

    std::cout << "Digite A: ";
    std::cin >> A;

    std::cout << "Digite B: ";
    std::cin >> B;

    std::cout << "Digite C: ";
    std::cin >> C;

    if (A > B + C)
    {
        problema = true;
    }
    else if (B > A + C)
    {
        problema = true;
    }
    else if (C > A + B)
    {
        problema = true;
    }
    else
        {
        sp = (A + B + C) / 2;
        area = sqrt(sp * (sp - A) * (sp - B) * (sp - C));

        std::cout << "Area: " << area;

        }
    if (problema)
    {
        std::cout << "Houve um problema!\n\n";
    }

}
