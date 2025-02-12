#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int ft_strcmp(char *dest, char *src, int nb){
    int i = 0;

    printf("Изначальная строка: %s\n", src);

    while (i < nb){
        if (i < strlen(src)){
            dest[i] = src[i];
        } else {
            dest[i] = ' ';
        }
        i++;
    }
    dest[i] = '\0';

    printf("Добавленная строка: %s\n", dest);

    i = 0;
    while (src[i] != '\0'){
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
    int nb = 20;
    char *src = "Почему так больно жить";

    char *dest = (char *)malloc(nb + 1);
    if (dest == NULL){
        printf("Error memory\n");
        return 1;
    }

    printf("Сравнение двух строк:\n");
    ft_strcmp(dest, src, nb);

    free(dest);

    return 0;
}
