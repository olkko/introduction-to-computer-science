#skończone
n=1
while n!=10 and n!=0:
  n = int(input("Enter n: "))
  m=1
  if n < 0:
    print("None")
  if n >= 0:
    for i in range (1, n+1):
      m=m*i
      print(m)
