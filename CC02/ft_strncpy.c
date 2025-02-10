#include <stdio.h>

char *ft_strncpy(char *dest, char *src, unsigned int n){
    unsigned int i = 0;

    while (src[i] != '\0' && i < n){
        dest[i] = src [i];
        i++;
    }
    while (i < n){
        dest[i] = '\0';
        i++;
    }

    return dest;
}

int main (){
    char src[] = "Zdarova Bober";
    char dest[20];

    ft_strncpy(dest, src, 10);

    printf("Начальная строка: %s\n", src);
    printf("Скопированная строка: %s\n", dest);

    return 0;
}
