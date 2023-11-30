#include <stdio.h>
int main ( ) {
int i ;
for ( i = 1 ; i <= 100 ; i *= 100) {
    if ( i ==30 ) {
        break ;
    }
else{
    printf ("%2d\n" ,2* i ) ;
    }
}
printf ("Fim do laco !\n") ;

return 0;
}
/*Na 1º vez que é feito o laço de repetição 'for' o conteúdo impresso na tela é o valor 2.
2º vez da repetição é impresso na linha de baixo o valor 200.
3º Ao sair do laço é impresso a mensagem "Fim do laco".
*/