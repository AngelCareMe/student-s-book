#include <stdio.h>

int ft_str_is_alpha(char *str){
    int i = 0;
    while (str[i] != '\0'){
        if (!((str[i] >= '0' && str[i] <= '9'))){
            return 0;
        }
        i++;
    }
    return 1;
}

int main (){
    char src[] = "1231251";

    int result = ft_str_is_alpha(src);

    printf("Начальная строка: %s\n", src);
    printf("Только цифры? %d\n", result);


    return 0;
}
