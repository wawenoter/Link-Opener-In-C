# Link Opener

## Description

Opens a link every 20s

## How to Use

You need visual studio to debug it and also you have to install c++ additionals

## Script

```C
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main() {
    const char* url = "https://hostify.ct.ws/uploads/Animan%20Studio%20Bullfighting%20Meme.mp4"; //PUT UT LINK 

    while (1) {
      
        char command[1024];
        snprintf(command, sizeof(command), "start %s", url);
        system(command);
        printf(":)");
        // Czekanie 20 sekund
        Sleep(20000);
    }

    return 0;
}

