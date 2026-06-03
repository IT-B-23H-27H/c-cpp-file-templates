// Beispielprogramm in C++

#include <iostream>          // Für std::cout
#include "cpp_header.hpp" 

int main()
{
    // Strukturinstanz
    project::CustomType data{};
    data.a = 5;
    data.b = project::EnumType::A;
    data.c = true;

    // Klasseninstanz
    project::Example ex(42);

    // Beispielaufruf der Klassenmethode
    auto r = ex.foo(data);

    // Ausgabe
    std::cout << "Result: " << static_cast<int>(r) << '\n';

    return 0;
}
