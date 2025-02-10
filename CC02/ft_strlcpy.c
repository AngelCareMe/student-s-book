#include <stdio.h>
#include <ctype.h>

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size){
    unsigned int i = 0;

    while (src[i] && (i < size)){
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return i;
}

int main()
{
    char src[] = "Popo hato";
    char dest[10];
    unsigned int size = 9;

    printf("Incopy string: %s\n", src);

    unsigned int result = ft_strlcpy(dest, src, size);

    printf("Copied string: %s\n", dest);
    printf("Incopy string: %u\n", result);

    return 0;
}
