
def fib(n):
    if not isinstance(n,int):
        return None
    if n < 1:
        return None
    if n == 1 or n==2:
        return 1
    if n > 2:
        return fib(n-1) + fib(n-2)
    
def main():
    print(fib(40))
main()