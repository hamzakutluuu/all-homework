notlar = []
adet = int(input("Kaç tane not gireceksiniz?: "))

for i in range(adet):
    n = float(input(f"{i+1}. notu girin: "))
    notlar.append(n)

# Ortalamayı hesapla
ortalama = sum(notlar) / len(notlar)

print(f"Not ortalamanız: {ortalama:.2f}")

if ortalama >= 50:
    print("Geçtiniz!")
else:
    print("Kaldınız.")
