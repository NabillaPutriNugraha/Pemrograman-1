def print_cross(mulai, selesai):
    if mulai > selesai:

        for i in range(mulai, selesai - 1, -1):
            print(f"{i} {mulai + selesai - i}", end="")
            if i > selesai:
                print(" - ", end="")
    else:
        for i in range(mulai, selesai + 1):
            print(f"{i} {selesai - i + mulai}", end="")
            if i < selesai:
                print(" - ", end="")
    print()

def main():
    angka1, angka2 = map(int, input(" ").split())

    print_cross(angka1, angka2)
    
if __name__ == "__main__":
    main() 
 