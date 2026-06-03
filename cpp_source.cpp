#include "cpp_header.h"   // Einbinden des eigenen Headers mit Typen und Deklarationen

namespace project
{

// Definition der globalen Konstante
const uint32_t constant_c = 42; 

// Constructor
Example::Example(uint32_t value)
{
    value_ = value;
}

// Destructor
Example::~Example()
{
}

// Public API Definitionm Parameter c wird als konstante Reference übergeben
enum_type_t Example::foo(const CustomType &c) const
{
    if (c.b == EnumType::A)
    {
        return ENUM_A;
    }

    if (c.a == 0 && c.c)
    {
        return ENUM_B;
    }

    if (bar())
    {
        return ENUM_C;
    }

    return ENUM_A;
}

// Private API Definition
bool Example::bar()
{
    return value_ > 0;
}

} // namespace project
