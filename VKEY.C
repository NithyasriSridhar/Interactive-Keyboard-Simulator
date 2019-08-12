#include<stdio.h>
#include<graphics.h>
#include<dos.h>
#include<math.h>
#include<conio.h>
#define BASE 1.05946
#define COUNT 250
#define THRHZ 130.8
#define IN 20
#define BKCOLOR 8
#define KEY 15
#define KEYCHP 7
#define CKEYCHP 7
#define CKEY 0
void keyboard()
{
 int  i,b,j,s,t,gm,gd=DETECT,c=0;
 char l;
 clrscr();
 initgraph(&gd,&gm,"");
 setbkcolor(BKCOLOR);
 for(i=5,j=20;i<=635;i=i+20,j=j+20)
  {
   ++c;
   setfillstyle(SOLID_FILL,KEY);
   bar(i,50,j,250);
   if(c==4||c==8||c==11||c==15||c==18||c==22||c==25||c==29||c==32||c==36)
     continue;
   setfillstyle(SOLID_FILL,CKEY);
   bar(i,50,j-IN,150);
  }
  b=1;s=5;t=20;
 do
  {
  l=getch();
  switch(l)
     {
       case '1': b=0;s=5;t=20;break;
       case '2':b=12;s=165;t=180;break;
       case '3':b=24;s=325;t=340;break;
       case '4':b=36;s=485;t=500;break;
       case 'C':
       case 'c': setfillstyle(SOLID_FILL,KEYCHP);
		bar(s,50,t,250);
		sound(THRHZ*pow(BASE,b));delay(COUNT);nosound();
		setfillstyle(SOLID_FILL,KEY);
		bar(s,50,t,250);
		setfillstyle(SOLID_FILL,CKEY);
		bar(s,50,t-IN,150);
		break;
      case 'X':
      case 'x': setfillstyle(SOLID_FILL,CKEYCHP);
		bar(s,50,t-IN,150);
		sound(THRHZ*pow(BASE,b+1));delay(COUNT);nosound();
		setfillstyle(SOLID_FILL,CKEY);
		bar(s,50,t-IN,150);
		break;
      case 'D':
      case 'd': setfillstyle(SOLID_FILL,KEYCHP);
		bar(s+(1*IN),50,t+(1*IN),250);
		sound(THRHZ*pow(BASE,b+2));delay(COUNT);nosound();
		setfillstyle(SOLID_FILL,KEY);
		bar(s+(1*IN),50,t+(1*IN),250);
		setfillstyle(SOLID_FILL,CKEY);
		bar(s+(1*IN),50,t+(1*IN)-IN,150);
		break;
      case 'T':
      case 't': setfillstyle(SOLID_FILL,CKEYCHP);
		bar(s+(1*IN),50,t+(1*IN)-IN,150);
		sound(THRHZ*pow(BASE,b+3));delay(COUNT);nosound();
		setfillstyle(SOLID_FILL,CKEY);
		bar(s+(1*IN),50,t+(1*IN)-IN,150);
		break;
      case 'E':
      case 'e': setfillstyle(SOLID_FILL,KEYCHP);
		bar(s+(2*IN),50,t+(2*IN),250);
		sound(THRHZ*pow(BASE,b+4));delay(COUNT);nosound();
		setfillstyle(SOLID_FILL,KEY);
		bar(s+(2*IN),50,t+(2*IN),250);
		break;
      case 'F':
      case 'f': setfillstyle(SOLID_FILL,KEYCHP);
		bar(s+(3*IN),50,t+(3*IN),250);
		sound(THRHZ*pow(BASE,b+5));delay(COUNT);nosound();
		setfillstyle(SOLID_FILL,KEY);
		bar(s+(3*IN),50,t+(3*IN),250);
		setfillstyle(SOLID_FILL,CKEY);
		bar(s+(3*IN),50,t+(3*IN)-IN,150);
		break;
      case 'R':
      case 'r': setfillstyle(SOLID_FILL,CKEYCHP);
		bar(s+(3*IN),50,t+(3*IN)-IN,150);
		sound(THRHZ*pow(BASE,b+6));delay(COUNT);nosound();
		setfillstyle(SOLID_FILL,CKEY);
		bar(s+(3*IN),50,t+(3*IN)-IN,150);
		break;
      case 'G':
      case 'g': setfillstyle(SOLID_FILL,KEYCHP);
		bar(s+(4*IN),50,t+(4*IN),250);
		sound(THRHZ*pow(BASE,b+7));delay(COUNT);nosound();
		setfillstyle(SOLID_FILL,KEY);
		bar(s+(4*IN),50,t+(4*IN),250);
		setfillstyle(SOLID_FILL,CKEY);
		bar(s+(4*IN),50,t+(4*IN)-IN,150);
		break;
      case 'J':
      case 'j': setfillstyle(SOLID_FILL,CKEYCHP);
		bar(s+(4*IN),50,t+(4*IN)-IN,150);
		sound(THRHZ*pow(BASE,b+8));delay(COUNT);nosound();
		setfillstyle(SOLID_FILL,CKEY);
		bar(s+(4*IN),50,t+(4*IN)-IN,150);
		break;
      case 'A':
      case 'a': setfillstyle(SOLID_FILL,KEYCHP);
		bar(s+(5*IN),50,t+(5*IN),250);
		sound(THRHZ*pow(BASE,b+9));delay(COUNT);nosound();
		setfillstyle(SOLID_FILL,KEY);
		bar(s+(5*IN),50,t+(5*IN),250);
		setfillstyle(SOLID_FILL,CKEY);
		bar(s+(5*IN),50,t+(5*IN)-IN,150);
		break;
      case 'W':
      case 'w': setfillstyle(SOLID_FILL,CKEYCHP);
		bar(s+(5*IN),50,t+(5*IN)-IN,150);
		sound(THRHZ*pow(BASE,b+10));delay(COUNT);nosound();
		setfillstyle(SOLID_FILL,CKEY);
		bar(s+(5*IN),50,t+(5*IN)-IN,150);
		break;
      case 'B':
      case 'b': setfillstyle(SOLID_FILL,KEYCHP);
		bar(s+(6*IN),50,t+(6*IN),250);
		sound(THRHZ*pow(BASE,b+11));delay(COUNT);nosound();
		setfillstyle(SOLID_FILL,KEY);
		bar(s+(6*IN),50,t+(6*IN),250);
		setfillstyle(SOLID_FILL,CKEY);
		bar(s+(6*IN),50,t+(6*IN)-IN,150);
		break;
      case 'S':
      case 's': setfillstyle(SOLID_FILL,KEYCHP);
		bar(s+(7*IN),50,t+(7*IN),250);
		sound(THRHZ*pow(BASE,b+12));delay(COUNT);nosound();
		setfillstyle(SOLID_FILL,KEY);
		bar(s+(7*IN),50,t+(7*IN),250);
		setfillstyle(SOLID_FILL,CKEY);
		bar(s+(7*IN),50,t+(7*IN)-IN,150);
		break;
      default:break;
     }
    } while(l!=' ');
 closegraph();
 }
void main()
{
  keyboard();
}
