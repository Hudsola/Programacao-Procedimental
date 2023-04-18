#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

// Programacao Procedimental - LAB04 Laços

/* Exercicio 1
int main (){
    int contador, resultado;
    for (contador = 1; contador <= 5; contador++){
        resultado = 3*contador;
        printf("O multiplo %d de 3 eh %d. \n", contador, resultado);;
    }
return 0;
}
*/

/* Exercicio 2
int main (){
    int contadorfor = 1;
    int contadorwhile = 1;
    int contadordowhile = 1;
    printf("Usando for: \n");
    if (contadorfor <= 100){
        for (contadorfor = 1; contadorfor <= 100; contadorfor++){
        printf("%d \n", contadorfor);
        }
    }
    printf("Usando while: \n");
    if (contadorwhile <= 100){
        while (contadorwhile <= 100){
        printf("%d \n", contadorwhile);
        contadorwhile ++;
        }
    }
    printf("Usando do while: \n");
    if (contadordowhile <= 100){
        do {
        printf("%d \n", contadordowhile);
        contadordowhile ++;
        }
        while (contadordowhile <= 100);{
        }
    }
return 0;
}
*/

/* Exercicio 3
int main (){
    int contagem = 10;
    while (contagem >= 0){
        printf("%d \n", contagem);
        contagem = contagem - 1;
    if (contagem == -1){
        printf("FIM!");
        }
    }
return 0;
}
*/

/* Exercicio 4
int main (){
    int inteiro;
    int constante = 1000;
    for (inteiro = 0; inteiro < 100000;){
        printf("%d \n", inteiro);
        inteiro = inteiro+constante;
    }
return 0;
}
*/

/* Exercicio 5
int main(){
    int valor, contador, somatotal = 0;
    for (contador = 1; contador <= 10; contador++){
        printf("Digite o %d valor: \n", contador);
        scanf("%d", &valor);
        somatotal = somatotal + valor;
    }
    printf("A soma total dos numeros eh: %d", somatotal);
return 0;
}
*/

/* Exercicio 6
int main (){
    int inteiro, valortotal = 0, i;
    float media;
    for (i = 0; i < 10; i++){
        printf("Digite um numero inteiro: ");
        scanf("%d", &inteiro);
        valortotal = valortotal + inteiro;
    }
    if (i == 10){
        media = valortotal/i;
        printf("A media dos 10 numeros eh: %.2f", media);
    }
    return 0;
}
*/

/* Exercicio 7
int main (){
    int inteiro, valortotal = 0, i;
    float media;
    for (i = 0; i < 10; i++){
        printf("Digite um numero inteiro: ");
        scanf("%d", &inteiro);
        if (inteiro > 0){
        valortotal = valortotal + inteiro;
        }
        else {
            printf("Digite um numero positivo! \n");
            break;
        }
    }
    if (i == 10){
        media = valortotal/i;
        printf("A media dos 10 numeros eh: %.2f", media);
    }
    return 0;
}

*/

/* Exercicio 8
int main(){
    int i, j,ma;
    int a[10];
    printf("Digite 10 numeros: \n");
    for(i=0; i<10; i++){
        scanf("%d", &a[i]);
    }
    j=a[i];
    for(i=0; i<10; i++){
        if(a[i]<j){ j=a[i];}
    }
    for(i=0; i<10; i++){
        ma=0;
        if(a[i]>ma){ ma=a[i];}
    }
    printf("maior: %d\nmenor: %d\n",j, ma);
return 0;}
*/

/* Exercicio 9
int main(){
    int num, i, na;
    printf("Digite um numero: \n");
    scanf("%d", &num);
    i=0;
    while(i<num){
        na=i%2;
        if(na==1){printf("%d ", i);}
        i++;}
return 0;}
*/

