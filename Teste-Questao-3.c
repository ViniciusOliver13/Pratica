# include <stdio.h>
int main ( ) {
    int N_ant , N_prox , N , N_atual      //1� Ao final da linha faltou ";".  
    N_ant = N_atual =1;

for( i = 1 ,i <= N , i ++) {              //2� Vari�vel 'i' n�o foi declarada. 3� Na declara��o 
    N_prox = N_ant + N_atual ;            //da estrutura 'for' � usando "," ao inv�s de ";". 
    N_ant = N_atual ;                     //4� Foi aberto uma chave({) que n�o foi completada. 
    N_atual = N_prox ;                    //5� A vari�vel 'N' n�o foi inicializa.   

printf ("Fim do laco !\n") ;

return                                    //6� Faltou adicionar o n�mero 0 depois do 'return' e 
}                                         //ao final ";".  
