#include<stdio.h>
#include<conio.h>
#include<dos.h>
#include<time.h>
int a[4][4]={1,4,15,7,
	     8,10,2,11,
	     14,3,6,13,
	     12,9,5,32};
int b[4][4]={1,2,3,4,
	     5,6,7,8,
	     9,10,11,12,
	     13,14,15,32};
int x,y,p,q,cpos,rpos,r=0,c=1,secount=0,seconds=0,min=0,sec=0;
int error=0,error2=0,count=0,minutes=0;

userchoice()
	{
	time_t start=time(NULL);
	  time_t next;
	  union REGS i,o;
	  while(!kbhit())
	     {  next=time(NULL);
		seconds=sec+difftime(next,start);
		printf("%d sec\r",seconds);
	     }
	  sec=seconds;
	  i.h.ah=0;
	  int86(22,&i,&o);
	  return(o.h.ah);
	}

void display()
	 { printf("\n\n");
	   for(x=0;x<4;x++)
	    { printf("\t\t");
	      for(y=0;y<4;y++)
	       { if(a[x][y]!=32 && count==0)
		    { printf("%d",a[x][y]);
		      delay(300);
		      printf("     \t");
		    }
		  if(a[x][y]!=32 && count!=0)
		    { printf("%d",a[x][y]);
		      printf("     \t");
		    }
		  if(a[x][y]==32 && count==0)
		    { printf("%c",a[x][y]);
		      delay(300);
		      printf("     \t");
		    }
		  if(a[x][y]==32 && count!=0)
		    { printf("%c",a[x][y]);
		      printf("     \t");
		    }
	       }
	      printf("\n\n");
	    }
	 }
check()
	{ for(p=0;p<4;p++)
	   { for(q=0;q<4;q++)
	     { if(a[p][q]==b[p][q])
		 c++;
	       else
		  { c=1;
		    break;
		  }
	      }
	     if((p!=3 && a[p][q]!=b[p][q]) && (p==3 && a[p][q-1]!=b[p][q]))
	       { c=1;
		break;
	       }
	   }
	   return c;
	}
main()
	{
	  rpos=cpos=3;
	  clrscr();
	  do
	     { clrscr();
	       if(error)
		 { printf("\n\nUse the correct DIRECTION KEYS\n\n");
		   error=0;
		   count--;
		 }
	       if(error2)
		{ printf("\n\nUse only DIRECTION KEYS \n\n");
		  count--;
		  error2=0;
		}
	       if(count==0)
		  printf("\n\nINSTRUCTION : Arrange the nos. in ascending order using DIRECTION KEYS");
	       display();
	       printf("\nNO. OF MOVES : %d",count);
	       printf("\n\n\n\n\t\t\tANY TIME PRESS 'ESC' TO EXIT\n\n");
	       r=userchoice();
	       count++;
	       switch(r)
		 {
		 case 72 :
			    if(rpos!=3)
			     { a[rpos-1][cpos]=a[++rpos][cpos];
			       a[rpos][cpos]=' ';
			     }
			    else
			       error=1;
			    break;
		   case 75 :
			    if(cpos!=3)
			     { a[rpos][cpos-1]=a[rpos][++cpos];
			       a[rpos][cpos]=' ';
			     }
			    else
			      error=1;
			    break;
		   case 80 :
			    if(rpos!=0)
			     { a[rpos+1][cpos]=a[--rpos][cpos];
			       a[rpos][cpos]=' ';
			     }
			    else
			       error=1;
			    break;
		   case 77 :
			    if(cpos!=0)
			     { a[rpos][cpos+1]=a[rpos][--cpos];
			       a[rpos][cpos]=' ';
			     }
			    else
			       error=1;
			    break;
		   case 1 :
			    exit(0);
		   default :
			    error2=1;
			    break;
		 } r=0;
	     }   while(check()!=17);
	       clrscr();
	       display();
	       printf("\n\n\t\t\tCONGRATES !! PUZZLE COMPLETED. %c %c\n\n",1,1);
	       printf("\t\t\tTotal no. of moves : %d.",count);
	       printf("\t\t\tTotal time : %d sec.",seconds);
	       getch();
	       return 0;
	 }