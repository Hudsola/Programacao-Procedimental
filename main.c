#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*EXERCICIO 1:

int main(){
int x; // variavel de numero inteiro
printf("Digite um numero inteiro: \n");
scanf("%d", &x);
printf("%d\n", x);
return 0;
}
*/

/*EXERCICIO 2:

int main(){
float x; // variavel de numero real
printf("Digite um numero real: \n");
scanf("%f", &x);
printf("%f\n", x);
return 0;
}
*/

/*Exercio 3:

int main(){
int x, y, z, s; // variavel de numeros inteiros e soma
printf("Digite um numero inteiro: \n");
scanf("%d %d %d", &x, &y, &z);
s = x+y+z;
printf("A soma dos numeros eh: %d\n", s);
return 0;
}
*/

/*Exerecicio 4:

int main(){
float x; // numero real
printf("Digite um numero real: \n");
scanf("%f", &x);
x = x*x;
printf("O quadrado do numero eh: %.2f\n", x);
return 0;
}
*/

/*Exercicio 5:

int main(){
float x; // numero real
printf("Digite um numero real: \n");
scanf("%f", &x);
x = x/5;
printf("A quinta parte desse numero eh: %.2f\n", x);
return 0;
}
*/

/*EXERCICIO 6:

int main (){
float tc, tf;   // Temperatura em C, Temperatura em F.
printf("Digite a temperatura em �C: \n");
scanf("%f", &tc);
tf = tc * (9/5)+32;
printf("Temperatura em C: %.2f.\nTemperatura em F: %.2f.\n", tc, tf);
return 0;
}
*/

/*EXERCICIO 7:

int main (){
float tc, tf;   // Temperatura em C, Temperatura em F.
printf("Digite a temperatura em F: \n");
scanf("%f", &tf);
tc = 5*(tf-32)/9;
printf("Temperatura em C: %.2f.\nTemperatura em F: %.2f.\n", tc, tf);
return 0;
}
*/

/*Exercicio 8:

int main (){
float tc, tk;   // Temperatura em C, Temperatura em K.
printf("Digite a temperatura em K: \n");
scanf("%f", &tk);
tc = tk-273.15;
printf("Temperatura em C: %.2f.\nTemperatura em K: %.2f.\n", tc, tk);
return 0;
}
*/

/* Exercicio 9:

int main (){
float tc, tk;   // Temperatura em C, Temperatura em K.
printf("Digite a temperatura em C: \n");
scanf("%f", &tc);
tk = tc+273.15;
printf("Temperatura em C: %.2f.\nTemperatura em K: %.2f.\n", tc, tk);
return 0;
}
*/

/*EXERCICIO 10:

int main(){
float km, ms; // variavel velocidade km/h e m/s.
printf("Digite a velocidade em KM/h: \n");
scanf("%f", &km);
ms = km/3.6;
printf("Velocidade em KM/h: %.2f.\nVelocidade em m/s: %.2f.", km, ms);
return 0;
}
*/

/*Exercicio 11:

int main(){
float km, ms; // variavel velocidade km/h e m/s.
printf("Digite a velocidade em m/s: \n");
scanf("%f", &ms);
km = ms * 3.6;
printf("Velocidade em KM/h: %.2f.\nVelocidade em m/s: %.2f.", km, ms);
return 0;
}
*/

/*EXERCICIO 12:

int main(){
float k, m; // Distancia em milhas e quilometros
printf("Digite a distancia em milhas: \n");
scanf("%f", &m);
k = m*1.61;
printf("Distancia em milhas: %.2f.\nDistancia em quilometros: %.2f.", m, k);
return 0;
}
*/

/*EXERCICIO 13:

int main(){
float k, m; // Distancia em milhas e quilometros
printf("Digite a distancia em quilometros: \n");
scanf("%f", &k);
m = k/1.61;
printf("Distancia em milhas: %.2f.\nDistancia em quilometros: %.2f.", m, k);
return 0;
}
*/

/*EXERCICIO 14:
int main(){
    float g, r; // variavel do angulo em Graus e em Radiano.
    float pi;
    pi = 3.141592;
    printf("Digite o angulo em Graus: \n");
    scanf("%f", &g);
    r = g*pi/180;
    printf("Angulo em graus: %f.\nAngulo em Radiano: %f.\n", g, r);
return 0;}
*/

/*EXERCICIO 15:
int main(){
    float g, r; // variavel do angulo em Graus e em Radiano.
    float pi;
    pi = 3.141592;
    printf("Digite o angulo em Radianos: \n");
    scanf("%f", &r);
    g = r*180/pi;
    printf("Angulo em graus: %f.\nAngulo em Radiano: %f.\n", g, r);
return 0;}
*/

