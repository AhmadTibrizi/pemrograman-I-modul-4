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
            printf("[%d]. %s\n", i, list_program[i]);
        }
        scanf("%d", &program_dipilih);
        if (program_dipilih == 0)
        {
            penjumlahan();
        }
        else if (program_dipilih == 1)
        {
            pengurangan();
        }
        else if (program_dipilih == 2)
        {
            perkalian();

        }
        else if (program_dipilih == 3)
        {
            pembagian();
        }
        else if (program_dipilih == 4)
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




// def program():
//     while True:
//         list_program = ['Penjumlahan', 'Pengurangan', 'Perkalian', 'Pembagian', 'exit']
//         print('Pilih program')

//         for i in range(len(list_program)):
//             print(f'{i+1}. {list_program[i]}')

//         pilihan = int(input("Masukkan Pilihan: "))
//         if pilihan == 1:
//             penjumlahan()
//         elif pilihan == 2:
//             pengurangan()
//         elif pilihan == 3:
//             perkalian()
//         elif pilihan == 4:
//             pembagian()
//         elif pilihan == 5:
//             print('Terimakasih, telah menggunakan kalkulator Ahmad Tibrizi')
//             break
//         else:
//             print("Input anda salah, silahkan coba lagi")


// def penjumlahan():
//     angka1 = int(input("Masukkan nilai pertama: "))
//     angka2 = int(input("Masukkan nilai kedua: "))
//     hasil = angka1 + angka2
//     print(f'Hasil penjumlahan antara {angka1:.2f} dengan {angka2:.2f} adalah {hasil:.2f}')


// def pengurangan():
//     angka1 = int(input("Masukkan nilai pertama: "))
//     angka2 = int(input("Masukkan nilai kedua: "))
//     hasil = angka1 - angka2
//     print(f'Hasil pengurangan antara {angka1:.2f} dengan {angka2:.2f} adalah {hasil:.2f}')


// def perkalian():
//     angka1 = int(input("Masukkan nilai pertama: "))
//     angka2 = int(input("Masukkan nilai kedua: "))
//     hasil = angka1 * angka2
//     print(f'Hasil perkalian antara {angka1:.2f} dengan {angka2:.2f} adalah {hasil:.2f}')


// def pembagian():
//     angka1 = int(input("Masukkan nilai pertama: "))
//     angka2 = int(input("Masukkan nilai kedua: "))
//     hasil = angka1 / angka2
//     print(f'Hasil pembagian antara {angka1:.2f} dengan {angka2:.2f} adalah {hasil:.2f}')

// if __name__ == "__main__":
//     program()
