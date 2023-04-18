#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <time.h>

// Programacao Procedimental - LAB03 Condicionais

/* Exercicio 1
int main()
{
    int x,y;
    printf("Digite dois numeros separados por espaco(X Y): \n");
    scanf("%d %d", &x, &y);
    if (x > y){
        printf("O numero X eh maior!");
    }
    if (x = y){
        printf("Os dois numeros sao iguais!");
    }
    else{
        printf("O numero Y eh maior!");
    }
    return 0;
}
*/

/* Exercicio 2
int main (){
    float x;
    printf("Digite um numero: \n");
    scanf("%f", &x);
    if (x >= 1){
        x = x*x;
        printf("O numero digitado ao quadrado eh: %.1f", x);
    }
    if (x < 0){
        printf("O numero eh invalido!");
    }
return 0;
}
*/

/* Exercicio 3
int main (){
    float x;
    printf("Digite um numero: \n");
    scanf("%f", &x);
    if (x >= 1){
        x = sqrt(x);
        printf("%f", x);
    }
    else{
        x = x*x;
        printf("%f", x);
    }
return 0;
}
*/

/* Exercicio 4
int main (){
    float x,quadrado,raizquadrada;
    printf("Digite um numero: \n");
    scanf("%f", &x);
    if (x >= 1){
        quadrado = x*x;
        printf("O numero ao quadrado eh: %.2f \n", quadrado);
        raizquadrada = sqrt(x);
        printf("A raiz quadrada do numero eh: %.2f", raizquadrada);
    }
    else{
        printf("Numero invalido!");
    }
return 0;
}
*/

/* Exercicio 5
int main (){
    int x, y, resto;
    printf("Digite um numero: \n");
    scanf("%d", &x);
    resto = x % 2;
    if (resto == 0){
        printf("O numero eh par!\n");
    }
    else{
        printf("O numero eh impar!");
    }
return 0;
}
*/

/* Exercicio 6
int main (){
    int x, y, diferenca;
    printf("Digite dois numeros inteiros separados por espaco: \n");
    scanf("%d %d", &x, &y);
    diferenca = x - y;
    if (x > y){
        printf("O numero maior eh: %d e a diferenca entre eles eh %d", x, diferenca);
    }
    else{
        printf("O numero maior eh: %d e a diferenca entre eles eh %d.", y, diferenca);
    }
return 0;
}
*/

/* Exercicio 7
int main (){
    float x, y, diferenca;
    printf("Digite dois numeros separados por espaco: \n");
    scanf("%f %f", &x, &y);
    if (x > y){
        printf("O numero maior eh: %.2f", x);
    }
    if (y > x){
        printf("O numero maior eh: %.2f", y);
        }
    else{
        printf("Numeros iguais");
    }
return 0;
}
*/

/* Exercicio 8
int main(){
    float nota1, nota2, media;
    printf("Digite duas notas separadas por espaco: \n");
    scanf("%f %f", &nota1, &nota2);
    media = (nota1 + nota2)/2.0;
     if (0.0 <= nota1 <= 10.0 && 0.0 <= nota2 <= 10.0){
                printf("A media entre as notas eh: %f", media);
        }
    else {
        printf("Algum ou todos os numeros digitados nao estao entre 0.0 e 10.0.");
    }
return 0;
}
*/

/* Exercicio 9
int main (){
    float salario, prestacao, parcelas;
    printf("Digite o salario do trabalhador: \n");
    scanf("%f", &salario);
    printf("Quantas parcelas? \n");
    scanf("%f", &parcelas);
    prestacao = salario/parcelas;
    if (prestacao > salario*0.2){
        printf("Emprestimo nao concedido.");
    }
    else{
        printf("Emprestimo concedido.");
    }
return 0;
}
*/

