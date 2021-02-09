#Que pida 4 numeros
# Sacar promedio, sumar los numeros y dividirlos entre la cantidad de numeros
num1 = "texto"
num2 = "texto"
num3 = "texto"
num4 = "texto"

def recopilacion_datos():
    num1 = (input("Escribe el primer numero "))
    num2 = (input("Escribe el segundo numero "))
    num3 = (input("Escribe el tercer numero "))
    num4 = (input("Escribe el cuarto numero "))

recopilacion_datos()

promedio = (num1+num2+num3+num4)/4

def resultado():
    print ("El promedio de los numeros es ",promedio)

if num1.isalpha() == True:
    print("Coloca un numero")
    recopilacion_datos()
    resultado()


elif num2.isalpha() == True:
    print("Coloca un numero")
    recopilacion_datos()
    resultado()


elif num3.isalpha() == True:
    print("Coloca un numero")
    recopilacion_datos()
    resultado()


elif num4.isalpha() == True:
    print("Coloca un numero")
    recopilacion_datos()
    resultado()


else:
        num1 = float(num1)
        num2 = float(num2)
        num3 = float(num3)
        num4 = float(num4)

resultado()
