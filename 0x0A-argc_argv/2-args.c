#include <stdio.h>
#include "main.h"

/**
 * main - prints all the arguments it receives
 * 
 * Returns: Always 0
*/

int main(int argc, char *argv[]) {

    for (int i = 0; i < argc; i++ ) {
        printf("%s\n", argv[i]);
    }

    return (0);
}
 