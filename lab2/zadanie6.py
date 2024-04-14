sec=int(input("Enter sec: "))
result=sec/60
if sec<60:
  print(str(sec)+" secund")
if 60<sec<3600:
  print(str(result)+" minutes")
if sec>3600:
  result=float(sec)*0.00028
  print(str(result)+" hours")

