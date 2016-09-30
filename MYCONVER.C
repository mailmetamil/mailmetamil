#include<stdio.h>                        /*Function Library*/
#include<conio.h>                        /*Function Library*/
#define BRITISH 0.65
#define DUTCH 1.7
#define FRENCH 5.3
#define GERMAN 1.5
#define JAPANESE 98
#define ITALIAN 1570
#define MEXICAN 3.4
#define SWISS 1.5
#define PF printf                        /*Defining macro processor*/
#define SF scanf                         /*Defining macro processor*/
int main()                               /*Body of the program*/
{
 int choice,typ;                         /*variable declaration section*/
 float no,Noofunitsperfirstcurrency;
 clrscr();                                /*To clear the screen*/
 PF("-----Welcome To Menu Driven Program To Find Currency Conversion-----");
 PF("\n\n Requirements:- \n\n *User should Enter the two differnt currency ");
 PF("\nChoose firstc urrency type");
 PF("\n Press\n 1 for British pound :-  ");
 SF("%d",&choice);                       /*To read choice from user*/
 switch(choice)
 {                                       /*switch case begins*/
 case 1:
 PF("\nYou choosed British Pound ");
 PF("\nValue of British Pound is 0.65 Per U.S Dollar");
 PF("\nChoose the second Currency :");
 PF("\n 1 for Canadian Dollar   ");
 PF("\n 2 for Butch Guider      ");
 PF("\n 3 for French Frances    ");
 PF("\n 4 for German movrk      ");
 PF("\n 5 For Japanaese yen     ");
 PF("\n 6 for Italian Lira      ");
 PF("\n 7 for Mexican Peso      ");
 PF("\n 8 for Swiss Frans       ");
 SF("%d",&typ);                         /*switch case choice read from user*/
 if(typ==1)                             /*if conditions begins*/
 {
  Noofunitsperfirstcurrency=1.4/100;
  no=0.65/Noofunitsperfirstcurrency;
  PF("\nThe Number of units of canadan equivalent to one british pound is %f",no);
 }
 if(typ==2)
 {
  Noofunitsperfirstcurrency=DUTCH/100;
  no=0.65/Noofunitsperfirstcurrency;
  PF("\nThe Number of units of Dutch guider equivalent to one british pound is %f",no);
 }
 if(typ==3)
 {
  Noofunitsperfirstcurrency=FRENCH/100;
  no=0.65/Noofunitsperfirstcurrency;
  PF("\nThe Number of units of French Frances equivalent to one british pound is %f",no);
 }
 if(typ==4)
 {
  Noofunitsperfirstcurrency=GERMAN/100;
  no=0.65/Noofunitsperfirstcurrency;
  PF("\nThe Number of units of German movrk equivalent to one british pound is %f",no);
 }
 if(typ==5)
 {
  Noofunitsperfirstcurrency=JAPANESE/100;
  no=0.65/Noofunitsperfirstcurrency;
  PF("\nThe Number of units of Japanese Yen equivalent to one british pound is %f",no);
 }
 if(typ==6)
 {
  Noofunitsperfirstcurrency=ITALIAN/100;
  no=0.65/Noofunitsperfirstcurrency;
  PF("\nThe Number of units of Italian lira equivalent to one british pound is %f",no);
 }
  if(typ==7)
 {
  Noofunitsperfirstcurrency=MEXICAN/100;
  no=0.65/Noofunitsperfirstcurrency;
  PF("\nThe Number of units of Mexican peso equivalent to one british pound is %f",no);
 }
  if(typ==8)
 {
  Noofunitsperfirstcurrency=SWISS/100;
  no=0.65/Noofunitsperfirstcurrency;
  PF("\nThe Number of units of SwissFrancs equivalent to one british pound is %f",no);
 }                                        /*if conditions ends*/
 break;
 default:
 PF("\nYou are entered wrong choice");
 break;
 }                                        /*switch case ends*/
 getch();
}