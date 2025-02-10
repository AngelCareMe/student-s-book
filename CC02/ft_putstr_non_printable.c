#include <stdio.h>
#include <ctype.h>

int ft_putstr_non_printable (char *str){
    unsigned char ch;

    while (*str){
        ch = (unsigned char)*str;

        if(isprint(ch)){
            putchar(ch);
        } else {
            printf("\\%02x", ch);
        }
        str++;
    }
    return 0;
}

int main()
{
    char str[] = "Coucou\ntu vas bien ?";

    ft_putstr_non_printable (str);
    printf ("\n");

    return 0;
}