/* Exercicio 10
int main (){
    float altura, pesoideal;
    char sexo;
    printf("Qual a altura? \n");
    scanf("%f", &altura);
    printf("Qual o sexo? \n");
    scanf("%c", &sexo);

    switch (sexo)
    {
    case 'masculino':
        pesoideal = ((72.7*altura) - 58);
        printf("O peso ideal seria: %f", pesoideal);
        break;
    case 'feminino':
        pesoideal = ((62.1*altura) - 44.7);
        printf("O peso ideal seria: %f", pesoideal);
    default:
        printf("Digite masculino ou feminino!");
        break;
    }*/

/* Exercicio 11
int main (){
    int num,digito, total = 0;
    printf("Digite o numero: \n");
    scanf("%d", &num);
    while (num>0) {
        digito=num%10;
        total=total+digito;
        num=num/10;
    }
    printf("a soma eh %d.",total);
    return 0;
}*/

/* Exercicio 12
int main (){
    int num, resultado = 0;
    printf("Digite o numero.\n");
    scanf("%d", &num);
    if(num>0){
        resultado = log(num);
        printf("log de %d eh: %d", num, resultado);
    }
    else
    printf("numero invalido.");
    return 0;
}*/

/* Exercicio 13
int main(){
    int p1,p2,p3,nota=0;
    printf("Digite as notas de p1 a p3:\n");
    scanf("%d %d %d", &p1, &p2, &p3);
    p3=p3*2;
    nota = (p1+p2+p3)/3;
    if(nota>=60){
        printf("%d aprovado.", nota);
    }
    else
    printf("%d reprovado", nota);
    return 0;
}*/

/* Exercicio 14
int main(){
    float trab, aval, exam;
    float media = 0;
    printf("Digite as notas do trabalho, avaliacao e exame entre 0 a 10: \n");
    scanf("%f %f %f", &trab, &aval, &exam);
    trab = trab*2;
    aval = aval*3;
    exam = exam *5;
    media = (trab+aval+exam)/3;
    if (media <3){
        printf("Reprovado! %.2f\n", media);
    }
    else if(media <5){
        printf("Recuperacao: %.2f", media);
    }
    else
    printf("Aprovado %.2f", media);
    return 0;
}*/

/* Exercicio 15
int main (){
    int dia;
    printf("Digite um numero entre 1 e 7:\n");
    scanf("%d", &dia);
    switch (dia){
    case 1 : printf("Domingo.\n"); break;
    case 2 : printf("Segunda.\n"); break;
    case 3 : printf("Terca.\n"); break;
    case 4 : printf("Quarta.\n"); break;
    case 5 : printf("Quinta.\n"); break;
    case 6 : printf("Sexta.\n"); break;
    case 7 : printf("Sabado.\n"); break;
    default: break;
    }
return 0;}*/

/*Exercicio 16
int main (){
    int mes;
    printf("Digite um numero entre 1 e 12:\n");
    scanf("%d", &mes);
    switch (mes){
    case 1 : printf("Janeiro.\n"); break;
    case 2 : printf("Fevereiro.\n"); break;
    case 3 : printf("Marco.\n"); break;
    case 4 : printf("Abril.\n"); break;
    case 5 : printf("Maio.\n"); break;
    case 6 : printf("Junho.\n"); break;
    case 7 : printf("Julho.\n"); break;
    case 8 : printf("Agosto.\n"); break;
    case 9 : printf("Setembro.\n"); break;
    case 10 : printf("Outubro.\n"); break;
    case 11 : printf("Novembro.\n"); break;
    case 12 : printf("Dezembro\n"); break;
    default: break;
    }
return 0;}*/

/* Exercicio 17
int main(){
    float area, base_maior, base_menor, altura;
    printf("Digite os valores das bases e altura: \n");
    scanf("%f %f %f", &base_maior, &base_menor, &altura);
    area = (base_maior + base_menor) * altura / 2;
    printf("A area do trapezio eh: %.2f", area);
return 0;}*/

