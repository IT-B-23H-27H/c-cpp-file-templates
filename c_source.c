#include <stddef.h>     // Einbiden der Definition für 'NULL'
#include "c_header.h"   // Einbinden des eigenen Headers mit Typen und Deklarationen

// Definition der globalen Konstante
const uint32_t constant_c = 42; 

// Private API Declaration
// static: interne Linkage, diese Funktion ist nur in dieser Übersetzungseinheit sichtbar (File Scope)
static EnumType func_a(void);

// Public API Definition, Parameter c wird als konstante Reference übergeben (Pointer)
EnumType foo(const CustomType *const c)
{
    if (c == NULL)
    {
        return ENUM_C;
    }

    uint32_t local = inline_func(); 
    (void)local;  // Markiert die Variable als bewusst ungenutzt, um Warnungen zu vermeiden

    if (c->b == ENUM_A)
    {
        return ENUM_A;
    }

    return func_a();
}

// Private API Definition
static EnumType func_a(void)
{
    return ENUM_B;
}
