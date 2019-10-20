#include <iostream>
#include <climits>
#include "exprtk.hpp"

double error = 0.00000001;
double c;

using namespace std;
void gaussjordan3x3()
{
		int i,j;
    float mat[3][4],x,y,z,aux;
    for(i=0;i<3;i++)
    {
    	for(j=0;j<4;j++)
     	{
    	scanf("%f",&mat[i][j]);
      }
        putchar('\n');
    }
    if((mat[0][0]== 0) || (mat[0][0]==0 && mat[1][1]==0 && mat[2][2]==0))
    {
       cout<<"El sistema no tiene solucion por el metodo de Gauss\n";
       exit(1);
    }
     
    aux=(mat[1][0]/mat[0][0])*(-1);
    for(i=0;i<4;i++)
 	  mat[1][i] =(aux*mat[0][i])+mat[1][i]; 
 	
    aux=(mat[2][0]/mat[0][0])*(-1);
    for( i=0;i<4;i++)
 	   mat[2][i] =(aux*mat[0][i])+mat[2][i];
  
  if(mat[0][0]==0&&mat[0][1]==0&&mat[0][2]==0||
	   mat[1][0]==0&&mat[1][1]==0&&mat[1][2]==0||
	   mat[2][0]==0&&mat[2][1]==0&&mat[2][2]==0)
 	  {
 	   cout<<"infinitas soluciones";
 	   exit(1);
     }
 	
   aux=(mat[0][1]/mat[1][1])*(-1);
   for( i=0;i<4;i++)
 	   mat[0][i] =(aux*mat[1][i])+mat[0][i];

 	aux=(mat[2][1]/mat[1][1])*(-1);
 	for( i=0;i<4;i++)
 	   mat[2][i] =(aux*mat[1][i])+mat[2][i];
  
  if(mat[0][0]==0&&mat[0][1]==0&&mat[0][2]==0||
	   mat[1][0]==0&&mat[1][1]==0&&mat[1][2]==0||
	   mat[2][0]==0&&mat[2][1]==0&&mat[2][2]==0)
 	  {
 	   cout<<"infinitas soluciones";
 	   exit(1);
    }
 	   
 	aux=(mat[0][2]/mat[2][2])*(-1);
 	for( i=0;i<4;i++)
 	   mat[0][i] =(aux*mat[2][i])+mat[0][i];
 	   
 	aux=(mat[1][2]/mat[2][2])*(-1);
 	for( i=0;i<4;i++)
 	   mat[1][i] =(aux*mat[2][i])+mat[1][i];
 	
 	for(i=0;i<3;i++)
    {
    	for(j=0;j<4;j++)
     	{
    	printf("%f ",mat[i][j]);
      }
      putchar('\n');
    }
 	   
 	x= mat[0][3]/mat[0][0];
 	y= mat[1][3]/mat[1][1];
 	z= mat[2][3]/mat[2][2];  
 	
 	if(mat[0][0]==0&&mat[0][1]==0&&mat[0][2]==0||
	   mat[1][0]==0&&mat[1][1]==0&&mat[1][2]==0||
	   mat[2][0]==0&&mat[2][1]==0&&mat[2][2]==0)
 	  {
 	   cout<<"infinitas soluciones";
 	   exit(1);
    }
 	   
 	printf("x = %f \n",x);
    printf("y = %f \n",y);
    printf("z = %f \n",z);
}
void gaussjordan2x2()
{
	int i,j;
	float mat[2][3],x,y,aux;
	
	for(i=0;i<2;i++)
    {
    	for(j=0;j<3;j++)
     	{
    	scanf("%f",&mat[i][j]);
      }
        putchar('\n');
    }
    aux=(mat[1][0]/mat[0][0])*(-1);
    for(i=0;i<3;i++)
 	  mat[1][i] =(aux*mat[0][i])+mat[1][i];
 	
	 if(mat[0][0]==0&&mat[0][1]==0||mat[1][0]==0&&mat[1][1]==0)
 	 {
 	   cout<<"infinitas soluciones";
 	   exit(1);
    }
 	  
 	aux=(mat[0][1]/mat[1][1])*(-1);
    for( i=0;i<4;i++)
 	   mat[0][i] =(aux*mat[1][i])+mat[0][i];
 	   
 	 if(mat[0][0]==0&&mat[0][1]==0||mat[1][0]==0&&mat[1][1]==0)
 	 {
 	   cout<<"infinitas soluciones";
 	   exit(1);
    }
	  y= mat[0][2]/mat[0][0];
	  x= mat[1][2]/mat[1][1];
	printf("x = %f \n",x);
  printf("y = %f \n",y);
}
void gauss3x3()
{

	int i,j;
    float mat[3][4],x,y,z,aux,aux2;
    for(i=0;i<3;i++)
    {
    	for(j=0;j<4;j++)
     	{
    	scanf("%f",&mat[i][j]);
        }
        putchar('\n');
    }
    if((mat[0][0]== 0) || (mat[0][0]==0 && mat[1][1]==0 && mat[2][2]==0))
    {
       cout<<"El sistema no tiene solucion por el metodo de Gauss\n";
       exit(1);
    }
     
    aux=(mat[1][0]/mat[0][0])*(-1);
    for(i=0;i<4;i++)
 	  mat[1][i] =(aux*mat[0][i])+mat[1][i]; 
 	
    aux=(mat[2][0]/mat[0][0])*(-1);
    for( i=0;i<4;i++)
 	   mat[2][i] =(aux*mat[0][i])+mat[2][i];
 	
    aux=(mat[2][1]/mat[1][1])*(-1);
    for( i=0;i<4;i++)
 	   mat[2][i] =(aux*mat[1][i])+mat[2][i];
 	   
 	z=mat[2][3]/mat[2][2];
 	y=(mat[1][3]-(mat[1][2]*z))/mat[1][1];
 	x=((mat[0][3])-(mat[0][1]*y)-(mat[0][2]*z))/mat[0][0];
 	
 	if(mat[0][0]==0&&mat[0][1]==0&&mat[0][2]==0||
	   mat[1][0]==0&&mat[1][1]==0&&mat[1][2]==0||
	   mat[2][0]==0&&mat[2][1]==0&&mat[2][2]==0)
 	  {
 	   cout<<"infinitas soluciones";
 	   exit(1);
      }
 	   
 	printf("x = %f \n",x);
    printf("y = %f \n",y);
    printf("z = %f \n",z);
	
}
void gauss2x2()
{
	int i,j;
	float mat[2][3],x,y,aux;
	for(i=0;i<2;i++)
    {
    	for(j=0;j<3;j++)
     	{
    	scanf("%f",&mat[i][j]);
        }
        putchar('\n');
    }

    aux=(mat[1][0]/mat[0][0])*(-1);
    for(i=0;i<3;i++)
 	  mat[1][i] =(aux*mat[0][i])+mat[1][i];
 	  
 	if(mat[0][0]==0&&mat[0][1]==0||mat[1][0]==0&&mat[1][1]==0)
 	 {
 	   cout<<"infinitas soluciones";
 	   exit(1);
     }
	   
	  y=mat[1][2]/mat[1][1]; 
	  x=mat[0][2]-(mat[0][1]*y);
	printf("x = %f \n",x);
  printf("y = %f \n",y);
	
}
//pide los intervalos
void intervalos(double *a, double *b){
  cout << "Introduzca primer intervalo: ";
  cin >> *a;
  cout << "Introduzca segundo intervalo: ";
  cin >> *b;
}

