import sys

def main():
    print("command line arguments")
    print("",sys.argv)

    for i in range(0, len(sys.argv),1):
        print("",i,":",sys.argv[i])
    return 0

main()
