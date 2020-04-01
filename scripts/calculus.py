# ----------- INITIALISATION -------------------------- 

def init_ustack40(arg):
  res = arg ^ 416658871 + 8166260367360
  # print("ustack40 = %s" % (hex(res)))
  return res

def init_ustack32(arg):
  res = arg - 87772468 | init_ustack40(arg) | 157852680
  # print("ustack32 = %s" % (hex2(res)))
  return res
  # Le résultat de ustack32 à la fin peut avoir été modifié par rapport à son initialisation

def init_102_0_8(arg):
  res = arg | 3089645922133454251;
  # print("102_0_8 = %s" % (hex2(res)))
  return res

def init_102_8_8(arg):
  res = (arg | 224286036) - 1138966739;
  # print("102_8_8 = %s" % (hex2(res)))
  return res

def init_107_0_8(arg):
  # 26U est enfait 0x76ca926
  res = arg + init_102_0_8(arg) >> (init_ustack32(arg) + 124561702 & 15 | 1) | arg + init_102_0_8(arg) << (64 - (init_ustack32(arg) + 124561702 & 15 | 1) & 63)
  hex_res = hex(res)
  hex_res_print = "0x"+hex_res[-16:] # Pour garder que les 16 hexas des 8 octets (gdb crop le résultat?)
  # print("107_0_8 = %s" % (hex_res_print))
  return res

def init_107_8_8(arg):
  res = (arg + 0x2297cfce) * ((arg | 0x2ae0a098b67fadab) + 0xb99206a)
  hex_res = hex(res)
  hex_res_print = "0x"+hex_res[-16:] # Pour garder que les 16 hexas des 8 octets (gdb crop le résultat?)
  # print("107_8_8 = %s" % (hex_res_print))
  return res

# ----------- COMPARAISON -----------------
def comp1(arg):
  # Regarde que le bit de poid 1 est à 1 (prendre le dernier hexa, qui fait 4 bits et regarder)
  res = (init_107_8_8(arg) >> 1 & 1 != 0)
  print("comp1 = %r" % (res))
  return res

def comp2(arg):
  # Regarde que le bit de poid 3 est à 1 (prendre le dernier hexa, qui fait 4 bits et regarder)
  res = (init_107_0_8(arg) >> 3 & 1 != 0)
  print("comp2 = %r" % (res))
  return res

def comp21(arg):
  # Regarde que le bit de poid 3 est à 1 (prendre le dernier hexa, qui fait 4 bits et regarder)
  res = ((init_ustack32(arg) >> 1 & 1) == 0)
  print("comp21 = %r" % (res))
  return res

def comp211(arg):
  # Regarde que le bit de poid 3 est à 1 (prendre le dernier hexa, qui fait 4 bits et regarder)
  res = ((init_107_8_8(arg) >> 1 & 1) == 0)
  print("comp211 = %r" % (res))
  return res

# -------------- MAIN -------------------------

def calculus(arg):
  ustack32 = init_ustack32(arg)
  ustack40 = init_ustack40(arg)
  v10208 = init_102_0_8(arg)
  v10288 = init_102_8_8(arg)
  v10708 = init_107_0_8(arg)
  v10788 = init_107_8_8(arg)

  if(v10788 >> 1 & 1 != 0): # comp1
    print("Do comp1 modification")
  if(v10708 >> 3 & 1 != 0): # comp2
    if((ustack32 >> 1 & 1) == 0): # comp21
      print("Do comp21 modification")
    else:
      if((v10788 >> 1 & 1) == 0): # comp211
        print("Do comp211 modification")
    """
    if(comp22(arg)):
    else:
      if(comp221(arg)):
        if(comp2211(arg)):
        if(comp2212(arg)):  
      else:
        if(comp2213(arg)):
        else:
          if(comp22131(arg)): """


# -------------- TOOLS ------------------------

def convert_hex_dec(arg):
  """ Give arg as a string "0x10" or "10" """
  res = int(arg, 16)
  print(res)

def convert_dec_hex(arg):
  res = hex(arg)
  print(res)

def hex2(val):
  # Fonction pour que les valeurs négatives passe bien en donnant le support de bits
  if(val <0):
    nbits = 64
    return hex((val + (1 << nbits)) % (1 << nbits))
  else:
    return hex(val)



if __name__ == "__main__":
    
    # 0x7ec75039beb6547c
    print("salut")