Algoritmo "Desafio 03 - Calcular dias de nascimento"
 //Faça um algoritmo que leia a idade de uma pessoa expressa em anos, meses e dias e mostre-a expressa em dias
 
 
   funcao calcularQtdeDias(): inteiro
   inicio
      retorne ano * 365 + mes * 30 + dia
   fimfuncao
   
   procedimento impressao()
   inicio
      escreval("A sua idade em dias é", calcularQtdeDias())
   fimprocedimento
   
Var
   ano: inteiro
   mes: inteiro
   dia: inteiro

Inicio
      escreval("Informe sua idade:")
      escreva("em anos; ")
      leia(ano)
      escreva("em meses; ")
      leia(mes)
      escreva("em dias; ")
      leia(dia)
      
      impressao()
Fimalgoritmo