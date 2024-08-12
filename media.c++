#include <iostream>
#include <iomanip> // Para std::setprecision

int main() {
    double x, y, media;

    // Solicita e lê o primeiro número
    std::cout << "Digite o primeiro numero: ";
    std::cin >> x;

    // Solicita e lê o segundo número
    std::cout << "Digite o segundo numero: ";
    std::cin >> y;

    // Calcula a média
    media = (x + y) / 2;

    // Exibe a média com duas casas decimais
    std::cout << std::fixed << std::setprecision(2);
    std::cout << "A media dos numeros " << x << " e " << y << " e: " << media << std::endl;

    return 0;
}
