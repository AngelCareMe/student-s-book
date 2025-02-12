#include <stdio.h>
#include <stdlib.h>

char *ft_strstr(char *str, char *to_find){
    if (*to_find == '\0'){
        return (char *)str;
    }

    while (*str != '\0'){
        char *s1 = str;
        char *s2 = to_find;

        while (*s1 == *s2 && *s2 != '\0'){
            s1++;
            s2++;
        }

        if (*s2 == '\0'){
            return (char *)str;
        }
        str++;
    }

    return NULL;
}

int main(){
    char *str = "0123456789";
    char *to_find = "345";

    char *result = ft_strstr(str, to_find);

    if (result != NULL){
        printf("Найдено вхождение: %s\n", result);
    } else {
        printf("Вхождение не найдено\n");
    }

    return 0;
}
