#include<graphics.h>
#include<conio.h>
#include<stdio.h>
#define PF printf
#define SF scanf

void main()
{
int gd = DETECT,gm;

 int a;
 float e,f,g,c,b,x,y,z;
 clrscr();
 conversion:
 PF("                Welcome to Conversion calculator          \n\n");
 PF(" \n          **************************************\n\n\n       ");
 PF("             Press  1 to 10 for train conversion calculation\n\n1-coverting to km/hr to m/s\n2-converting to m/s to km/hr\n3-To find the speed of the Train\n4-To Find the Time of the train\n5-To find the distance\n6-To find the time for two trains are crossing at opposite direction\n7-To find the time for two trains are passing in same direction \n8-To find the average speed of two trains\n9-To calculate the relative speed of the train in same direction\n10-To calculate the relative speed of the train in opposite direction direction\n11-FOR EXIT");
 PF("\n\n*Enter your choice\n");
 SF("%d",&a);
 clrscr();

 switch(a)
 {
 case 1:
 PF("\n*REQUIREMENTS");
 PF("\n*1-You must enter the value in km/hr \n \n");
 PF("\n*Formula for coverting from km/hr to m/sec is x=a*5/18");
 PF("\n*Please enter the requirement values  ");
 PF("\n*Enter the value in km/hr");
 SF("%f",&e);
 f=e*5/18;
 PF("\n*The value in mtr/sec: %f",f);
 break;
 case 2:
 PF("*REQUIREMENTS \n1 1-You must enter the value in mtr/sec");
 PF(" \n\n* FORMULA for converting from met/sec to km/hr is x=18/5");
 PF("\n*Please enter the requirement values  ");
 PF("\n*Enter the value in m/s");
 SF("%f",&e);
 f=e*5/18;
 PF("\n*The value in km/hr:%f km/hr",f);
 break;
 case 3:
 PF("*REQUIREMENTS");
 PF("\n*1-You must give the distance value");
 PF("\n*2-You must give the time value");
 PF("\n\n*FORMULA for find the speed of the train or any vechile is speed=Distance/Time");
 PF("\n\n*Enter the Requirement values");
 PF("\n\n*Enter the distance value  :");
 SF("%f",&e);
 PF("\n\n*Enter the time value :  ");
 SF("%f",&f);
 g=e/f;
 PF("\n\n\n*The speed of the train or any vechile is :%f sec",g);
 break;
 case 4:
 PF("\n*REQUIREMENTS");
 PF("\n\n*1-You must enter the distance of the train \n*2-You must enter the speed of the train");
 PF("\n\n*FORMULA for find the time of the train is Time=Distance/Time");
 PF("\n*Enter the REQUIREMENTS values ");
 PF("\n\n*Enter the distance value  :  ");
 SF("%f",&e);
 PF("\n\n*Enter the speed value  :  ");
 SF("%f",&f);
 g=e/f;
 PF("\n\n*The Time ot the train is  : %f sec",g);
 break;
 case 5:
 PF("*REQUIREMENTS");
 PF("\n*1-You must enter the speed of the train\n*2-You must enter the time of the train");
 PF("\n*FORMULA for find the distance of the train  is Distance=speed/Time");
 PF("\n\n*Please enter the requirement values");
 PF("\n\n*Enter the speed value  : ");
 SF("%f",&e);
 PF("\n\n*Enter the time value   : ");
 SF("%f",&f);
 g=e/f;
 PF("\n\n\n*The Distance value is  : %f sec",g);
 break;
 case 6:
 PF("\n*REQUIREMENTS");
 PF("\n\n*1-You must know the length of the two  train\n*2-You must also know the speed of the two trains");
 PF("\n\n*FORMULA for find the distance of the two trains are moving at opposite directions is x=(a+b)/(c+d)");
 PF("\n\n*Please enter the following requirement values");
 PF("\n\nEnter the length of the first train  :  ");
 SF("%f",&e);
 PF("\n*Enter the length of the second train  :  ");
 SF("%f",&f);
 PF("\n*Enter the speed of the first train  :  ");
 SF("%f",&c);
 PF("\n*Enter the speed of the second train  :  ");
 SF("%f",&b);
 g=(e+f)/(c+b);
 PF("\n\n*The distance of two train is  : %f km/Hr",g);
 break;
 case 7:
 PF("\n*REQUIREMENTS");
 PF("\n\n*1-You must know the length of the two  train\n\n *2-You must also know the speed of the two trains");
 PF("\n\n*FORMULA for find the distance of the two trains are moving at same directions is x=(a+b)/(c-d)");
 PF("\n\n*Please enter the following requirement values");
 PF("\n\n*Enter the length of the first train  :  ");
 SF("%f",&e);
 PF("\n\n*Enter the length of the second train  :  ");
 SF("%f",&f);
 PF("\n\n*Enter the speed of the first train  :  ");
 SF("%f",&c);
 PF("\n\n*Enter the speed of the second train  :  ");
 SF("%f",&b);
 g=(e+f)/(c-b);
 PF("\n\n*The distance of two train is  : %f Km/Hr ",g);
 break;
 case 8:
 PF("\n\n*CONCEPTS");
 PF("\n\n*Suppose a train covers a ceretain distance at x km/hr and an equal distance at y km/hr.Then,Find the average speed during the whole journey");
 PF("\n\n*REQUIREMENTS");
 PF("\n\n*1-You must know the km/hr for two trains");
 PF("\n\n*FORMULA for find the average speed of the two trains is x=2*(x*y)/(x+y)");
 PF("\n\n*Please enter the following requirements values");
 PF("\n\n*Enter the km/hr for first train : ");
 SF("%f",&x);
 PF("\n*Enter the km/hr for second train : ");
 SF("%f",&y);
 a=2*(x*y)/(x+y);
 PF("\n\n*The average speed of the two trains is : %d Km/Hr",a);
 break;
 case 9:
 {
 PF("\n*REQUIREMENTS");
 PF("\n\n*1-You must know the speed of the two trains to find the relative speed of two trains");
 PF("\n\n*FORMULA for  find the relative speed of two trains are at same direction is x=a*b");
 PF("\n\n*Please Enter requirements values");
 PF("\n\n*Enter the speed of the first train  :  ");
 SF("%f",&x);
 PF("\n\n*Enter the speed of the second train  : ");
 SF("%f",&y);
 g=x*y;
 PF("\n\n*The relative speed of the two trains are in the same direction : %f km/hr",g);
 break;
 }
 case 10:
 {
 PF("\n*REQUIREMENTS");
 PF("\n\n*1-You must know the speed of the two trains to find the relative speed of two trains");
 PF("\n\n*FORMULA for  find the relative speed of two trains are at opposite direction is x=a+b");
 PF("\n\n*Please Enter requirements values");
 PF("\n\n*Enter the speed of the first train  :  ");
 SF("%f",&x);
 PF("\n\n*Enter the speed of the second train  : ");
 SF("%f",&y);
 g=x+y;
 PF("\n\n*The relative speed of the two trains are in the opposite direction : %f Km/Hr",g);
 break;
 }
 case 11:
 {
 PF("exit");
 break;
 }
 default:
 PF("\n*wrong input\n");
 break;
 }
 PF("\n----------------------------Thank you-------------------------------");
initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");

 line(300,150,300,300);
  line(390,150,390,300);
  line(290,150,400,150);
  line(290,145,400,145);
  line(290,145,290,150);
  line(400,145,400,150);
  line(310,160,380,160);
  line(310,210,380,210);
  line(310,160,310,210);
  line(380,160,380,210);
  circle(346,300,22);
  circle(346,300,27);
  line(300,300,318,300);
  line(390,300,375,300);
  line(300,225,200,225);
  line(200,225,200,300);
  line(200,300,215,300);
  circle(230,300,15);
  circle(230,300,10);
  circle(270,300,15);
  circle(270,300,10);
  line(255,300,245,300);
  line(285,300,305,300);
  line(215,305,260,305);
  line(217,309,262,309);
  line(215,305,217,309);
  line(260,305,262,309);
  line(280,225,280,205);
  line(265,225,265,205);
  line(265,205,280,205);
  ellipse(273,205,0,180,7,6);
  line(240,225,240,210);
  line(230,225,230,210);
  line(240,210,230,210);
  ellipse(235,210,0,180,5,4);
  line(210,225,210,185);
  line(215,225,215,185);
  line(210,185,215,185);
  line(210,185,190,150);
  line(215,185,235,150);
  line(190,150,235,150);
  line(190,150,200,140);
  line(235,150,225,140);
  line(200,140,225,140);
  getch();
  closegraph();
}