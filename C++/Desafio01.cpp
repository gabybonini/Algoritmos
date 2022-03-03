/*escreva um algoritmo que armazene o valor; 10 em uma variável A e o valor 20 em uma variável B.
A seguir troque os seus conteúdos fazendo com que o valor que está em A passe para B e vice-versa*/

#include <iostream>
#include <locale>

	using namespace std;
	
	int main(){
		setlocale(LC_ALL, "Portuguese");
	
		int n1, n2, aux;
			system("cls");
			
			do {
				cout << "Digite o primeiro numero: ";
				cin >> n1;
				cout << "Digite o segundo numero: ";
				cin >> n2;
				 
				cout << endl; //Salta linha
				 
		    	} while (n1 == n2); 
			
			  cout << endl;
			  cout << "Valores antes das trocas:" << endl;
			  cout << "Primeiro numero " << n1 << endl;
			  cout << "Segundo numero " << n2 << endl;
			  
			  //faz as trocas utilizando variavel auxiliar
			  aux = n1;
			  n1 = n2;
			  n2 = aux;
		
			  
			  cout << endl;
			  cout << endl;
			  cout << "Valores depois da troca" << endl;
			  cout << "Primeiro numero " << n1 << endl;
			  cout << "Segundo numero " << n2 << endl;
			  
		return 0;	  
			   
	}
	
