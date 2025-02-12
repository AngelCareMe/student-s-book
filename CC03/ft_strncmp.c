#include <stdio.h>

int ft_strcmp(char *s1, char *s2, unsigned int n){
    int i = 0;

    while (s1[i] != n && s2[i] != n){
        if (s1[i] != s2[i]){
            if (s1[i] > s2[i]){
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
    char *s1 = "Почему так больно жить";
    char *s2 = "Почему так больно жить";
    unsigned int n = 10;

    printf("Сравнение двух строк:\n");
    printf("%s\n", s1);
    printf("%s\n", s2);

    ft_strcmp(s1, s2, n);

    return 0;
}
