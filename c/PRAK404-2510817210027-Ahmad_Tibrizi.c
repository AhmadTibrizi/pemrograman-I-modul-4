#include <stdio.h>

void penjumlahan(){
    float angka1, angka2, hasil;
    printf("\nMasukkan nilai pertama: ");
    scanf("%f", &angka1);
    printf("\nMasukkan nilai kedua: ");
    scanf("%f", &angka2);
    hasil = angka1 + angka2;
    printf("Hasil penjumlahan antara %.2f dengan %.2f adalah %.2f\n", angka1, angka2, hasil);
}

void pengurangan(){
    float angka1, angka2, hasil;
    printf("\nMasukkan nilai pertama: ");
    scanf("%f", &angka1);
    printf("\nMasukkan nilai kedua: ");
    scanf("%f", &angka2);
    hasil = angka1 - angka2;
    printf("Hasil pengurangan antara %.2f dengan %.2f adalah %.2f\n", angka1, angka2, hasil);
}

void perkalian(){
    float angka1, angka2, hasil;
    printf("\nMasukkan nilai pertama: ");
    scanf("%f", &angka1);
    printf("\nMasukkan nilai kedua: ");
    scanf("%f", &angka2);
    hasil = angka1 * angka2;
    printf("Hasil perkalian antara %.2f dengan %.2f adalah %.2f\n", angka1, angka2, hasil);
}

void pembagian(){
    float angka1, angka2, hasil;
    printf("\nMasukkan nilai pertama: ");
    scanf("%f", &angka1);
    printf("\nMasukkan nilai kedua: ");
    scanf("%f", &angka2);
    hasil = angka1 / angka2;
    printf("Hasil pembagian antara %.2f dengan %.2f adalah %.2f\n", angka1, angka2, hasil);
}
void program(){
    char list_program[5][100] = {"Penjumlahan", "Pengurangan", "Perkalian", "Pembagian", "exit"};

    while (0 == 0){
        int program_dipilih;
        printf("Pilih program\n");
        for (int i = 0; i < 5; i++)
        {
            printf("[%d] %s\n", i+1, list_program[i]);
        }
        scanf("%d", &program_dipilih);
        if (program_dipilih == 1)
        {
            penjumlahan();
        }
        else if (program_dipilih == 2)
        {
            pengurangan();
        }
        else if (program_dipilih == 3)
        {
            perkalian();

        }
        else if (program_dipilih == 4)
        {
            pembagian();
        }
        else if (program_dipilih == 5)
        {
             printf("Terimakasih, telah menggunakan kalkulator Ahmad Tibrizi\n");
            break;
        }
        else
        {
            printf("Input anda salah, silahkan coba lagi\n");
        }
        
    }
    }

int main(){
    program();
    return 0;
}