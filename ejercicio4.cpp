#include<iostream>

  using namespace std;
  int main(){
  string palabra;
  int a,b;
  cout<<"ingrese la palabra ";
  cin>>palabra;
  a=palabra.length();
  cout<<"tamanio de la palabra "<<a <<endl;
  b=a%2;
  if(b==0){
  cout<<"es par ";
  }
  else{cout<<"es impar ";}
  


   
 
 
 
 
 
 
 
 
 
      return 0;
  }