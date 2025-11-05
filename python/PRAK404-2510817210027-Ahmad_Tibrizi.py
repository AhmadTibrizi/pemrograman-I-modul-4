def program():
    while True:
        list_program = ['Penjumlahan', 'Pengurangan', 'Perkalian', 'Pembagian', 'exit']
        print('Pilih program')

        for i in range(len(list_program)):
            print(f'{i+1}. {list_program[i]}')

        pilihan = int(input("Masukkan Pilihan: "))
        if pilihan == 1:
            penjumlahan()
        elif pilihan == 2:
            pengurangan()
        elif pilihan == 3:
            perkalian()
        elif pilihan == 4:
            pembagian()
        elif pilihan == 5:
            print('Terimakasih, telah menggunakan kalkulator Ahmad Tibrizi')
            break
        else:
            print("Input anda salah, silahkan coba lagi")


def penjumlahan():
    angka1 = int(input("Masukkan nilai pertama: "))
    angka2 = int(input("Masukkan nilai kedua: "))
    hasil = angka1 + angka2
    print(f'Hasil penjumlahan antara {angka1:.2f} dengan {angka2:.2f} adalah {hasil:.2f}')


def pengurangan():
    angka1 = int(input("Masukkan nilai pertama: "))
    angka2 = int(input("Masukkan nilai kedua: "))
    hasil = angka1 - angka2
    print(f'Hasil pengurangan antara {angka1:.2f} dengan {angka2:.2f} adalah {hasil:.2f}')


def perkalian():
    angka1 = int(input("Masukkan nilai pertama: "))
    angka2 = int(input("Masukkan nilai kedua: "))
    hasil = angka1 * angka2
    print(f'Hasil perkalian antara {angka1:.2f} dengan {angka2:.2f} adalah {hasil:.2f}')


def pembagian():
    angka1 = int(input("Masukkan nilai pertama: "))
    angka2 = int(input("Masukkan nilai kedua: "))
    hasil = angka1 / angka2
    print(f'Hasil pembagian antara {angka1:.2f} dengan {angka2:.2f} adalah {hasil:.2f}')

if __name__ == "__main__":
    program()
