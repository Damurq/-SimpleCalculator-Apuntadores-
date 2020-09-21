//Calculadora simple, desarrollada en C++ con apuntadores, para realizar, sumas, multiplicacion, restas y divisin
//Incluimos las librerias a utilizar
#include<string>
#include<iostream>
using namespace std;

int main()
{
	//Declaro los apuntadores a utilizar
	int *dec;					//"dec" nos permite conocer que operacion se quiere realizar 
	float *opr1,*opr2,*result;	//"ope1"  Almacena el primer numero
								//"opr2"  Almacena el segundo numero
								//"result" Almacena el resultado
	bool test;					//"test"  nos permite decidir si la operacion introducida es validad
	//inicializamos dec
	dec=new int; //Le asignamos un espacio de memoria al apuntador
	//Utilizamos un do While para que el programa se ejecute hasta que el usuario quiera
	do
	{
		system("cls");//Limpia la pantalla
		do
		{
			//Mostramos al usuario las operacioens posibles y le pedimos que seleccione una
			cout<<"------------------------------------------------------------------------------"<<endl;
			cout<<"-------------------------------------1-Suma-----------------------------------"<<endl;
			cout<<"-------------------------------------2-Resta----------------------------------"<<endl;
			cout<<"--------------------------------3-Multiplicacion------------------------------"<<endl;
			cout<<"-----------------------------------4-Division---------------------------------"<<endl;
			cout<<"------------------------------------------------------------------------------"<<endl;
			cout<<"     Introduzca el numero correspondien a la operacion que desea realizar   : ";
			cin>> *dec; //Recibimos el valor introducido por el usuario
			//Verificammos que la operacion a realizar es valida
			if((*dec>0)&&(*dec<5))
				test=false;
			else
			{
				//Le informamos al usuario que el valor introducido fue incorrecto
				cout<<"\n-------------------------Introduzca un valor valido----------------------------\n"<<endl;
				test=true;
			}
		}while(test); //Se repite mientras la operacion escogida sea invalida
		cout<<"\n\tIntroduzca el primer numero: ";
		//inicializamos opr1
		opr1=new float;
		cin>>*opr1;
		cout<<"\n\tIntroduzca el segundo numero: ";
		opr2=new float;
		cin>>*opr2;
		//inicializamos opr2
		result=new float;
		//Calcular la operacion
		switch(*dec)
		{
			case 1:
				*result= *opr1+ *opr2;//Suma
				break;
			case 2:
				*result= *opr1- *opr2;//Resta
				break;
			case 3:
				*result= *opr1* *opr2;//Multiplicacion
				break;
			case 4:
				if(*opr2==0)//Verifica que el denominador sea distinto de cero
				cout<<"\n\tEl denominador no puede ser cero"<<endl;
				else//Division si el denominador es distinto de cero
				*result= *opr1/ *opr2;
				break;
		}
		//Mostramos el resultado
		cout<<"\n\tEl resultado es: "<<*result<<endl;
		//Pregunta al usuario si desea procesar más operaciones
		cout<<"\n\tDesea procesar mas operaciones 1[SI], 2[NO]: ";
		cin>>*dec;//Recibir la respuesta del usuario
		//Liberar la posicion de memoria ocupada por la variable dinamica
		delete opr1;
		delete opr2;
		delete result;
	}while(*dec==1);//En caso afirmativo el programa se vuelve a ejecutar
	return 0;
}
