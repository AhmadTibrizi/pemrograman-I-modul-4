ganjil = []
genap = []
angka = int(input("Masukkan Angka: "))

for i in range(1, angka+1):
    if i % 2 == 0:
        genap.append(i)
    else:
        ganjil.append(i)

for i in ganjil:
    print(i, end=' ')
print()
for i in genap[::-1]:
    print(i, end=' ')
print()