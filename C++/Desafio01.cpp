#include <iostream>
#include <locale>

	using namespace std;
	
	int main(){
		setlocale(LC_ALL, "Portuguese");
	
		int n1, n2, aux;
			system("cls");
			
			do {
				cout << "Digite o primeiro número: ";
				cin >> n1;
				cout << "Digite o segundo número: ";
				cin >> n2;
				 
				cout << endl; //Salta linha
				 
		    	} while (n1 == n2); 
			
			  cout << endl;
			  cout << "Valores antes das trocas:" << endl;
			  cout << "Primeiro número " << n1 << endl;
			  cout << "Segundo número " << n2 << endl;
			  
			  //faz as trocas utilizando variável auxiliar
			  aux = n1;
			  n1 = n2;
			  n2 = aux;
		
			  
			  cout << endl;
			  cout << endl;
			  cout << "Valores depois da troca" << endl;
			  cout << "Primeiro número " << n1 << endl;
			  cout << "Segundo número " << n2 << endl;
			  
		return 0;	  
			   
	}
	
