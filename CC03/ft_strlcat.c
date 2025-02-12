#include <stdio.h>
#include <stdlib.h>
#include <string.h>

unsigned int ft_strlcat(char *dest, char *src, unsigned int size){
    unsigned int dest_len = strlen(dest);
    unsigned int src_len = strlen(src);
    unsigned int i = 0;

    if (size <= dest_len){
        return size + src_len;
    }

    while (src[i] != '\0' && dest_len + i < size - 1){
        dest[dest_len + i] = src [i];
        i++;
    }
    dest[dest_len + i] = '\0';

    return dest_len + src_len;
}

int main(){
    unsigned int size = 50;
    char *src = "Мама я в дубае";
    char *dest = (char *)malloc(50);

    if (dest == NULL){
        printf("Error memory\n");
        return 1;
    }

    unsigned int result = ft_strlcat(dest, src, size);
    printf("Результат: %s\n", dest);
    printf("Длина строки: %d\n", result);

    free(dest);

    return 0;
}
