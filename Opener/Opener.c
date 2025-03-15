#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main() {
    const char* url = "https://link";

    while (1) {
        // Uruchomienie linku w domyślnej przeglądarce
        char command[1024];
        snprintf(command, sizeof(command), "start %s", url);
        system(command);
        printf(":)");
        // Czekanie 20 sekund
        Sleep(20000);
    }

    return 0;
}
