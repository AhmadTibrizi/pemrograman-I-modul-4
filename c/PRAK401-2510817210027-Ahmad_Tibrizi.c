#include <stdio.h>

int main(){
    int bilangan;
    char simbol;
    printf("Masukkan bilangan: ");
    scanf("%d", &bilangan);
    printf("Masukkan simbol: ");
    scanf(" %c", &simbol);
    int temp = bilangan;
    for (int i = 1; i < 51; i++)
    {
        if (i == temp)
        {
            printf("%c ", simbol);
            temp += bilangan;
        }else{
            printf("%d ", i);
        }
    }
    return 0;
}
