/** PROGRAMA EN JAVA PARA GUARDAR LAS VARIABLES MEDIANTE LA CLASE "java.util.scanner"
* Hecho por: Enrique Rodriguez Vela 14/12/17
* Version 0.1
* Sistema operativo: Lubuntu
* IDE Usado : Dr Java 
*/

// Importamos las librerias

import junit.framework.TestCase;
import java.util.*;
import java.util.Scanner;


public class main extends TestCase { // Clase principal MAIN 
  
  public void testX() {
    { // En este corchete esta lo esencial para poder guardar texto en la variables tipo string 
   
      String variableString; // cadena tipo varible para poder guardar el texto escrito 
   
  Scanner entrada=new Scanner(System.in);// se declara e inicializa una instancia  de la clase Scanner.
   
  System.out.print("Ingrese un texto 1: "); // pregunta para ingresar el texto 01
   
  variableString = entrada.next(); // la cadena variable es igual a la entrada del texto 1 
   
  System.out.println("Texto ingresado 1: "+variableString); // variable 1 + el texto ingresado
    }
{
    String variableString;
   
  Scanner entrada01=new Scanner(System.in);
   
  System.out.print("Ingrese un texto 2: ");
   
  variableString = entrada01.next();
   
  System.out.println("Texto ingresado 2: "+variableString);
    }

  }
  
}
