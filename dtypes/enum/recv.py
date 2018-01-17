import sys


def main():
     with open("out") as f:
        for line in f:
            pump = line.split()
            print ("In recv program, Receiving the packet\n")
            print(pump[0] + " pump\n")
            print(pump[1] + " parity was used\n")
     return 1

      
main()