/*EXERCICIO 16:

int main(){
float p, c; // variavel do comprimento em Polegadas e em Centimetros.
printf("Digite o comprimento em Polegadas: \n");
scanf("%f", &p);
c = p * 2.54;
printf("Comprimento em Polegadas: %.2f.\nComprimento em Centimetros: %.2f.\n", p, c);
return 0;}
*/

/*EXERCICIO 17:

int main(){
float p, c; // variavel do comprimento em Polegadas e em Centimetros.
printf("Digite o comprimento em centimetros: \n");
scanf("%f", &c);
p = c / 2.54;
printf("Comprimento em Polegadas: %.2f.\nComprimento em Centimetros: %.2f.\n", p, c);
return 0;}
*/

/*EXERCICIO 18:

int main(){
float m, l; // variavel do volume em metros cubicos(m3) e em Litros.
printf("Digite o Volume em metros cubicos: \n");
scanf("%f", &m);
l = m*1000;
printf("Volume em metros cubicos: %.2f.\n", m);
printf("Volume em litros: %.2f.\n", l);
return 0;}
*/

/*EXERCICIO 19:

int main(){
float m, l; // variavel do volume em metros cubicos(m3) e em Litros.
printf("Digite o Volume em litros: \n");
scanf("%f", &l);
m = l/1000;
printf("Volume em metros cubicos: %.2f.\n", m);
printf("Volume em litros: %.2f.\n", l);
return 0;}
*/

/* EXERCICIO 20:

int main(){
float k, l; // variavel da masssa em quilogramas e em Libras.
printf("Digite a massa em quilogramas: \n");
scanf("%f", &k);
l=k/0.45;
printf("Masssa em Quilogramas: %.2f.\n", k);
printf("Massa em Libras: %.2f.\n", l);
return 0;}
*/

/*EXERCICIO 21:

int main(){
float k, l; // variavel da masssa em quilogramas e em Libras.
printf("Digite a massa em Libras: \n");
scanf("%f", &l);
k = l*0.45;
printf("Masssa em Quilogramas: %.2f.\n", k);
printf("Massa em Libras: %.2f.\n", l);
return 0;}
*/

/*EXERCICIO 22:

int main(){
float j, m; //variavel do Comprimento em Jardas e metros
printf("Digite o valor do comprimento em jardas: \n");
scanf("%f", &j);
m = j*0.91;
printf("Comprimento em Jardas: %.2f.\n", j);
printf("Comprimento em Metros: %.2f.\n", m);
return 0;}
*/

/*EXERCICIO 23:

int main(){
float j, m; //variavel do Comprimento em Jardas e metros
printf("Digite o valor do comprimento em Metros: \n");
scanf("%f", &m);
j = m/0.91;
printf("Comprimento em Jardas: %.2f.\n", j);
printf("Comprimento em Metros: %.2f.\n", m);
return 0;}
*/

/* EXERCICIO 24:

int main(){
float a, m; //variavel da area em Acres e metros quadrados
printf("Digite o valor da area em Acres: \n");
scanf("%f", &a);
m = a*4048.58;
printf("Area em Acres: %f.\n", a);
printf("Area em Metros quadrados: %f.\n", m);
return 0;}
*/

/*EXERCICIO 25:

int main(){
float a, m; //variavel da area em Acres e metros quadrados
printf("Digite o valor da area em Metros quadrados: \n");
scanf("%f", &m);
a = m*0.0001;
printf("Area em Acres: %f.\n", a);
printf("Area em Metros: %f.\n", m);
return 0;}
*/

/*EXERCICIO 26:

int main(){
float h, m; //variavel da area em Hectares e metros quadrados
printf("Digite o valor da area em Metros quadrados: \n");
scanf("%f", &m);
h = m*0.0001;
printf("Area em Hectares: %f.\n", h);
printf("Area em Metros: %f.\n", m);
return 0;}
*/

/* EXERCICIO 27:

int main(){
float h, m; //variavel da area em Hectares e metros quadrados
printf("Digite o valor da area em Hectares: \n");
scanf("%f", &h);
m = h*10000;
printf("Area em Hectares: %f.\n", h);
printf("Area em Metros: %f.\n", m);
return 0;}
*/

/* EXERCICIO 28:

int main(){
    int x, y, z;    // variavel de 3 valores inteiros
    int soma;
    printf("Digite tres valores inteiros:");
    scanf("%d %d %d", &x, &y, &z);
    soma = x*x + y*y + z*z;
    printf("A soma do quadrado desses numeros eh: %d", soma);
    return 0;}
*/

