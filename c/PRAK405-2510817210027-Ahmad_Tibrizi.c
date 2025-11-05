#include <stdio.h>

int main() {
    int looping, kelipatan;
    int temp_hasil = 0;
    int hasil = 0;

    printf("Banyak perulangan: ");
    scanf("%d", &looping);
    printf("Banyak kelipatan: ");
    scanf("%d", &kelipatan);

    for (int i = 1; i <= looping; i++) {
        temp_hasil += i * kelipatan;
        
        for (int j = 1; j <= i; j++) {
            printf("(%d * %d)", j, kelipatan);
            if (j < i) {
                printf(" + ");
            }
        }
        printf(" = %d\n", temp_hasil);
        hasil += temp_hasil;
    }

    printf("%d\n", hasil);

    return 0;
}