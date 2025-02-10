#include <stdio.h>
#include <ctype.h>

char *ft_strupcase (char *str){
    int i = 0;

    while (str[i] != '\0'){
        str[i] = toupper(str[i]);
        i++;
    }
    return str;
}

int main()
{
    char str1[] = "hello dida";
    printf("%s\n", str1);

    ft_strupcase(str1);
    printf("%s\n", str1);

    return 0;
}
