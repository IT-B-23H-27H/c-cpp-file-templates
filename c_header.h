/*
 * Include Guard: verhindert, dass der Header mehrfach im gleichen Übersetzungslauf eingebunden wird
 * Definiert das Makro C_HEADER_H, um den Guard zu aktivieren. Der Makroname muss für jedes Header-
 * File einzigartig sein.
 */
#ifndef C_HEADER_H
#define C_HEADER_H

/*
 * Prüft, ob der Header aus C++ heraus eingebunden wird
 * Verhindert Name-Mangling in C++, damit die Funktionen C-Linkage behalten
 */
#ifdef __cplusplus
extern "C"
{
#endif

// Einbindung fester Ganzzahltypen (uint8_t, uint16_t, uint32_t, ...)
#include <stdint.h>

// Einbindung des bool-Types in C (bool, true, false)
#include <stdbool.h>

// Einbindung eines projektspzifischen Headers
#include "bar.h" // Relativer Pfad im Projekt

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

// Enumeration als custom type
typedef enum EnumType_e // Definiert einen neuen Enum-Type
{
    ENUM_A = 0, // Starte die Aufzählung bei 0
    ENUM_B,
    ENUM_C,
} EnumType; // Alias-Name für den Enum-Type

// Strukturen
typedef struct CustomType_s // Definiert einen Struktur-Type
{
    uint32_t a;
    EnumType b;
    bool c;
} CustomType; // Alias-Name für den Struktur-Type

// Public API
EnumType foo(CustomType *const c);

/*
 * Hinweis: static inline Funktionen im Header werden in jede Übersetzungseinheit
 * kopiert, sind aber aufrufseitig oft effizient. Hier wird bewusst mir der
 * Konvention keine Implementierung im Header gebrochen,
 */
static inline uint32_t inline_func(void) // Inline-Funktion zum Ermitteln einer zusammengesetzten Versionsnummer
{
    return CONSTANT_A;
}

#ifdef __cplusplus
} // Schliesst den extern "C" Block
#endif // Ende der C++-Spezialbehandlung

#endif /* C_HEADER_H */ // Ende des Include Guards, Header ist hier vollständig beendet
