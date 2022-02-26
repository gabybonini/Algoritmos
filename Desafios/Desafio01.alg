Algoritmo "Desafio01 - Inverter numeros"
// Funçao:   Inverter dois numeros inteiros
// Autor(a): Gabriellaine Bonini
// Data:     03/02/2022
 procedimento impressao(etapa: caracter)
   inicio
      escreval("#",etapa)
      escreval("Número 1:", primeiro)
      escreval("Número 2:", segundo)
   fimprocedimento

   procedimento inversao()
   var auxiliar: inteiro
   inicio
      auxiliar <- primeiro
      primeiro <- segundo
      segundo <- auxiliar
   fimprocedimento
Var
    primeiro: inteiro
   segundo: inteiro
Inicio
     impressao("momentoZero")

      escreva("Informe o seu primeiro numero: ")
      leia(primeiro)
      escreva("Informe o seu segundo numero: ")
      leia(segundo)

      impressao("inicio")
      inversao()
      impressao("fim")

fimalgoritmo

Fimalgoritmo