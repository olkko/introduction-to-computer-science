from math import sin


def derivative(fun, x, h=0.0001):
    return (fun(x + h) - fun(x)) / h

def kwadrat(x):
    y = x**2
    return y

def main():
    print("sin(x) w punkcie 1 = ", derivative(sin, 1))
    print("sin(x) w punkcie 0 = ", derivative(sin, 0))
    print("x^2 w punkcie 1 z przyrostem 0.00001 = ", derivative(kwadrat, 1, 0.00001))
main()
