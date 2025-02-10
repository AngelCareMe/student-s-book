#include <stdio.h>

int ft_strlen (const char *str){
    int i = 0;
    while (*str != '\0'){
        i++;
        str++;
    }
    return i;
}

int main (){
    const char *message = "Hello:D";
    int lon = ft_strlen(message);
    printf("Количество символов в строке равно: %d\n", lon);
    return 0;
}
