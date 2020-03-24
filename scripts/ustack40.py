def calculate(arg):
  res_decimal = (arg ^ 416658871) + 8166260367360
  res_hexa = hex(res_decimal)
  print(res_decimal)
  print(res_hexa)

if __name__ == "__main__":
    # execute only if run as a script
    calculate(14);