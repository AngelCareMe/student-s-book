#include <stdio.h>

int ft_strcmp(char *s1, char *s2){
    int i = 0;

    while (s1[i] != '\0' && s2[i] != '\0'){
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

    printf("Сравнение двух строк:\n");
    printf("%s\n", s1);
    printf("%s\n", s2);

    ft_strcmp(s1, s2);

    return 0;
}