/* Exercicio 10
int main(){
    int i, num = 0;
    printf("Soma dos 50 primeiros numeros pares: \n");
    for(i=0; i<=100; i++){
        if(i%2 == 0){
            num = num+i;
        }
    }
    printf("soma = %d", num);
return 0;}*/

/* Exercicio 11
int main(){
    int i, num;
    printf("digite um numero: ");
    scanf("%d", &num);
    for(i=0; i<=num; i++)
    printf("%d ", i);
return 0;}
*/

/* Exercicio 12
int main(){
    int num, i, soma=0;
    printf("Digite um numero: \n");
    scanf("%d", &num);
    for(i=1; i<num; i++){
        if(num%i == 0){
            soma = soma+i;
        }
    }
    printf("soma de todos os divisores: %d\n", soma);
return 0;}*/

/* Exercicio 13
int main(){
    int i, num = 0;
    for(i=0; i<1000; i++){
        if(i%3 == 0 || i%5 == 0){
            num=num+i;
        }
    }
    printf("%d", num);
return 0;}*/

/* Exercicio 14
int main(){
    int d1, d2, n, i;
    printf("Digite quantas vezes voce quer lancar os dados: \n");
    scanf("%d", &n);
    srand (time(NULL));
    for(i=0; i<n; i++){
        d1 = rand() %6;
        d2 = rand() %6;
        if (d1>d2){printf("%d > %d\n", d1, d2);}
        else if (d1<d2){printf("%d < %d\n", d1, d2);}
        else printf("%d = %d\n", d1, d2);
    }
return 0;}*/

/* Exercicio 15
int main(){
    int conjunto[50];
    int i, quad, cub, raiz;
    printf("Digite os numeros do seu conjunto: \n");
    for (i=1; i>0; i++){
        scanf("%d", &conjunto[i]);
        if (conjunto[i] == 0){break;}
        quad = conjunto[i]*2;
        cub = conjunto[i]^3;
        raiz = sqrt(conjunto[i]);
        printf(" quadrado: %d\n cubo: %d\n raiz: %d\n", quad, cub, raiz);
        printf("Digite '0' para sair.\n");
    }
return 0;}*/

/* Exercicio 16
int main(){
   int n1, n2, res, opcao;
   int i;
   for(i=0; i>=0; i++){
   printf("Escolha uma opcao: \n");
   printf("1- Adicao\n2- Subtracao\n3- Multiplicacao\n4- Divisao\n5- SAIR\n");
   scanf("%d", &opcao);
   switch (opcao){
   case 1 : printf("digite os numeros: \n");
   scanf("%d %d", &n1, &n2);
   res = n1+n2;
   printf("resultado: %d\n", res);
    break;
    case 2 : printf("digite os numeros: \n");
   scanf("%d %d", &n1, &n2);
   res = n1-n2;
   printf("resultado: %d\n", res);
    break;
    case 3 : printf("digite os numeros: \n");
   scanf("%d %d", &n1, &n2);
   res = n1*n2;
   printf("resultado: %d\n", res);
    break;
   case 4 : printf("digite os numeros: \n");
   scanf("%d %d", &n1, &n2);
   res = n1/n2;
   printf("resultado: %d\n", res);
    break;
   case 5 : break;
   default:
    break;
   }
   if(opcao == 5){break;}
   }
return 0;}*/

/* Exercicio 17*/

int main(){
    srand(time(NULL));
    int faces[10] = {1,2,3,4,5,6,7,8,9,10};
    int b, i;
    char c;
    b = faces[rand()%10];
    i = 3+(rand()%4);
    if (b == 1){        // A
        c='A';
        printf("%c %c\n", c, i);}
    else if (b == 8){   // J
        c='J';
        printf("%c %c\n", c, i);}
    else if (b == 9){   // Q
        c='Q';
        printf("%c %c\n", c, i);}
    else if (b == 10){  // K
        c='K';
        printf("%c %c\n", c, i);}
    else 
    printf("%d de %c\n",b, i);

return 0;}