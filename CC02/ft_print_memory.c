#include <stdio.h>
#include <ctype.h>

void *ft_print_memory (void *addr, unsigned int size){

    unsigned char *ptr = (unsigned char *)addr;
    unsigned int i, j;

    if (size == 0) {
        return addr;
    }

    for (i = 0; i < size; i += 16){
        printf ("%p: ", ptr + i);

        for (j = 0; j < 16 && i + j < size; j++){
            printf("%02x ", ptr[i + j]);
        }

        for (;j < 16; j++){
            printf(" ");
        }

        for (j = 0; j < 16 && i + j < size; j++){
            if (isprint(ptr[i + j])){
                putchar(ptr[i + j]);
            } else {
                putchar('.');
            }
        }
        putchar('\n');
    }
    return addr;
}

int main()
{
    char str[] = "Coucoutest string with some non-printable chars \x01\x02\x03";
    unsigned int size = sizeof(str) - 1;

    ft_print_memory(str, size);

    return 0;
}
