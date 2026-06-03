// Beispielprogramm in C

#include <stdio.h>         // Für printf
#include "c_header.h"      

int main(void)
{
    CustomType data;     // Instanz der Struktur erzeugen
    data.a = 10u;           // Wert setzen
    data.b = ENUM_B;        // Enum setzen
    data.c = true;          // Bool setzen

    EnumType result = foo(&data); // API-Funktion aufrufen

    printf("Result: %d\n", (int)result); // Ergebnis ausgeben (Format string)

    return 0;               // Erfolgstatus melden
}
