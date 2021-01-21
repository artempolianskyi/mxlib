#include "libmx.h"

void mx_print_unicode(wchar_t c) {
    unsigned char a[5] = {0};
    int i = 0;
    if (c<128)
        write(1, &c, 1);
    else {
        while (c>0) {
            a[i++] = 128 | c%64;
            c /= 64;
        }
        if (a[i-1] >= (128 | ((int)mx_pow(2,8-i)-1)))
            i++;
        a[i-1] |= ((int)(mx_pow(2,i)-1)) << (8-i);
        for (int j = i-1; j >= 0; j--) {
            write(1, &a[j], 1);
        }
    }
}
