def fib_tail(n, n1=0, n2=1):
    if n == 0 or n == 1:
        return n2
    else:
        return fib_tail(n-1, n2, n1+n2)
    
def main():
    print(fib_tail(1))
main()