num1 = float(input("Ingresa el primer numero "))
num2 = float(input("Ingresa el segundo numero "))

residuo = (num1%num2)

if residuo == 0:
    print ("El resultado es ", residuo, ", es exacta")

else:
    print ("El resultado es ", residuo, ", no es exacta")
