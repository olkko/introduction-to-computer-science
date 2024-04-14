import random
import math

x=random.randint(1,10)
count=0
t=3
while count<t:
  count+=1
  user_guess= int(input("Guess a number: "))
  if user_guess==x:
    print("You are winner!", count, t)
    break
  elif x>user_guess:
    print("Your number too small")
  elif x<user_guess:
    print("Your number is too high")
else:
  print("You lose")
  
     