#include <stdio.h>
/* Matricula: 2019201856


   Algoritimo criado: 
   Inicio = Declarar varivel para cada dia da semana: seg, seg1, ter, ter1, quar, quar1, quin, quin1, sext, sext1, saldoseg, saldoter, saldoquar, saldoquin, saldosext
            Ler um numero real : seg
            Ler um numero real : seg1
            subtrair seg - seg1 : saldoseg
            se saldoseg for maior que 2000 imprimir seg, seg1 e saldoseg
            se saldoseg for menor que 500 imprimir seg, seg1 e saldoseg
            
            Ler um numero real : ter
            Ler um numero real : ter1
            se saldoter for maior que 2000 imprimir ter, ter1 e saldoter
            se saldoter for menor que 500 imprimir ter, ter1 e saldoter
           
            Ler um numero real : quar
            Ler um numero real : quar1
            se saldoquar for maior que 2000 imprimir quar, quar1 e saldoquar
            se saldoquar for menor que 500 imprimir quar, quar1 e saldoquar
            
            Ler um numero real : quin
            Ler um numero real : quin1
            se saldoquin for maior que 2000 imprimir quin, quin1 e saldoquin
            se saldoquin for menor que 500 imprimir quin, quin1 e saldoquin
            
            Ler um numero real : sext
            Ler um numero real : sext1
            se saldosext for maior que 2000 imprimir sext, sext1 e saldosext
            se saldosext for menor que 500 imprimir sext, sext1 e saldosext
            
 */


int main(){

float seg, seg1, ter, ter1, quar, quar1, quin, quin1, sext, sext1, saldoseg, saldoter, saldoquar, saldoquin, saldosext;

printf("Recebido Segunda:\n");
scanf("%f", &seg);
printf("Gasto Segunda:\n");
scanf("%f", &seg1);

saldoseg = seg - seg1;

if (saldoseg > 2000){
printf("AVISO!\n");
printf("Valor total recebido: %f\n", seg);
printf("Valor total gasto:%f\n", seg1);
printf("Saldo Atual:%f\n", saldoseg);}

else if (saldoseg < 500)  {
printf("AVISO!\n");
printf("Valor total recebido:%f\n", seg);
printf("Valor total gasto:%f\n", seg1);
printf("Saldo Atual:%f\n", saldoseg); }

printf("Recebido Terca:\n");
scanf("%f", &ter);
printf("Gasto Terca:\n");
scanf("%f", &ter1);

saldoseg = ter - ter1;

if (saldoter > 2000){
printf("AVISO!\n");
printf("Valor total recebido: %f\n", ter);
printf("Valor total gasto:%f\n", ter1);
printf("Saldo Atual:%f\n", saldoter);}

else if (saldoter < 500) {
printf("AVISO!\n");
printf("Valor total recebido:%f\n", ter);
printf("Valor total gasto:%f\n", ter1);
printf("Saldo Atual:%f\n", saldoter); }

printf("Recebido Quarta:\n");
scanf("%f", &quar);
printf("Gasto Quarta:\n");
scanf("%f", &quar1);

saldoquar = quar - quar1;

if (saldoquar > 2000){
printf("AVISO!\n");
printf("Valor total recebido: %f\n", quar);
printf("Valor total gasto:%f\n", quar1);
printf("Saldo Atual:%f\n", saldoquar);}

else if (saldoquar < 500) {
printf("AVISO!\n");
printf("Valor total recebido:%f\n", quar);
printf("Valor total gasto:%f\n", quar1);
printf("Saldo Atual:%f\n", saldoquar); }

printf("Recebido Quinta:\n");
scanf("%f", &quin);
printf("Gasto Quinta:\n");
scanf("%f", &quin1);

saldoquin = quin - quin1;

if (saldoquin > 2000){
printf("AVISO!\n");
printf("Valor total recebido: %f\n", quin);
printf("Valor total gasto:%f\n", quin1);
printf("Saldo Atual:%f\n", saldoquin);}

else if (saldoquin < 500) {
printf("AVISO!\n");
printf("Valor total recebido:%f\n", quin);
printf("Valor total gasto:%f\n", quin1);
printf("Saldo Atual:%f\n", saldoquin); }

printf("Recebido Sexta:\n");
scanf("%f", &sext);
printf("Gasto Sexta:\n");
scanf("%f", &sext1);

saldosext = sext - sext1;

if (saldosext > 2000){
printf("AVISO!\n");
printf("Valor total recebido: %f\n", sext);
printf("Valor total gasto:%f\n", sext1);
printf("Saldo Atual:%f\n", saldosext);}

else if (saldosext < 500) {
printf("AVISO!\n");
printf("Valor total recebido:%f\n", sext);
printf("Valor total gasto:%f\n", sext1);
printf("Saldo Atual:%f\n", saldosext); }

}

