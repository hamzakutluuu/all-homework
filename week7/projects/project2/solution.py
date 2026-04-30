import random

# 1 ile 100 arasında rastgele bir sayı seç
hedef = random.randint(1, 100)
tahmin = 0

print("1 ile 100 arasında bir sayı tuttum!")

while tahmin != hedef:
    tahmin = int(input("Tahminin nedir?: "))

    if tahmin < hedef:
        print("Daha yüksek!")
    elif tahmin > hedef:
        print("Daha düşük!")
    else:
        print(f"Tebrikler! Doğru sayı: {hedef}")
