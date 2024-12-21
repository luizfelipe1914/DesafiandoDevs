#!/usr/bin/env python3

def isBissextile(number):
    if(number %4 == 0):
        if(number % 100 == 0 and number % 400 != 0):
            return False
        return True
    return False

def main():
    value = int(input("ANO: "))
    print(isBissextile(value))

if __name__ == '__main__':
    main()