/*  EXERICIO 29:
int main(){
    float n1,n2,n3,n4,ma;
    printf("Digite os 4 valores: \n");
    scanf("%f %f %f %f",&n1, &n2, &n3, &n4);
    ma = (n1+n2+n3+n4)/4;
    printf("\nA media aritimetica eh: %.2f", ma);
return 0;}
*/

/*  EXERICIO 30:
int main(){
float v, dollar;
printf("Digite um valor em real e  a cotacao do dollar: \n");
scanf("%f %f",&v, &dollar);
dollar = v*dollar;
printf("\nO valor correspondente em dolar: %.2fU$", dollar);
return 0;}
*/

/* EXERCICIO 31:
int main(){
    int i, j;
    scanf("%d", &i);
    j = i-1;
    printf("%d \n", j);
    j = i+1;
    printf("%d \n", j);
    return 0;
}*/

/* EXERICIO 32:
int main(){
    int a,b;
    scanf("%d", &a);
    b = ((a*3+1)+(a*2-1));
    printf("%d", b);
    return 0;
}
*/

/*EXERCICIO 33:
int main(){
    int lado, area;
    scanf("%d", &lado);
    area = lado*lado;
    printf("%d", area);
    return 0;
}
*/

/* EXERCICIO 34:

int main (){
    float raio, area, pi;
    pi = 3.141592;
    scanf("%f", &raio);
    area = pi*(raio*raio);
    printf("%.2f", area);
    return 0;
}
*/

/* EXERCICIO 35:
int main(){
    float a,b,h;
    scanf("%f %f", &a, &b);
    h = sqrt (pow(a,2) + pow(b,2));
    printf("%.2f", h);
    return 0;
}*/

/* EXERCICIO 36:
int main(){
    float alt, raio, vol, pi;
    pi = 3.141592;
    scanf("%f %f", &alt, &raio);
    vol = (pi*(raio*raio) * alt);
    printf("%.2f", vol);
    return 0;
}*/

/* EXERCICIO 37:
int main(){
    float a;
    scanf("%f", &a);
    a= a - (a*0.12);
    printf("%.2f", a);
    return 0;
}*/

/* EXERCICIO 38:
int main(){
    float s;
    scanf("%f", &s);
    s=s*1.25;
    printf("%.2f", s);
    return 0;
}*/

/* EXERCICIO 39:
int main(){
    float a, b, c, v;
    v = 780000.00;
    a = v*0.46;
    b = v*0.32;
    c = v-a-b;
    printf("%.2f \n %.2f \n %.2f", a,b,c);

}*/

/* EXERCICIO 40:
int main(){
    int dias;
    float salario;
    scanf("%d", &dias);
    salario = 30.00 * dias;
    salario = salario - (salario*0.08);
    printf("%.2f", salario);
    return 0;
}*/

/*EXERCICIO 41:

int main (){
    float valor_horas, horas_mensais,salario;
    scanf("%f %f", &valor_horas, &horas_mensais);
    salario = (valor_horas * horas_mensais);
    salario = salario * 1.10;
    printf("%.2f", salario);
    return 0;
}*/

/* EXERCICIO 42:
int main(){
    float sal_base, sal_final;
    scanf("%f", &sal_base);
    sal_final = sal_base * 1.05;
    sal_final =(sal_final - (sal_base*0.07));
    printf("%.2f", sal_final);
    return 0;
}*/

/* EXERCICIO 43:
int main (){
    float valorinicial, valorcomdesconto, valorparcela, comissaovista, comissaoparcelada;
    printf("Qual o valor total? \n");
    scanf("%f", &valorinicial);
    valorcomdesconto = valorinicial*0.9;
    valorparcela = valorinicial*0.03;
    comissaovista = valorcomdesconto*0.05;
    comissaoparcelada = valorinicial*0.05;
    printf("Total a pagar com desconto de 10 porcento: R$ %.2Lf \n", valorcomdesconto);
    printf("O valor de cada parcela eh: R$ %.2Lf \n", valorparcela);
    printf("A comissao do vendedor da venda a vista eh: R$ %.2Lf \n", comissaovista);
    printf("A comissao do vendedor da venda parcelada eh: R$ %.2Lf \n", comissaoparcelada);
return 0;
}
*/

/* Exercicio 44
int main (){
    float alturadegrau, alturadesejada;
    int degrausnecessarios;
    printf("Qual a altura do degrau da escada e a altura que deseja alcancar, separados por espacos: \n");
    scanf("%f %f", &alturadegrau, &alturadesejada);
    degrausnecessarios = alturadesejada/alturadegrau;
    printf("Sera necessario %d degraus para atingir a altura de %.2f.", degrausnecessarios, alturadesejada);
return 0;
}
*/

