#Multiplicacion = *, division = /, resta = -, potencias = ** (3**2), suma = +

#La linea de codigo from math import * me da acceso a mas funciones de matematicas  

#int Para numros enteros
#float para numeros decimales

print("--- Bienvenido a calculadora ---")
numero1 = float(input ("Escribe el primer numero "))
numero2 = float(input ("Escribe el segundo numero "))
operacion = (input("Elige el tipo de operacion [+ - / * **] " ))

suma = (numero1 + numero2)
resta = (numero1 - numero2)
division = (numero1 / numero2)
potencia = (numero1 ** numero2)
multiplicacion =  (numero1 * numero2)

print("El resultado de suma es ",suma) # O se puede print("El resultado es ",numero1+numero2)
print("El resultado de resta es ",resta)
print("El resultado de multiplicacion es ",multiplicacion)
print("El resultado division es ",division)
print("El resultado de potencia es ",potencia)
# la funcion pow "print(pow(3, 2))" es para subir el primer numero a la potencia del segundo

#Es mas eficiente definir dentro del if la variable pero tendria que ir todo arriba de todos los print finales para que esten definidos antes, ejemplo:
#if operacion == "+":
    #suma = (numero1 + numero2)
    #print("El resultado de operacion elegida es ", suma)

if operacion == "+":
    print("El resultado de operacion elegida es ", suma)
elif operacion == "*":
    print("El resultado de operacion elegida es ", multiplicacion)
elif operacion == "/":
    print("El resultado de operacion elegida es ", division)
elif operacion == "-":
    print("El resultado de operacion elegida es ", resta)
elif operacion == "**":
    print("El resultado de operacion elegida es ", potencia)
else:
    print("Operacion no validad")
