#Asi se define una funcion
def mensaje():
    print("Este es un mensaje")

#Para correr la funcion solo se pone su nombre con parentesis
mensaje()

#El valor entre parentesis es un parametro que se puede utilizar en la funcion, al ejecutarlo puede especificar lo que va a decir
def mensaje2(nombre, fecha):
    print("Este es un mensaje para " + nombre + fecha)

mensaje2("Maximo ", "en 2020")