//pide y evalua la funcion
double func(string expression_str, double x){

  typedef exprtk::symbol_table<double> symbol_table_t;
  typedef exprtk::expression<double>     expression_t;
  typedef exprtk::parser<double>             parser_t;

  // Register x with the symbol_table
  symbol_table_t symbol_table;
  symbol_table.add_variable("x", x);

  // Instantiate expression and register symbol_table
  expression_t expression;
  expression.register_symbol_table(symbol_table);

  // Instantiate parser and compile the expression
  parser_t parser;
  parser.compile(expression_str,expression);

  return expression.value();
}

double derivada(string s, double x){

  double h = .000000001, d;
  d = (func(s, (x+h))-(func(s, x)))/h;

  return d;
}

void biseccion(double a, double b, string s){
  if((func(s, a) * func(s, b)) >= 0){
      cout<<"Dentro de ese intervalo no hay raíz.";
      return;
  }
  c = a;
  while ((b-a) > error){
      c = (a+b)/2;
      if (func(s, c) == 0.0)
          break;
      else
        if ((func(s, c)*func(s, a)) < 0)
          b = c;
        else
          a = c;
  }
}

void falsa_posicion(double xl, double xu, string s){
    int i=1;
    double  xr, f1, f2, total;
    double approxError=INT_MAX;
    double prevRoot=INT_MAX;

    f1 = func(s, xl);
    f2= func (s, xu);

    total=f1*f2;

    if(total > 0){
      cout<<"Dentro de ese intervalo no hay raíz.";
      return;
    }

    do{
      if(i != 1)
        prevRoot = xr;

      xr = ((xu*func(s,xl))-(xl*func(s,xu)))/(func(s, xl)-func(s, xu));

      approxError = fabs((xr - prevRoot) / xr) * 100;

      f1= func(s, xl);
      f2=func(s, xr);
      total=f1*f2;

      if(total < 0)
          xu = xr;
      else if(total > 0)
          xl = xr;
      i++;
    }
    while(approxError >  c);
    c = xr;
}

void secante(double b, double e, string s){
  double a;
  do{
    a=b;
    b=e;
    e=b-(b-a)/(func(s, b)-func(s,a))*func(s, b);
    if (func(s, e)==0){
      c = e;
      return;
    }
  } while(abs(c-b) > error);
}

void newton (double x, string s){
  double ant;
  ant = x;
  while (abs(func(s, x)) > error) {
    x = ant - (func(s, ant) / derivada(s, ant));
    ant = x;
  }
  c = x;
}

int main (){
  cout.precision(7);
  cout.setf(ios::fixed);

  double a, b; //intervalos
  intervalos(&a, &b);

  string expression_str;
  cout << "Ingrese la expression algebraica a evaular: ";
  cin >> expression_str;

  falsa_posicion(a, b, expression_str);
  cout << "\nRaíz de "<<expression_str<< " en el intervalo " <<'[' << a << ", " << b << "]: "<< c << '\n';

  biseccion(a, b, expression_str);
  cout << "\nRaíz de "<<expression_str<< " en el intervalo " <<'[' << a << ", " << b << "]: "<< c << '\n';

  secante(a, b, expression_str);
  cout << "\nRaíz de "<<expression_str<< " en el intervalo " <<'[' << a << ", " << b << "]: "<< c << '\n';

  newton(a, expression_str);
  cout << "\nRaíz de "<<expression_str<< " en el intervalo " <<'[' << a << ", " << b << "]: "<< c << '\n';

  return 0;
}
