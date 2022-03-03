import java.util.Scanner;

public class Desafio03 {
    static int anos = 0;
    static int dias = 0;
    static int mes  = 0;
    
    static int calcularDias(){
        return (anos * 365) + (mes * 30) + dias;
    }
    
    static void impressao(){
        int calculo = 0;
        calculo = calcularDias();
        
        System.out.print("Voce tem " +calculo+ " dias de vida!"); 
    }
    
    public static void main(String[] args){
         Scanner in = new Scanner(System.in);
         System.out.println("Informe sua data de nascimento em: ");
         System.out.print("Anos: ");
         anos = in.nextInt();
         
         System.out.print("Meses: ");
         mes = in.nextInt();
         
         System.out.print("Dias: ");
         dias = in.nextInt();
     
     impressao();
     in.close();
    }
}