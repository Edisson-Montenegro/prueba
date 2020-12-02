#include <iostream>
#include <conio.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) 
{
//  int op;
	int m,n;//m filas, n columnas

	cout<<"ingrese numero de filas"<<endl;
	cin>>m;
	cout<<"ingrese el numero de columnas"<<endl;
	cin>>n;
	
/*	cout<<"por favor elija una de las operaciones a calcular"<<endl;
	cout<<"1. suma de dos matrices"<<endl;
	cout<<"2. resta de dos matrices"<<endl;
	cout<<"3. llenar matriz con unos"<<endl;
	cout<<"4. llenar matriz con ceros"<<endl;
	cout<<"5. llenar la diagonal principal con unos"<<endl;
	cout<<"6. llenar la diagonal superior con unos"<<endl;
	cout<<"7.transpuesta de una matriz"<<endl;
	cin>>op;*/
		
	int mat1[m][n], mat2[m][n];
	 
	
	
	cout<<"llenado de matriz 1"<<endl;
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			cout<<"ingrese numeros"<<endl;
			cin>>mat1[i][j];			
		}
	}
	cout<<" "<<endl;
	cout<<"****************"<<endl;
	cout<<"llenado de matriz 2"<<endl;
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			cout<<"ingrese numeros"<<endl;
			cin>>mat2[i][j];			
		}
	}
//imprecion de matrices
	cout<<"matriz 1"<<endl;
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			cout<<mat1[i][j]<<" ";			
		}
		cout<<endl;
	}
	cout<<"matriz 2"<<endl;
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			cout<<mat2[i][j]<<" ";			
		}
		cout<<endl;
	}
	
		cout<<"transpuesta de la matriz"<<endl;
//transpuesta de la matriz	
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			cout<<mat1[j][i]<<" ";			
		}
		cout<<endl;
	}
	cout<<"*******"<<endl;
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			cout<<mat2[j][i]<<" ";			
		}
		cout<<endl;
	}
		
	cout<<"suma de las matrices"<<endl;
//suma de matrices
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			cout<<mat1[i][j]+mat2[i][j]<<" ";			
		}
		cout<<endl;
	}
	
	cout<<"resta de las matrices"<<endl;
//resta de matices
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			cout<<mat1[i][j]-mat2[i][j]<<" ";			
		}
		cout<<endl;
	}
	
	cout<<"matrices con unos"<<endl;
//matrices con unos	
    for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			mat1[i][j]=1;			
		}
		
	}
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			cout<<mat1[i][j]<<" ";			
		}
		cout<<endl;
	}
    cout<<"*******"<<endl;
    for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			mat2[i][j]=1;			
		}
		
	}
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			cout<<mat2[i][j]<<" ";			
		}
		cout<<endl;
	}
	
	cout<<"matrices con ceros"<<endl;
//matrices con ceros
    for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			mat1[i][j]=0;			
		}
		
	}
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			cout<<mat1[i][j]<<" ";			
		}
		cout<<endl;
	}
    cout<<"*******"<<endl;
    for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			mat2[i][j]=0;			
		}
		
	}
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			cout<<mat2[i][j]<<" ";			
		}
		cout<<endl;
	}

	cout<<"diagonal pricipal con unos"<<endl;
//llenar diagonal pricipal con unos	
	cout<<"????????"<<endl;
	
	
	
    cout<<"llenar diagonal superior con unos"<<endl;
//llenar diagonal superior con unos		
	cout<<"????????"<<endl;
	
	
		


	
	
	
	
	return 0;
}