/* Exercicio 18
int main(){
    int menu;
    float a, b, result = 0;
    printf("Escolha uma opcao: 1 (Soma), 2 (Subtracao), 3 (Multiplicacao) ou 4 (Divisao).\n");
    scanf("%d", &menu);
    switch (menu){
    case 1 :
        printf("Digite os valores: ");
        scanf("%f %f", &a, &b);
        result = a+b;
        printf("O resultado eh: %.2f\n", result);
        break;
    case 2 :
        printf("Digite os valores: ");
        scanf("%f %f", &a, &b);
        result = a-b;
        printf("O resultado eh: %.2f\n", result);
        break;
    case 3 :
        printf("Digite os valores: ");
        scanf("%f %f", &a, &b);
        result = a*b;
        printf("O resultado eh: %.2f\n", result);
        break;
    case 4 :
        printf("Digite os valores: ");
        scanf("%f %f", &a, &b);
        result = a/b;
        printf("O resultado eh: %.2f\n", result);
        break;
    default: printf("Opcao invalida.\n");
        break;
    }
return 0;}*/

/* Exercicio 19
int main(){
int total, resto = 0;
printf("Digite o numero: \n");
scanf("%d", &total);
while (resto == 0){
resto = total%5;
if (resto == 0){
    printf("%d eh divisivel por 5.\n", total);
}
else
    printf("%d nao eh divisivel por 5.", total);
break;}
resto = total%3;
if(resto == 0){
    printf("eh divisivel por 3.\n");
}
else
    printf("%d nao eh divisivel por 3.", total);
return 0;}*/

/* Exercicio 20
int main(){
    int a,b,c;
    printf("Digite os valores de a,b,c: \n");
    scanf("%d %d %d", &a, &b, &c);
    if (a+b >c && b+c >a && a+c >b){
    if (a == b && a == c){
        printf("triangulo equilatero.");
    }
    else if(a == b){
        printf("triangulo isoceles");
    }
    else if (a !=b && a!=c){
        printf("triangulo escaleno");
    }
    }
    else printf("nao eh um triangulo.");
return 0;}
*/

/* Exercicio 21
int main (){
    int menu, a, b, c = 0;
    printf("Escolha uma opcao: \n");
    printf("1- Soma de 2 numeros.\n");
    printf("2- Diferenca entre 2 numeros (maior pelo menor).\n");
    printf("3- Produto entre 2 numeros.\n");
    printf("4- Divisao entre 2 numeros (o denominador nao pode ser zero).\n");
    scanf("%d", &menu);
    switch (menu)
    {
    case 1 :
        printf("Digite os dois valores: \n");
        scanf("%d %d", &a, &b);
        c = a+b;
        printf("Resultado eh: %d", c);
        break;
    case 2 :
        printf("Digite os dois valores: \n");
        scanf("%d %d", &a, &b);
        if(a<b){c = b-a;}
        else c = a-b;
        printf("Resultado eh: %d", c);
        break;
    case 3 :
        printf("Digite os dois valores: \n");
        scanf("%d %d", &a, &b);
        c = a*b;
        printf("Resultado eh: %d", c);
        break;
    case 4 :
        printf("Digite os dois valores: \n");
        scanf("%d %d", &a, &b);
        if (b>0){
        c = a/b;
        printf("Resultado eh: %d", c);}
        break;
    default: printf("Opcao invalida! \n");
        break;
    }
return 0;}*/

/* Exercicio 22
int main(){
    int idade, tempo;
    printf("Digite a idade e o tempo de trabalho: \n");
    scanf("%d %d", &idade, &tempo);
    if (idade >= 65 || tempo >= 30){
        printf("pode se aposentar.\n");
    }
    else if (idade >=60 && tempo >=25){
        printf("pode se aposentar.\n");
    }
    else printf("nao pode se aposentar.\n");
return 0;
}*/

/* Exercicio 23
int main(){
    int ano = 0;
    printf("digite o ano.\n");
    scanf("%d", &ano);
    if (ano%400 == 0 || (ano%4 == 0 && ano%100 !=0)){
        printf("%d eh ano bissexto!\n", ano);
    }
    else printf("%d nao eh ano bissexto\n", ano);
return 0;}
*/

