#include <stdio.h>
#include <ctype.h>

char *ft_strlowcase (char *str){
    int i = 0;

    while (str[i] != '\0'){
        str[i] = tolower(str[i]);
        i++;
    }
    return str;
}

int main()
{
    char str1[] = "HELLO DIDA";
    printf("%s\n", str1);

    ft_strlowcase(str1);
    printf("%s\n", str1);

    return 0;
}
