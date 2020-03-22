//various opertion in complex number


#include<iostream>
#include<string>
#include<math.h>
using namespace std;
class input{
	private:
		float real,imag;
		public:
			float inputreal(){
			
	   cout<<"ENTER THE REAL PART OF COMPLEX NUMBER::"<<endl;
	cin>>real;
	return real;}
	float inputimag(){
	
	cout<<"ENTER THE IMAGINARY PART OF COMPLEX NUMBER::"<<endl;
	cin>>imag;
	return imag;}	
};
class complex{
	private:
		float r,i;
		public:
		void output(float real,float imag){
			if(imag>=0)
			cout<<"COMPLEX NUMBER:::"<<real<<"+"<<imag<<"i"<<endl;
			else
			cout<<"COMPLEX NUMBER:::"<<real<<imag<<"i"<<endl;
		}
		float rootreal(float a,float b)//here we find the real part of root.
		{
		float p=(a+sqrt(a*a+b*b))/2;
		return sqrt(p);
		}
			float rootimag(float a,float b)//we find imag part of root.
		{
		float p=(sqrt(a*a+b*b)-a)/2;
		return sqrt(p);
		}
		void pow(int n)//power of i
		{
		if(n%4==0)
		cout<<"0"<<endl;
		else if(n%4==1)
		cout<<"i"<<endl;
		else if(n%4==2)
		cout<<"-1"<<endl;
		else if(n%4==3)
		cout<<"-i"<<endl;
    	}
    	void add(float r1,float r2,float i1,float i2)
    	{
    		float r=r1+r2;
    		float i=i1+i2;
    		cout<<"ADDITION OF TWO COMPLEX NUMBER"<<endl;
    		complex::output(r,i);		
		}
		void sub(float r1,float r2,float i1,float i2)
		{
			float r=abs(r1-r2);
			float i=abs(i1-i2);
			cout<<"SUBSTRACTION OF COMPLEX NUMBER"<<endl;
			complex::output(r,i);
		}
		void multiply(float r1,float r2,float i1,float i2)
		{
			float r=r1*r2;
			float i=i1*i2;
			cout<<"MULTIPLICATION OF COMPLEX::"<<endl;
			complex::output(r,i);
		}
		void conjugate(float r,float i)
		{
			i=-i;
			complex::output(r,i);	
		}
		
};
int main()
{
	int i,choice=1;
	float real=0,imag=0,result,p,q,r2,i2;
	complex c;
	input z;
	string s;
	
   cout<<"ENTER 0 TO EXIT "<<endl;
   cout<<"ENTER 1 TO PRINT COMPLEX NUMBER"<<endl;
   cout<<"ENTER 2 TO FIND SQUARE ROOT"<<endl;
   cout<<"ENTER 3 TO FIND POWER OF i"<<endl;
   cout<<"ENTER 4 TO ADD COMPLEX NUMBER"<<endl;
   cout<<"ENTER 5 TO SUBTRACT COMPLEX NUMBER"<<endl;
   cout<<"ENTER 6 TO MULTIPLY"<<endl;
   cout<<"ENTER 7 TO FIND CONJUGATE"<<endl;	
	
while(choice!=0){
	cout<<"ENTER CHOICE"<<endl;
cin>>choice;
	switch(choice){
	case 0:
		break;
	case 1:
		real=z.inputreal();
		imag=z.inputimag();
		c.output(real,imag);
		break;
	case 2:
    	real=z.inputreal();
		imag=z.inputimag();
		c.output(real,imag);
    	p=c.rootreal(real,imag);
	    q=c.rootimag(real,imag);
	    cout<<"SQUARE ROOT:::"<<endl;
	    c.output(p,q);
    	break;
	case 3:
    	int n;
        cout<<"ENTER THE POWER OF i"<<endl;
		cin>>n;
		cout<<"VALUE="<<endl;
		c.pow(n);
		break;
	case 4:
		cout<<"ENTER FIRST COMPLEX NUMBER"<<endl;
		real=z.inputreal();
		imag=z.inputimag();
		c.output(real,imag);
		cout<<"ENTER SECOND COMPLEX NUMBER"<<endl;
		r2=z.inputreal();
		i2=z.inputimag();
		c.output(real,imag);
		c.add(real,r2,imag,i2);
		break;
	case 5:
		cout<<"ENTER FIRST COMPLEX NUMBER"<<endl;
		real=z.inputreal();
		imag=z.inputimag();
		c.output(real,imag);
		cout<<"ENTER SECOND COMPLEX NUMBER"<<endl;
		r2=z.inputreal();
		i2=z.inputimag();
		c.output(real,imag);
		c.sub(real,r2,imag,i2);
		break;
	  
	case 6:
		cout<<"ENTER FIRST COMPLEX NUMBER"<<endl;
		real=z.inputreal();
		imag=z.inputimag();
		c.output(real,imag);
		cout<<"ENTER SECOND COMPLEX NUMBER"<<endl;
		r2=z.inputreal();
		i2=z.inputimag();
		c.output(real,imag);
		c.multiply(real,r2,imag,i2);
		break;
	case 7:
		real=z.inputreal();
		imag=z.inputimag();	
		c.output(real,imag);
		cout<<"ITS CONGUGATE::"<<endl;
		c.conjugate(real,imag);
		break;
		
		default:
			cout<<"ENTER THE VALID KEYWORD"<<endl;
			break;
			 
	}
		
}

	
}
                                                                //AYUSH TIWARI
