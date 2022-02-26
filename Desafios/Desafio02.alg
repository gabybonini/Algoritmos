Algoritmo "Cálculo de área"
// Função:   Calcular área do triangulo
// Autor(a): Gabriellaine Bonini
// Data atual  : 24/02/2022
    funcao calcularArea(): real
       inicio
         retorne (base * altura)/2
       fimfuncao
       
    procedimento impressao()
      var area: real
      inicio
        area <- calcularArea()
        escreval("A area do triangulo e:", area)
      fimprocedimento
Var
   base:   real
   altura: real
   
Inicio
    escreval("informe a base do triangulo:")
    leia(base)
    escreval("informe a altura do triangulo:")
    leia(altura)
    
    impressao()

Fimalgoritmo