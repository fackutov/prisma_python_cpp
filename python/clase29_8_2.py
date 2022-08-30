# dado una nota solicitado al usuario 
# si esa nota esta entre 1 y 4 imprimir  'NO APROBADO'
# si esa nota esta entre entre 5 y 7 imprimir 'APROBADO PASA A ORAL'
# si esa nota esta entre  8 y 9 imprimir  'APROBADO'
# si esa nota es 10 inprimir 'APROBADO CON MERITO' 

# operador de condicion logica
# and (y)
# Or (o)
# Not (opuesto)


# supongamos el siguiente enunciado:
# si hoy llueve (y-and) no trabajo, voy al cine
#         F                   F           F
#         V                   F           F
#         F                   V           F
#         V                   V           V


# otro enunciado
# si hoy llueve (o-or) no trabajo, voy al cine
#        F                  F           F
#        V                  F           V
#        F                  V           V
#        V                  V           V

from tkinter import E


while True:
    try:
        nota = int(input('decime una nota: '))

        if (nota >=1 and nota <= 4):
            print ('NO APROBADO')

        elif (nota >=5 and nota <= 7):
            print ('APROBADO PASA A ORAL')

        elif (nota == 8 or nota == 9):
            print ('APROBADO')
        
        elif (nota == 10):
            print ('APROBADO CON MERITO')
        
        else:
            print ('La nota no debe ser menor a 0 ni mayor a 10')

    except ValueError:
        print (' Solo pedi numeros ')