/* Exercicio 45
int main (){
    char maiuscula;
    int minuscula;
    printf("Digite uma letra maiuscula: \n");
    scanf("%c", &maiuscula);
    minuscula = maiuscula+32;
    printf("A letra digitada convertida para minusculo eh: %c", minuscula);
return 0;
}
*/

/* Exercicio 46
int main (){
    int x, resto1, resto2, resto3, numero_gerado;
    printf("numero_lido = ");
    scanf("%d", &x);
    resto3 = x % 10;
    resto2 = (x / 10) % 10;
    resto1 = x/10;
    resto1 = resto1 / 10;
    
    printf("numero_gerado = %d%d%d", resto3, resto2, resto1);
return 0;
}
*/

/* Exercicio 47
int main (){
    int x, x1, x2, x3, x4;
    printf("Digite um numero de 4 digitos: ");
    scanf("%d", &x);
    x4 = x % 10;
    x  = x/10;
    x3 = x % 10;
    x  = x/10;
    x2 = x % 10;
    x  = x/10;
    x1 = x % 10;
    
    printf("numero_gerado = %d \n %d \n %d \n %d", x1, x2, x3, x4);
    
    return 0;
}
*/

/* Exercicio 48 
int main (){
    float segundos, horas, minutos;
    printf("Segundos: \n");
    scanf("%f", &segundos);
    
    horas = segundos/3600;
    minutos = segundos/60;
    
    printf("Horas = %.4f \n", horas);
    printf("Minutos = %.4f", minutos);
return 0;
}
*/

/* Exercicio 49
int main (){
    int hora, minuto, segundo, segundoduracao, horaseg, minseg, tempototal;
    int aux;
    printf("Horas: ");
    scanf("%d", &hora);
    printf("Minutos: ");
    scanf("%d", &minuto);
    printf("Segundos: ");
    scanf("%d", &segundo);
    printf("Duracao em segundos: ");
    scanf("%d", &segundoduracao);
    horaseg = hora*3600;
    minseg = minuto*60;
    tempototal = horaseg+minseg+segundo+segundoduracao;
   
    if (tempototal > 3600) {
        hora = tempototal/3600;
        aux = tempototal - hora*3600;
    }
    if (aux < 3600 && aux >= 60) {
        minuto = aux/60;
        aux = aux - minuto*60;
    }
    if (aux <= 59 && aux >= 0){
        segundo = aux;
    }
        printf("Horario final: %d:%d:%d", hora, minuto, segundo);
    return 0;
}
*/

/* Exercicio 50
int main (){
    int idade, anoatual, anonascimento;
    printf("Qual sua idade e o ano atual? ");
    scanf("%d %d", &idade, &anoatual);
    anonascimento = anoatual-idade;
    printf("Ano de nascimento: %d", anonascimento);
return 0;
}
*/

/* Exercicio 51
int main (){
    float x,y,distancia;
    printf("Digite o x: ");
    scanf("%f", &x);
    printf("Digite o y: ");
    scanf("%f", &y);
    distancia = sqrt((x*x)+(y*y));
    printf("A distancia entre o ponto e a origem eh: %f", distancia);
return 0;
}
*/

/* Exercicio 52
int main (){
    int jogador1, jogador2, jogador3, premio, totalapostado, peso, j1recebe, j2recebe, j3recebe;
    printf("Bolao jogador 1 R$: ");
    scanf("%d", &jogador1);
    printf("Bolao jogador 2 R$: ");
    scanf("%d", &jogador2);
    printf("Bolao jogador 3 R$: ");
    scanf("%d", &jogador3);
    printf("Informe o valor do premio: ");
    scanf("%d", &premio);
    totalapostado=jogador1+jogador2+jogador3;
    peso=premio/totalapostado;
    j1recebe=jogador1*peso;
    j2recebe=jogador2*peso;
    j3recebe=jogador3*peso;
    printf("Jogador 1 recebera R$: %d\n", j1recebe);
    printf("Jogador 2 recebera R$: %d\n", j2recebe);
    printf("Jogador 3 recebera R$: %d\n", j3recebe);
return 0;
}
*/

/* Exercicio 53
int main (){
    float comprimento, largura, preco, custo;
    printf("Qual o comprimento? ");
    scanf("%f", &comprimento);
    printf("Qual o largura? ");
    scanf("%f", &largura);
    printf("Qual o preco do metro? ");
    scanf("%f", &preco);
    custo = comprimento*largura*preco;
    printf("O preco total sera de: R$ %.2f", custo);
return 0;
}
*/