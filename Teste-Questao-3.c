# include <stdio.h>
int main ( ) {
    int N_ant , N_prox , N , N_atual      //1º Ao final da linha faltou ";".  
    N_ant = N_atual =1;

for( i = 1 ,i <= N , i ++) {              //2º Variável 'i' não foi declarada. 3º Na declaração 
    N_prox = N_ant + N_atual ;            //da estrutura 'for' é usando "," ao invés de ";". 
    N_ant = N_atual ;                     //4º Foi aberto uma chave({) que não foi completada. 
    N_atual = N_prox ;                    //5º A variável 'N' não foi inicializa.   

printf ("Fim do laco !\n") ;

return                                    //6º Faltou adicionar o número 0 depois do 'return' e 
}                                         //ao final ";".  
