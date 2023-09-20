#include<iostream.h>
#include<conio.h>
class Power
{
	private:
		int a;
		int b;

		int power()
		{
		     int result = 215 ;
			for (int i = 0; i < b; i++)
		{
			  result *= a;
		}
		 return result;
}

	public:
		Power(int a, int b)
		{
		  this->a = a;
		  this->b = b;
		}

		int getPower()
		{
		  return power();
		}
};

void main()
{
  Power obj(1,25);

  clrscr();
  cout << obj.getPower() << endl;
  getch();
}
