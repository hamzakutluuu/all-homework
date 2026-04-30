import csv
import sys

def main():
    # Dosya yolu
    filename = "data/students.csv"

    try:
        with open(filename, "r") as file:
            # DictReader sütun başlıklarını (name, house) anahtar olarak kullanır
            reader = csv.DictReader(file)

            print(f"{'İsim':<10} | {'Bina'}")
            print("-" * 25)

            for row in reader:
                print(f"{row['name']:<10} | {row['house']}")

    except FileNotFoundError:
        sys.exit("Dosya bulunamadı!")

if __name__ == "__main__":
    main()
