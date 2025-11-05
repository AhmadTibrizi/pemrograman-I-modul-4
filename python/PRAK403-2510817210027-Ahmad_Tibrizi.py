angka1 = int(input(("Masukkan angka pertama: ")))
angka2 = int(input(("Masukkan angka kedua: ")))

def silang(angka_besar, angka_kecil):
    selisih = angka_besar-angka_kecil + 1
    list_angka_besar = []
    list_angka_kecil = []
    for i in range(selisih):
        list_angka_besar.append(angka_besar-i)
        list_angka_kecil.append(angka_kecil+i)

    return [list_angka_besar, list_angka_kecil]
    
if angka1 > angka2:
    res = silang(angka1, angka2)
    list1 = res[0]
    list2 = res[1]
    for i in range(len(list1)):
        if i != len(list1)-1:
            print(list1[i], list2[i], end= ' - ')
        else:
            print(list1[i], list2[i])

else:
    res = silang(angka2, angka1)
    list1 = res[0]
    list2 = res[1]
    for i in range(len(list1)):
        if i != len(list1)-1:
            print(list2[i], list1[i], end= ' - ')
        else:
            print(list2[i], list1[i])