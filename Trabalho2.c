 /**************************************  
 * Trabalho 2 de Programacao de Computadores I - Retangulo 
 * Curso de Sistemas da informacao 
 * Aluno: Matheus Pinheiro - matricula: 0050013552 
 * Professor: Alex Salgado
 ***************************************/
 #include <stdio.h>
 
 int main()
{
    int larg, alt, i, j, car, cont;
    cont=115;
   
    do
   { 
    
    printf ("Diga o caracter\n");
    car = getchar();
    
    printf ("Diga o tamanho da largura\n");
    scanf ("%d", &larg);
    
    printf ("Diga o tamanho da altura\n");
    scanf ("%d", &alt);
    
    printf("Olá, meu nome é Matheus e o retangulo ficou assim:\n");
    
    for(j=0;j<alt;j++)
    {
    for(i=0;i<larg;i++) 
    {
    printf("%c",car);
    }
    printf("\n");
        
    }
    printf("Deseja continuar(s = novo caracter/n = 2)?");
    scanf("%d", &cont);
       
   
    }while(cont==115);
    
 return 0;   
}