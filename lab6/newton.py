def newton(n, k):
    if n >= k and k >= 0:
        if k == 0 or k == n:
            return 1
        else:
            return newton(n - 1, k - 1) + newton(n - 1, k)

def main():
    print(newton(6,5))
main()