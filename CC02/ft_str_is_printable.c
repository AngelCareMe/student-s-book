#include <stdio.h>
#include <stdbool.h>

int ft_str_is_lowercase (char *str){
    if (str == NULL || *str == '\0')
        return 1;

    while (*str){
        if (*str < 32 || *str > 126)
            return 0;
        str++;
    }
    return 1;
}

int main()
{
    char *str1 = "hello dyad'ka";
    char *str2 = "HELLO\ndida";
    char *str3 = "";
    char *str4 = "123^$!%*";

    printf("str1: %s, result: %d\n", str1, ft_str_is_lowercase(str1));
    printf("str2: %s, result: %d\n", str2, ft_str_is_lowercase(str2));
    printf("str3: %s, result: %d\n", str3, ft_str_is_lowercase(str3));
    printf("str4: %s, result: %d\n", str4, ft_str_is_lowercase(str4));

    return 0;
}
