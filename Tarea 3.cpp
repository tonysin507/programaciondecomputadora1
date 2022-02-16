#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
	
	char opc ;
	bool repetir = true;
	 //char opc1 = 'z';
	
	do{
		system("cls");
		 cout <<"\n\n\t\t\tMenu de Opciones" << endl;
         cout <<"\t\t\t----------------" << endl;
         cout <<"1. Suma "<<endl;
         cout <<"2. Resta "<<endl;
		 cout <<"3. Multiplicacion "<<endl;
		 cout <<"4. Division "<<endl;
		 cout <<"5. Ingresos "<< endl;
		 cout <<"6. Egresos"<<endl;
		 cout <<"z. salir"<<endl;  
		 
		     cout <<"\n\tIngrese una Opcion: ";
		     cin >>opc;
		       
		         
		         int numero1, numero2;
				 float resultado;
				 float ingreso;
				 //char opc1 = 'z';
				 switch (opc){
				 	    case '1':
					 
					         cout << "\n\tIngrese el primer valor: ";
					         cin >> numero1;
					 
					         cout << "\n\tIngrese el segundo valor: ";
					         cin >> numero2;
					         
					         cout << "\t----------------------------"<<endl;
					         resultado = numero1 + numero2;
					         cout << "\tResultado: " <<resultado<<endl;
					         
					             system("pause>nul");
					             break;
					             
				 	    case '2':
				 	    
							 cout << "\n\tIngrese el primer valor: ";
					         cin >> numero1;
					 
					         cout << "\n\tIngrese el segundo valor: ";
					         cin >> numero2;
					         
					         cout << "\t----------------------------"<<endl;
					         resultado = numero1 - numero2;
					         cout << "\tEl Resultado Es: " <<resultado<<endl;
					         
					             system("pause>nul");
					             break;
					             
				 	     case '3':
				 	    
							 cout << "\n\tIngrese el primer valor: ";
					         cin >> numero1;
					 
					         cout << "\n\tIngrese el segundo valor: ";
					         cin >> numero2;
					         
					         cout << "\t----------------------------"<<endl;
					         resultado = numero1 * numero2;
					         cout << "\tEl Resultado Es: " <<resultado<<endl;
					         
					             system("pause>nul");
					             break;
					             
					     case '4':
				 	    
							 cout << "\n\tIngrese el primer valor: ";
					         cin >> numero1;
					 
					         cout << "\n\tIngrese el segundo valor: ";
					         cin >> numero2;
					         
					         cout << "\t----------------------------"<<endl;
					         
					         if (numero2 == 0){
					         	cout << "\tResultado: "<<resultado<<endl;
							 }else{
							 	 resultado = numero1 / (numero2 * 1.0);
					             cout << "\tEl Resultado Es: " <<resultado<<endl;
							 }					         
					             system("pause>nul");
					             break;
								       
						 case '5':
						 	     cout <<"Sistema de ingreso"<<endl;
						 	     cout <<"------------------"<<endl;
						 	     
						 	     cout <<"ponto de ingresar: ";
						 	     cin >>ingreso;
						 	     
						 	     cout <<"El monto a ingresar es de $ "<<ingreso<<endl;
						 	     
	
					             system("pause>nul");
					             break;
					             
						 case '6':
				 	
					             system("pause>nul");
					             break;
				 } 
	}while ( opc != 'z');
	                              cout <<"\n\t--------------------------------------------------------";
								 cout <<"\n\tGracias por usar nuestro software ME DUELE LA CABEZA 2.0"<<endl;
				 	             cout <<"\t--------------------------------------------------------"<<endl;
				 	              cout <<"\n\t\t\t\t--------------"<<endl;
				 	             cout <<"\t\t\t\tVuelva Pronto"<<endl;
				 	              cout <<"\t\t\t\t--------------";

}