/* Exercicio 24
int main(){
    float produto;
    int estado;
    printf("Digite o valor do produto: \n");
    scanf("%f", &produto);
    printf("Digite o estado destino do produto: \n");
    printf("(1)MG (2)SP (3)RJ (4)MS. \n");
    scanf("%d", &estado);
    switch (estado){
        case 1: 
        produto = produto*1.07;
        printf("Estado: MG.\n");
        printf("Valor do produto: %.2f\n", produto);
        break;
        case 2: 
        produto = produto*1.12;
        printf("Estado: SP.\n");
        printf("Valor do produto: %.2f\n", produto);
        break;
        case 3: 
        produto = produto*1.15;
        printf("Estado: RJ.\n");
        printf("Valor do produto: %.2f\n", produto);
        break;
        case 4: 
        produto = produto*1.08;
        printf("Estado: MG.\n");
        printf("Valor do produto: %.2f\n", produto);
        break;
    default: printf("opcao invalida.");
        break;
    }
return 0;}*/

/* Exercicio 25
int main(){ 
    float a, b, c, constante = 0;
    float resultado1 = 0,resultado2 = 0, delta = 0;
    printf("digite os valores de 'a','b' e 'c'.\n");
    scanf ("%f %f %f",&a, &b, &c);
    if (a==0) { printf("Nao eh equacao de segundo grau.\n");}
    delta = b*b;
    constante = -4 * a * c;
    delta = delta - constante;
    if (delta < 0) {printf("Nao existe raiz.\n");}
    if (delta >=0) {
        delta = sqrt(delta);
        resultado1 = (b* (-delta)) / (2*a);
        resultado2 = (b* delta) / (2*a);
        printf("Resultado: %.2f, %.2f", resultado1, resultado2);
        }
    return 0;}*/

/* Exercicio 26
int main (){
    int distancia, litros, consumo;
    printf("Digite a Distancia em km: \n");
    scanf("%d", &distancia);
    printf("Digite os Litros: \n");
    scanf("%d", &litros);
    consumo = distancia/litros;
    printf("consumo = %d. ", consumo);
    if (consumo<8){ printf("Venda o carro!\n");}
    else if (consumo <= 14) {printf("Economico!\n");}
    else printf("Super economico!\n");
    return 0;
}*/

/* Exercicio 27
int main(){
    int idade;
    printf("digite a idade do nadador: \n");
    scanf("%d", &idade);
    if(idade < 5){printf ("opcao invalida\n");}
    else if(idade < 8){printf ("infantil A\n");}
    else if(idade < 11){printf ("infantil B\n");}
    else if(idade < 14){printf ("Juvenil A\n");}
    else if(idade < 18){printf ("Juvenil B\n");}
    else printf ("Senior\n");
    return 0;
}*/

/* Exercicio 28
int main(){
    int a,b,c;
    int tipo;
    float geometrica, ponderada, harmonica, aritmetica;
    printf("Digite tres valores inteiros positivos: \n");
    scanf("%d %d %d", &a, &b, &c);
    printf("escolha uma opcao de media: \n");
    printf("(1) Geometrica (2) Ponderada (3) Harmonica (4) Aritmetica \n");
    scanf("%d", &tipo);
    if(tipo == 1){
        geometrica=pow((a*b*c),1.0/3.0);
        printf("resultado: %.2f\n", geometrica);
    }
    else if(tipo == 2){
        ponderada = (1*a+2*b+3*c)/3;
        printf("resultado: %.2f\n", ponderada);
    }
    else if(tipo == 3){
        harmonica = 1/(1/a + 1/b + 1/c);
        printf("resultado: .%2f\n", harmonica);
    }
    else if(tipo == 4){
        aritmetica = (a+b+c)/3;
        printf("resultado: %.2f\n", aritmetica);
    }
    else printf("Opcao invalida.");
    return 0;}
    */

