# Display7segmentos

Libreria para manejar display de 7 segmentos de anodo o catodo comun.

///Funciones
Constructor: - Display <nombre>(a,b,c,d,e,f,g,a/c);
    donde a,b,c,d,e,f: corresponde a los pines del arduino donde esta conectado el 
                        pin del display.
                  a/c: se define con "HIGH" para catodo comun y "LOW" para anodo comun.
    
Funciones:
            print(n) ---- Imprime en el display el numero entregado en el argumento. 
                            el argumento es un numero entero entre 0 y 9.
            
            cero()
            uno()
            dos()
            tres()
            cuatro()
            cinco()
            seis()
            siete()
            ocho()
            nueve()         Imprimen unicamente el numero indicado en la funcion.             