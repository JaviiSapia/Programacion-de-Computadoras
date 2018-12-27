#include<stdio.h>
#include<conio.h>
#include<locale.h>



int main()
    {

    //Funcion nueva que me permite las tildes y las �
    setlocale(LC_CTYPE,"Spanish");



    char cad[3];//forma de reservar memoria para una cadena
    //esta es la forma correcta de declarar una cadena
    // \0 es el caracter de fin de una cadena


    char cad1[4]={'a','A','1','2'};//yo no tengo problemas con mostrar esta cadena--->>> asigno un caracter a cada posici�n
    //dependiendo del compilador podr�a tirar error, ya que no tiene el caracter de fin de cadena


    char cad2[4]={'A','B','C','D'};

    char cad3[]={'1','2','3','4'};//el compliador reserva cuatro espacios para los cuatro caracteres especificados

    char cad4[9]={'a','b','c','d'};//aqu�, como reserv� lugar de sobra, el compilador cuenta con lugar para colocar \0
    //el resto de los espacios reservados se completan con \0, algo similar a lo que ocurre en el caso de los vectores comunes
    //cuando hay lugar de sobra, donde el compilador completa con cero


    char cad5[]="1234";//al poner comillas dobles estoy indicando que se trata de una cadena, y como o indico
    //el tama�o tiene lugar para colocar \0 y reserva las posiciones de memoria necesarias para guardar la ceadena y el \0
    //las comillas dobles est�n explicitando que el �ltimo carcter de la cadens debe ser el caracter de fin de cadena


    char cad6[3]="Sol";//aqu� no hay espacio para poner el \0, por lo que no se coloca, ya que se prioriza guardar los caracteres
    //al mostrar, puede verse la cadena anterior.. se detiene la impresi�n en pantalla cuando se encuentra el \0


    char cad7[3]="Lluvia";//�dem.. se prioriza guardar los tres caracteres que caban, y no se pone el \0.. al mostrar aparecen las cadenas anteriores

    char *cad8="Constantinopla";//se guarda el dato perfectamente..

    *cad1='z';//se puede modificar el contenido de una cadena

    //*cad8='z';//explota, ya que estoy invadiendo memoria.. yo solo declare un puntero, no tama�o, por ello, no puede modificar algo fuera de esa direcci�n

    //cad1++; esto no puede hacerse ya que cad1 es un puntero constante a la direcci�n del primer elemento de la cadena
    //el contenido puede modifiacarse, pero no el puntero

    //cad8++; al mostrar aparece onstantinopla
    //esto se puede hacer ya que es un puntero com�n y corriente.. no puede modificar el contenido, pero s� puede mover el puntero
    //ac� mov� el puntero, por lo tanto, cuando quiero mostrar, veo a partir del segundo caracter



    //NO DECLARAR CADENAS COMO LA OCTAVA CADENA ya que despu�s no puedo mofificar la cadena

    // cad1=cad2  -->>>>>> HORROR--->>>>> esto no puede hacerse, ya que as� no estoy asignando el contenido de una en la otra
    // lo que estoy intentando hacer es que apunten a la misma direcci�n.. cosa que notiene sentido ya que son punteros constantes
    // LAS VARIABLES DIMENSIONADAS NO PUEDEN ASIGNARSE CON =       OJOOOO!!!!

    printf("\n\n CADENAS DE CARACTERES \n");
    printf("\n cadena 1: \t %s",cad1);
    printf("\n cadena 2: \t %s",cad2);//al mostrar esta cadena muestra tambi�n cad1 ya que cad2 no tiene el \0 y no sabe d�nde parar
    //el orden en que muestra se debe a que el compilador reserva memoria de forna inversa a como el programador declara


    printf("\n cadena 3: \t %s",cad3);//�dem caso anterior-->>> se agregan al final las cadenas de m�s arriba
    printf("\n cadena 4: \t %s",cad4);//OK
    printf("\n cadena 5: \t %s",cad5);
    printf("\n cadena 6: \t %s",cad6);
    printf("\n cadena 7: \t %s",cad7);
    printf("\n cadena 8: \t %s",cad8);

    printf("\n\n TAMA�O DE LAS CADENAS \n");
    printf("\n sizeof cadena 1: %d",sizeof(cad1));
    printf("\n sizeof cadena 2: %d",sizeof(cad2));
    printf("\n sizeof cadena 3: %d",sizeof(cad3));
    printf("\n sizeof cadena 4: %d",sizeof(cad4));
    printf("\n sizeof cadena 5: %d",sizeof(cad5));
    printf("\n sizeof cadena 6: %d",sizeof(cad6));
    printf("\n sizeof cadena 7: %d",sizeof(cad7));
    printf("\n sizeof cadena 8: %d",sizeof(cad8)); //reserv� espacio para una direcci�n de memoria
    printf("\n\n");
    getch();


    return 0;
    }