/* Exercicio 29

int main(){

int a, b, i, resp, resultado, acertos = 0;

printf("Prova de matematica!\n");

srand( time(0));

for (int i = 0; i < 5; i++){
    a =  rand() % 100;
    b = rand() & 100;
    
    printf("Qual eh a soma de %d + %d ?\n",a, b);
    scanf("%d", &resp);
    printf("Sua resposta: %d\n", resp);
    resultado = a+b;

    printf("Resposta correta: %d\n", resultado);

    if(resp == resultado){
        acertos = acertos+1; 
        printf("Quantidade de acertos: %d\n", acertos);}
    else printf("Resposta incorreta.\n");
    }
return 0;
}*/

/* Exercicio 30
int main(){
    float a, b, c;
    printf("Digite tres valores: \n");
    scanf("%f %f %f", &a, &b, &c);
    if (a>b){
        if (b>c){
            printf("%f %f %f",c, b, a);
        }
        else if(a>c){
            printf("%f %f %f",b, c, a);
        }
        else printf("%f %f %f", b,a,c);
    }
    else if(a>c){printf("%f %f %f",c,a,b);}
    else if(b>c) printf("%f %f %f",a, c, b);
    else printf("%f %f %f", a, b, c);
return 0;}
*/

/* Exercicio 31
int main(){
    float alt, peso;
    printf("Digite sua altura e peso: \n");
    scanf("%f %f", &alt, &peso);
    if (alt <1.2 && peso <=60){printf("A");}
    else if (alt <1.2 && peso <=90){printf("D");}
    else if (alt <1.2 && peso >90){printf("G");}
    else if (alt <=1.7 && peso <60){printf("B");}
    else if (alt <=1.7 && peso <=90){printf("E");}
    else if (alt <=1.7 && peso >90){printf("H");}
    else if (alt >1.7 && peso <60){printf("C");}
    else if (alt >1.7 && peso <=90){printf("F");}
    else if (alt >1.7 && peso >90){printf("I");}
return 0;}*/

/* Exercicio 32
int main(){
    int cod, quant;
    float valor, vt = 0;
    printf("**ESPECIFICACAO - CODIGO - PRECO.**\n");
    printf("Cachorro quente - 100 - 1,20\n");
    printf("Bauru Simples - 101 - 1,30\n");
    printf("Bauru com Ovo - 102 - 1,50\n");
    printf("Hamburguer - 103 - 1,20\n");
    printf("Chesseburguer - 104 - 1,70\n");
    printf("Suco - 105 - 2,20\n");
    printf("Refrigerante - 106 - 1,00\n\n");

    cod = 1;

    while(cod !=0){
    printf("Digite o codigo do produto e a quantidade: \n");
    scanf("%d %d", &cod, &quant);
    printf("-- Digite 0 para finalizar o pedido. --\n\n");
    switch (cod){
        case 100 : valor = quant*1.2; break;
        case 101 : valor = quant*1.3; break;
        case 102 : valor = quant*1.5; break;
        case 103 : valor = quant*1.2; break;
        case 104 : valor = quant*1.7; break;
        case 105 : valor = quant*2.2; break;
        case 106 : valor = quant*1; break;
        case 0: break;
    default: printf("codigo invalido.\n"); break;
    }
    vt = vt+valor;
    }
    printf("Valor total do pedido: R$%.2f", vt);

return 0;}*/

/* Exercicio 33
int main(){
    float preco;
    printf("Digite o preço antigo: \n");
    scanf("%f", &preco);
    if(preco < 50) {preco = preco*1.05;}
    else if(preco <=100) { preco = preco*1.1;}
    else if(preco >100) {preco = preco*1.15;}
    if (preco <80){printf("Barato");}
    else if (preco <=120){printf("Normal");}
    else if (preco <=200){printf("Caro");}
    else if (preco >200){printf("Muito caro");}
return 0;}*/

