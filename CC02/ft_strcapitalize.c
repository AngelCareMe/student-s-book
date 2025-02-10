#include <stdio.h>
#include <ctype.h>

char *ft_strlowcase (char *str){
    int i = 0;
    int new_word = 1;

    while (str[i] != '\0'){
        if (isalnum (str[i])){
            if (new_word){
                str[i] = toupper(str[i]);
                new_word = 0;
            } else {
                str[i] = tolower(str[i]);
            }
        } else {
            new_word = 1;
        }
        i++;
    }
    return str;
}

int main()
{
    char str1[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
    printf("%s\n", str1);

    ft_strlowcase(str1);
    printf("%s\n", str1);

    return 0;
}
