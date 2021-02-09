nombres = ["Maximo", "Cesar", "Magaly", "Francisco"]
print(nombres[1])
#Agrega un valor en ese index y el resto se recorr
nombres.insert(1, "Victoria")
print(nombres)
nombres.remove("Maximo")
print(nombres)
secuencia_num = [2,4,6,8,10]
print(secuencia_num)
#secuencia_num.extend(nombres) es para combinar ambas listas
secuencia_num.extend(nombres)
# append es para agregar un valor a una lista
secuencia_num.append("Mateo")
print(secuencia_num)
#sort es para orden alfabetico, ".reverse" voltea el orden de la lista
nombres.sort()
print(nombres)