/* Exercicio 34
int main (){
    int falta;
    float nota;
    printf("Numero de falta: \n");
    scanf("%d", &falta);
    printf("Nota: \n");
    scanf("%f", &nota);
    if(falta <=20){
        if (nota <4) { printf("E");}
        else if (nota <5) { printf("D");}
        else if (nota <7.5) { printf("C");}
        else if (nota <9) { printf("B");}
        else if (nota <10) { printf("A");}
    }
    else if(falta >20){
        if (nota <4) { printf("E");}
        else if (nota <5) { printf("E");}
        else if (nota <7.5) { printf("D");}
        else if (nota <9) { printf("C");}
        else if (nota <10) { printf("B");}
    }
return 0;}*/

/* Exercicio 35
int main(){
    int dia, mes, ano;
    printf("escreva a data / / \n");
    scanf("%d %d %d", &dia, &mes, &ano);
    if (ano%400 == 0 || (ano%4 == 0 && ano%100 !=0)){
        if (mes == 02){ 
            if(dia < 30){ printf("%d/%d/%d - data valida!\n", dia, mes, ano);}
            else printf("Data invalida");
        }
        else if (mes == 4 || mes == 6 || mes == 9 || mes == 11){
            if(dia < 31){ printf("%d/%d/%d - data valida!\n", dia, mes, ano);}
            else printf("Data invalida");
        }
        else if(mes <= 12){
            if(dia <= 31){ printf("%d/%d/%d - data valida!\n", dia, mes, ano);}
            else printf("Data invalida");
        }
    }
    if (mes == 02){ 
        if(dia < 29){ printf("%d/%d/%d - data valida!\n", dia, mes, ano);}
            else printf("Data invalida");
        }
        else if (mes == 4 || mes == 6 || mes == 9 || mes == 11){
            if(dia < 31){ printf("%d/%d/%d - data valida!\n", dia, mes, ano);}
            else printf("Data invalida");
        }
        else if(mes <= 12){
            if(dia <= 31){ printf("%d/%d/%d - data valida!\n", dia, mes, ano);}
            else printf("Data invalida");
        }
return 0;}*/

/* Exercicio 36
int main (){
    float vendas;
    printf("Digite o valor da venda: \n");
    scanf("%f", &vendas);
    if (vendas < 20000){
        vendas = vendas*0.14 + 400;
        printf("comissao = R$%.2f", vendas);}
    else if (vendas < 40000){
        vendas = vendas*0.14 + 500;
        printf("comissao = R$%.2f", vendas);}
    else if (vendas < 60000){
        vendas = vendas*0.14 + 550;
        printf("comissao = R$%.2f", vendas);}
    else if (vendas < 80000){
        vendas = vendas*0.14 + 600;
        printf("comissao = R$%.2f", vendas);}
    else if (vendas < 100000){
        vendas = vendas*0.14 + 650;
        printf("comissao = R$%.2f", vendas);}
    else if (vendas >= 100000){
        vendas = vendas*0.16 + 700;
        printf("comissao = R$%.2f", vendas);}
return 0;}*/

