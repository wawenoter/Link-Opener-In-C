#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main() {
    const char* url = "https://hostify.ct.ws/uploads/Animan%20Studio%20Bullfighting%20Meme.mp4";

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
