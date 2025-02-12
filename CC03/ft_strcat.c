#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int ft_strcmp(char *dest, char *src){
    int i = 0;

    printf("Изначальная строка: %s\n", src);
    while (src[i] != '\0'){
        dest[i] = src [i];
        i++;
}
    dest[i] = '\0';
    printf("Добавленная строка: %s\n", dest);

    i = 0;
    while (src[i] != '\0' && dest[i] != '\0'){
        if (src[i] != dest[i]){
            if (src[i] > dest[i]){
                printf ("Код отличающегося символа первой строки больше чем у второй\n");
                return 1;
            } else {
                printf ("Код отличающегося символа первой строки меньше чем у второй\n");
                return (-1);
            }
        }
        i++;
    }

    printf("Строки идентичны\n");
    return 0;
}

int main (){
    char *src = "Почему так больно жить";

    char *dest = (char *)malloc(strlen(src) + 1);
    if (dest == NULL){
        printf("Error memory\n");
    }


    printf("Сравнение двух строк:\n");
    ft_strcmp(dest, src);

    free(dest);

    return 0;
}
