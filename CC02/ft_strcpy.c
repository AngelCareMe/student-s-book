#include <stdio.h>

char *ft_strcpy (char *dest, const char *src){
    int i = 0;
    while (src[i] != '\0'){
        dest[i] = src [i];
        i++;
    }
    dest[i] = '\0';
    return dest;
}

int main (){
    char src[] = "Zdarova Bober";
    char dest[50];

    ft_strcpy(dest, src);

    printf("Начальная строка: %s\n", src);
    printf("Скопированная строка: %s\n", dest);

    return 0;
}
