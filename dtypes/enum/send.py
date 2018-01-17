import sys

def main():
    
    petrolpumps = ['ZLINE','MPD','QPD']
    parityTypes = ['noparity','odd','even']

    packet = 0
    for i in range(3):
        for j in range(3):
            packet = petrolpumps[i] + " "  +  parityTypes[j] 
        
            sys.stderr.write('In send program- Sending the packet\n')
            print (packet)

    return 1

main()