/* Exercicio 37
int main(){
    int entrada_horas, entrada_min, saida_horas, saida_min;
    int total_horas = 0, total_min = 0;
    float valor;

    printf("Digite a hora e os minutos de sua entrada: \n");
    scanf("%d %d", &entrada_horas, &entrada_min);
    printf("Digite a hora e os minutos de sua saida: \n");
    scanf("%d %d", &saida_horas, &saida_min);

    if(entrada_horas > saida_horas){
        if(entrada_min > saida_min){
            total_min = entrada_min-saida_min;
            total_horas = 24 - (entrada_horas-saida_horas);
            printf("total de horas: %d\n", total_horas);
            printf("total de minutos: %d\n", total_min);
            }
        else if(entrada_min<saida_min){
            total_min = 60 - (saida_min-entrada_min);
            total_horas = saida_horas - entrada_horas +24;
            printf("total de horas: %d\n", total_horas);
            printf("total de minutos: %d\n", total_min);
            }
        }

    else if(entrada_horas < saida_horas){
        if(entrada_min > saida_min){
            total_min = 60 -(entrada_min-saida_min);    
            total_horas = saida_horas - entrada_horas-1;
            printf("total de horas: %d\n", total_horas);
            printf("total de minutos: %d\n", total_min);
            }
        else {
            total_min = saida_min-entrada_min;
            total_horas = saida_horas - entrada_horas;
            printf("total de horas: %d\n", total_horas);
            printf("total de minutos: %d\n", total_min);
            }
        }
    else {
        total_horas = saida_horas - entrada_horas;
        if(entrada_min > saida_min){
            total_horas = 23;
            total_min = entrada_min-saida_min;
            printf("total de horas: %d\n", total_horas);
            printf("total de minutos: %d\n", total_min);

        }

    }
    if(total_horas = 1 && total_min > 0){ valor = 2;    }
    else if(total_horas <1 && total_min > 0){ valor = 1;    }
    else if(total_horas = 2 && total_min > 0){ valor = 3*1.4;    }
    else if(total_horas = 3 && total_min > 0){ valor = 4*1.4;    }
    else if(total_horas = 4 && total_min > 0){ valor = 5*2;    }
    else if (total_horas = 5 && total_min > 0){ valor = 6*2;  }
    else if (total_min =!0){ valor = (total_horas+1)*2;    }

    printf("Valor a ser pago: R$%.2f", valor);
    
    return 0;}
*/

/* Exercicio 38
int main(){
    int dia, mes, ano;
    printf("escreva a data / / \n");
    scanf("%d %d %d", &dia, &mes, &ano);
    if (ano%400 == 0 || (ano%4 == 0 && ano%100 !=0)){
        if (mes == 02){ 
            if(dia < 30){ printf("%d/%d/%d - data valida!\n", dia, mes, ano);}
            else printf("Data invalida");
        }
        else if (mes == 4 || mes == 6 || mes == 9 || mes == 11){
            if(dia < 31){ printf("%d/%d/%d - data valida!\n", dia, mes, ano);}
            else printf("Data invalida");
        }
        else if(mes <= 12){
            if(dia <= 31){ printf("%d/%d/%d - data valida!\n", dia, mes, ano);}
            else printf("Data invalida");
        }
    }
    if (mes == 02){ 
        if(dia < 29){ printf("%d/%d/%d - data valida!\n", dia, mes, ano);}
            else printf("Data invalida");
        }
        else if (mes == 4 || mes == 6 || mes == 9 || mes == 11){
            if(dia < 31){ printf("%d/%d/%d - data valida!\n", dia, mes, ano);}
            else printf("Data invalida");
        }
        else if(mes <= 12){
            if(dia <= 31){ printf("%d/%d/%d - data valida!\n", dia, mes, ano);}
            else printf("Data invalida");
        }
return 0;}
*/

/* Exercicio 39
int main(){
    int sal, temp;
    printf("Digite seu salario: \n");
    scanf("%d", &sal);
    printf("Tempo de servico: \n");
    scanf("%d", &temp);
    if(sal <= 500 && temp <1){
        sal = sal*1.25;
    }
    else if(sal <= 1000 && temp <4){
        sal = (sal*1.20)+100;
    }
    else if(sal <= 1500 && temp <7){
        sal = (sal*1.15)+200;
    }
    else if(sal <= 2000 && temp >10){
        sal = (sal*1.1)+300;
    }
    else if(sal > 2000){
        sal = sal+500;
    }
    else printf("Voce nao tem nenhum aumento.");
    printf("Novo salario: %d", sal);
return 0;}
*/

/* Exercicio 40
int main(){
    int cc, cn, cf, cd, i;
    printf("Custo de fabrica: \n");
    scanf("%d", &cf);
    if (cf <=12000){
            cd=cf*0.05;
            i=0;
    }
    else if(cf <=25000){
        cd=cf*0.1;
        i=cf*0.15;
    }
    else if(cf >25000){
        cd=cf*0.15;
        i=cf*0.2;
    }
    cc = cf+cd+i;
    printf("custo do consumidor: %d\n", cc);
return 0;}
*/