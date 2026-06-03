#pragma once        // C++ Style Include Guard

// Einbindung fester Ganzzahltypen (uint8_t, uint16_t, uint32_t, ...)
#include <cstdint>

// Einbindung eines projektspzifischen Headers
#include "bar.h" // Relativer Pfad im Projekt

namespace project
{

/*
 * Macro/Preprocessor Konstanten
 * Wird zur Compile-Zeit ersetzt, besitzt keinen Type und keine Sichtbarkeit im Debugger.
 */ 
#define CONSTANT_A (1u) // Unveränderliche Ganzzahl (u -> unsigned)

// Typed Konstanten
static const uint32_t constant_b = 1000;

// Oder nur Declaration
// Extern Keyword teilt dem Compiler mit das Definition an anderer Stelle erfolgt
extern const int16_t constant_c;

// Kompilierzeit Konstante
// Hat einen echten Typ und ist im Debugger sichtbar.
constexpr uint32_t constand_d = 32;

// Enumeration als Klassse basierend auf uint8_t
enum class EnumType : uint8_t
{
    A = 0, // Starte die Aufzählung bei 0
    B,     
    C,
};

// Strukturen
struct CustomType
{
    uint32_t a;
    EnumType b;
    bool c;
};

// Klassen
class Example
{
public:
    Example(uint32_t value);    // Constructor
    ~Example();                 // Destructor

    enum_type_t foo(const CustomType &c) const;

private:
    bool bar();
    uint32_t value_;
};

} // namespace project
