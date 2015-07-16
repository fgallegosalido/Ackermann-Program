# Ackermann-Program

Este es un programa cuya carga computacional crece de manera súper exponencial, hasta el punto que para
valores no muy grandes, el programa simplemente se rompe debido al enorme tiempo de ejecución.

Para ejecutar el programa en Linux, simplemente descarga el archivo e introduce en la terminal:

$ g++ ackermann.cpp -o ackermann

$ ./ackermann

El programa imprimirá valores muy rápido, pero ack(4,1) tarda un rato, y ack(4,2) simplemente es una cantidad muy 
grande de tiempo que el SO romperá el programa.
