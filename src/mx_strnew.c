#include <stdlib.h>

char *mx_strnew(const int size) {
    char *buf = NULL;
    buf = (char*) malloc(sizeof(char) * (size + 1));
    if(!buf)
        return NULL;
    for (int i = 0; i <= size; i++)
        buf[i] = '\0';
    return buf;
}
