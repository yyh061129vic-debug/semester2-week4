/*
Name:
Student ID:
*/

#include <stdio.h>
#include <string.h>

int main(int argc, char **argv) {

    char buffer[100] = "";

    /* check number of arguments (1–10) */
    if (argc < 2 || argc > 11) {
        return 0;
    }

    for (int i = 1; i < argc; i++) {

        /* check argument length (1–4 characters) */
        int len = strlen(argv[i]);
        if (len < 1 || len > 4) {
            return 0;
        }

        strcat(buffer, argv[i]);

        /* add '-' between arguments */
        if (i < argc - 1) {
            strcat(buffer, "-");
        }
    }

    printf("%s\n", buffer);

    return 0;
}
