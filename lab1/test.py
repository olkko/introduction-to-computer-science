def teftyd(n):
    if n>=0 and isinstance(n, int):
        if n == 0 or n==1:
            return 1
        if (n % 2) == 0:
            return teftyd(n-1)+n
        if (n % 2) != 0:
            return teftyd(n-1)*n
    
def main():
    print(teftyd(2))
main()