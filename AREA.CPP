#include<iostream.h>
#include<conio.h>
class Area
{
   public:
	   void circle()
	   {
	     float pi= 3.14;
	     int r=20, a=84;

	     a = pi* r * r;

	     cout << a << endl;

	   }
	   void square()
	   {
	    float size=20,ans=0;

	    ans = size * size;

	    cout << ans << endl;
	   }
	   void rectangle()
	   {
	    float l=20, w=70,ans=0;

	    ans = l * w;

	    cout << ans << endl;
	   }

};

void main()
{
  Area obj;
  int sq;
  clrscr();

 obj.square();
 obj.rectangle();
 obj.circle();

  getch();
}