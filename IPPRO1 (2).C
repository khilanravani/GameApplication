#include<stdio.h>
#include<string.h>
#include<process.h>
#include<graphics.h>
#include<conio.h>
#include<dos.h>
#include<time.h>
#include<stdlib.h>
#include<limits.h>

int i,j,c=24,e=25,f=175,pagain,address=1,x,y,choice,input1,counter[2];
// wchar_t  *b[5][5],*temp;
char *b[40][25], *temp;
void board1();
void rulebook1();
void navigate(int , int,int,int,int);
void frontscreen();
void colouredlines();
void randomize1();
void player2();
int tictactoemain();

void randomize2();
int main()
{
  int d=219;
  int gd=DETECT,gm;
  clrscr();

  initgraph(&gd,&gm,"C:\\Turboc3\\BGI");
  frontscreen();
  //srand(time(NULL));
  switch(choice)
   {

     case 1: clrscr();
	     rulebook1();
	     scanf("%d",&input1);
	     if(input1==1){
	     clrscr();
	     setbkcolor(BLACK);
	     clrscr();

	     board1();
	     randomize2();
	     //randomize1();
	     colouredlines();
	     printf("\a\a");
	     //navigate();
	     //gotoxy(6,20);
	    // printf("%c%c",f,f);
	     colouredlines();}
	     //navigate();
	     //if(select())
	     //{printf("Helloo!!");

	     break;

     case 2:sudokumain();

	     break;
     case 3:tictactoemain();
	     break;

     default: printf("Invalid choice!!!!!!!!!!!");
	    break;
   }
 // gotoxy(54,25);
 // printf("%c%c",c,c);
  /*
  gotoxy(15,10);
  printf("%c%c",c,c);

  gotoxy(12,10);
  printf("%c%c",c,c);

  gotoxy(15,9);
  printf("%c%c",c,c);

  gotoxy(18,9);
  printf("%c%c",c,c);*/

  //if(kbhit())
  //printf("Hello!!!!!");

  //gotoxy(21,19);
  //printf(" %c%c",c,c);
  //for(i=5 ;i<25 ;i=i+2)


  getch();
  closegraph();
  return 0;


}
void frontscreen()
{
 printf("\n\n\t\t\t%c%c%c%c WELCOME TO OUR APPLICATION %c%c%c%c ",c,c,c,c,c,c,c,c);
 printf("\n\t\t\t1)PATH FINDING GAME\n\t\t\t2)SUDOKU\n\t\t\t3)TIC TAC TOE");
 printf("\n\n\t\t  Enter Your Choice: ");
 scanf("%d",&choice);

}
void rulebook1()
{
  printf("\n\n\t\tHere are some of the rules for playing the pathfinding game:");
  printf("\n\n1) This is a two player game");
  printf("\n2) You need to reach the ending point using the shortest possible path");
  printf(" while       tackling the obstacles");
  printf("\n3) The player finishing the game in the least no. of moves wins");
  printf("\n4) There is a time limit for the game");
  printf("\n5) The controls are:");
  printf("\n\t\t UP: W key\n\t\t DOWN: S key\n\t\t RIGHT: D key\n\t\t LEFT: A key");
  printf("\n\t\t RIGHT UP: O key \n\t\t RIGHT DOWN: K key");
  printf("\n\t\t LEFT UP: I key \n\t\t LEFT DOWN: J key");
  printf("\n\n");
  printf("\n\n\nEnter 1 to continue playing: ");

}
void board1()
{
  //clrscr();
  //system("cls");
  temp=malloc(10*sizeof(char));
  temp="|__";
  //printf("   |   |   |   |   |   |   |   |   |   \n");
 // printf(" %c | %c | %c | %c | %c | %c | %c | %c | %c | %c\n", square[0][0],square[0][1],square[0][2],square[0][3],square[0][4],square[0][5],square[0][6],square[0][7], square[0][8], square[0][9]);
   printf("\t\t\t\tPATH FINDING GAME\t\t\t    ");
   printf("        __ __ __ __ __ __ __ __ __ __ __ __ __ __ __ __ __ __ __ __ __ \n");
   for(i=0 ; i<23 ;i++)
    {
	for(j=0 ;j<25 ;j++)
	{
	    b[i][j]=malloc(10*sizeof(char));
		if(j==0)
		 {
			b[i][j]="    |__";

			printf("%s",b[i][j]);
		 }
	    else if(j==24)
	    {
		printf("|  ");
	    }
	    else
	    {
	 b[i][j]=temp;
	   printf("%s",b[i][j]);}
	}
	printf("\n");
    }
   // gotoxy(10,0);
   // printf("S");
   // gotoxy(70,20);
  //  printf("A");
  colouredlines();
  printf("\nEnter Your Move:\n");


}

void colouredlines()
{

  /*line(35,29,612,29);
  line(35,28,612,28);

  line(35,45,612,45);
  line(35,44,612,44);

  line(35,348,612,348);
  line(35,349,612,349);*/
  setcolor(MAGENTA);

  for(i=28 ; i<=396 ;i=i+16)
   {
    for(j=29 ;j<=397 ;j=j+16)
     {
       line(35,i,612,i);
       line(35,j,612,j);

     }

   }

  setcolor(RED);
  /*line(35,29,35,348);
  line(36,29,36,348);

  line(59,29,59,348);
  line(60,29,60,348);

  line(611,29,611,348);
  line(612,29,612,348);*/

  for(i=35 ; i<=611 ;i=i+24)
   {
    for(j=36 ; j<=612 ;j=j+24)
     {

       line(i,29,i,396);
       line(j,29,j,396);
     }

   }
 // if(kbhit())
 // printf("Hello");

}
void randomize2()//For starting and ending point
{
 char z;
 int starti,startj,endi,endj,arr[]={6,9,12,15,18,21,24,
     27,30,33,36,39,42,45,48,51,54,57,60,63,66,69,72,75};
 /*srand(time(NULL));
 starti= 0 +rand() % 24;
 startj=3 +rand() % 23;
 gotoxy(arr[starti],startj);
 //textcolor(BLUE);

 z='a';
 printf("%c",z);
 endi=0 + rand() % 24;
 endj=3+ rand() % 23;
 gotoxy(arr[endi],endj);
 textcolor(WHITE);*/
	starti=15;
	startj=8;
	endi=60;
	endj=20;
	randomize1(endi,endj,starti,startj);



}
void randomize1(int endi,int endj,int starti,int startj)//For obstacles
{

	int k,ari[200],z=0,arj[200],tmpi,tmpj,flag,arr[]={6,9,12,15,18,21,24,
	27,30,33,36,39,42,45,48,51,54,57,60,63,66,69,72,75};
	srand(time(NULL));
	setcolor(BLACK);
	for(i=0;i<150;)
	{
		flag=1;
		tmpi= 0+rand() % 24;
		tmpj= 3 + rand() % 23;
		ari[i]=tmpi;
		arj[i]=tmpj;

		for(k=0;k<i;k++)
		{
			if(tmpi==ari[k] && tmpj==arj[k])
			{
				flag=0;
				i++;
				break;
			}
			else
			flag=1;
		}
			if(flag==1)
			{

				gotoxy(arr[tmpi],tmpj);
				setcolor(YELLOW);
				printf("%c%c ",c,c);

				i++;
			}

	}
	colouredlines();
	gotoxy(endi,endj); printf("XX");
	gotoxy(starti,startj); printf("SS");
	colouredlines();
	 navigate(starti,startj,endi,endj,z);
	 scanf("%d",&pagain);
	 if(pagain==9){
	   player2(ari,arj,starti,startj,endi,endj);
	 }
}

void navigate(int tempi,int tempj,int endi,int endj,int z)
{

 int up=30,down=31,left=17,right=16,diagonal=240,count1=0;
 char move;
 //printf("%d %d",tempi,tempj);

  while(!(endi==tempi&&endj==tempj))
  {

   if(kbhit()==0){
   move=getch();
    if(move=='A'|| move=='a')
     {
      tempi=tempi-3;
      gotoxy(tempi,tempj);
      printf("%c%c ",left,left);
      colouredlines();
      count1++;
     }
    else if(move=='D'||move=='d')
     {
      tempi=tempi+3;
      gotoxy(tempi,tempj);
      printf("%c%c ",right,right);
      colouredlines();
      count1++;

     }
    else if(move=='W'||move=='w')
     {
      tempj=tempj-1;
      gotoxy(tempi,tempj);
      printf("%c%c ",up,up);
      colouredlines();
      count1++;

     }
     else if(move=='S'||move=='s')
     {
      tempj=tempj+1;
      gotoxy(tempi,tempj);
      printf("%c%c ",down,down);
      colouredlines();
      count1++;

     }
     else if(move=='J'||move=='j')
     {
      tempi=tempi-3;
      tempj=tempj+1;
      gotoxy(tempi,tempj);
      printf("%c%c ",diagonal,diagonal);
      colouredlines();
      count1++;

     }
     else if(move=='K'||move=='k')
     {
      tempi=tempi+3;
      tempj=tempj+1;
      gotoxy(tempi,tempj);
      printf("%c%c ",diagonal,diagonal);
      colouredlines();
      count1++;

     }
     else if(move=='I'||move=='i')
     {
      tempi=tempi-3;
      tempj=tempj-1;
      gotoxy(tempi,tempj);
      printf("%c%c ",diagonal,diagonal);
      colouredlines();
      count1++;

     }
     else if(move=='O'||move=='o')
     {
      tempi=tempi+3;
      tempj=tempj-1;
      gotoxy(tempi,tempj);
      printf("%c%c ",diagonal,diagonal);
      colouredlines();
      count1++;

     }
     else
     exit(0);
    }//If ends

  }//while ends
   counter[z]=count1;
   printf("%d",count1);
  // if(tempi==endi&&tempj==endj)
   // {
   //  printf("CONGRATULATIONS!!! YOU WIN");
   // }



}
void player2(int ari[],int arj[],int starti,int startj,int endi,int endj)
{
  int i,z=1,arr[]={6,9,12,15,18,21,24,
	27,30,33,36,39,42,45,48,51,54,57,60,63,66,69,72,75};
  clrscr();
  board1();
  colouredlines();


	 for(i=0;i<150;i++)
	 {
		gotoxy(arr[ari[i]],arj[i]);
		printf("%c%c ",c,c);

	 }
	 colouredlines();
	 gotoxy(endi,endj); printf("XX");
	gotoxy(starti,startj); printf("SS");
	colouredlines();
	 navigate(starti,startj,endi,endj,z);


if(counter[0]>counter[1])
{ printf("\n\tPlayer 1 is the winner ");}
else if(counter[1]>counter[0])
{printf("\n\tPlayer 2 is the winner");}
else
{printf("\n\tDRAW");}

}

#include <stdio.h>
#include <conio.h>
#include<string.h>

char square[10] = { '0', '1', '2', '3', '4', '5', '6', '7', '8', '9' };

int checkwin();
void board();

int tictactoemain()
{
    int player = 1, i, choice;

    char mark;
    do
    {
	board();
	player = (player % 2) ? 1 : 2;

	printf("Player %d, enter a number:  ", player);
	scanf("%d", &choice);

	mark = (player == 1) ? 'X' : 'O';

	if (choice == 1 && square[1] == '1')
	    square[1] = mark;

	else if (choice == 2 && square[2] == '2')
	    square[2] = mark;

	else if (choice == 3 && square[3] == '3')
	    square[3] = mark;

	else if (choice == 4 && square[4] == '4')
	    square[4] = mark;

	else if (choice == 5 && square[5] == '5')
	    square[5] = mark;

	else if (choice == 6 && square[6] == '6')
	    square[6] = mark;

	else if (choice == 7 && square[7] == '7')
	    square[7] = mark;

	else if (choice == 8 && square[8] == '8')
	    square[8] = mark;

	else if (choice == 9 && square[9] == '9')
	    square[9] = mark;

	else
	{
	    printf("Invalid move ");

	    player--;
	    getch();
	}
	i = checkwin();

	player++;
    }while (i ==  - 1);

    board();

    if (i == 1)
	printf("==>\a Player %d wins!!!! ", --player);
    else
	printf("==>\aGame draw");

    getch();

    return 0;
}

/* GAME STATUS
1 FOR GAME IS OVER WITH RESULT
-1 FOR GAME IS IN PROGRESS
O GAME IS OVER AND NO RESULT
 */

int checkwin()
{
    if (square[1] == square[2] && square[2] == square[3])
	return 1;

    else if (square[4] == square[5] && square[5] == square[6])
	return 1;

    else if (square[7] == square[8] && square[8] == square[9])
	return 1;

    else if (square[1] == square[4] && square[4] == square[7])
	return 1;

    else if (square[2] == square[5] && square[5] == square[8])
	return 1;

    else if (square[3] == square[6] && square[6] == square[9])
	return 1;

    else if (square[1] == square[5] && square[5] == square[9])
	return 1;

    else if (square[3] == square[5] && square[5] == square[7])
	return 1;

    else if (square[1] != '1' && square[2] != '2' && square[3] != '3' &&
	square[4] != '4' && square[5] != '5' && square[6] != '6' && square[7]
	!= '7' && square[8] != '8' && square[9] != '9')

	return 0;
    else
	return  - 1;
}


void board()
{
    system("cls");
    printf("\n\n\tTic Tac Toe\n\n");

    printf("Player 1 (X)  -  Player 2 (O)\n\n\n");


    printf("          |     |     \n");
    printf("       %c  |  %c  |  %c \n", square[1], square[2], square[3]);

    printf("     _____|_____|_____\n");
    printf("          |     |     \n");

    printf("       %c  |  %c  |  %c \n", square[4], square[5], square[6]);

    printf("     _____|_____|_____\n");
    printf("          |     |     \n");

    printf("       %c  |  %c  |  %c \n", square[7], square[8], square[9]);

    printf("          |     |     \n\n");
}

#include <stdio.h>
#include <stdlib.h>

char level5[9][9] = {{' ', '9',' ',' ','4',' ','6',' ',' '},{' ', '2', ' ','3',' ','8','5',' ',' '},{'7',' ',' ',' ',' ',' ','9',' ','8'},{' ',' ','6','8',' ','1',' ',' ',' '},{' ',' ',' ',' ',' ',' ',' ',' ',' '},{' ',' ',' ','5',' ','6','2',' ',' '},{'1',' ','3',' ',' ',' ',' ',' ','2'},{' ',' ','7','6',' ','4',' ','3',' '},{' ',' ','8',' ','1',' ',' ','5',' '}};
int sudokumain();
void board5()
{

    system("color 0A");

    printf("\n\n");
    printf("      1   2   3   4   5   6   7   8   9\n\n");
    printf("  A   %c   %c   %c | %c   %c   %c | %c   %c   %c\n",level5[0][0],level5[0][1],level5[0][2],level5[0][3],level5[0][4],level5[0][5],level5[0][6],level5[0][7],level5[0][8]);
    printf("                |           |\n");
    printf("  B   %c   %c   %c | %c   %c   %c | %c   %c   %c\n",level5[1][0],level5[1][1],level5[1][2],level5[1][3],level5[1][4],level5[1][5],level5[1][6],level5[1][7],level5[1][8]);
    printf("                |           |\n");
    printf("  C   %c   %c   %c | %c   %c   %c | %c   %c   %c\n",level5[2][0],level5[2][1],level5[2][2],level5[2][3],level5[2][4],level5[2][5],level5[2][6],level5[2][7],level5[2][8]);
    printf("     ___________|___________|___________\n");
    printf("  D   %c   %c   %c | %c   %c   %c | %c   %c   %c\n",level5[3][0],level5[3][1],level5[3][2],level5[3][3],level5[3][4],level5[3][5],level5[3][6],level5[3][7],level5[3][8]);
    printf("                |           |\n");
    printf("  E   %c   %c   %c | %c   %c   %c | %c   %c   %c\n",level5[4][0],level5[4][1],level5[4][2],level5[4][3],level5[4][4],level5[4][5],level5[4][6],level5[4][7],level5[4][8]);
    printf("                |           |\n");
    printf("  F   %c   %c   %c | %c   %c   %c | %c   %c   %c\n",level5[5][0],level5[5][1],level5[5][2],level5[5][3],level5[5][4],level5[5][5],level5[5][6],level5[5][7],level5[5][8]);
    printf("     ___________|___________|___________\n");
    printf("  G   %c   %c   %c | %c   %c   %c | %c   %c   %c\n",level5[6][0],level5[6][1],level5[6][2],level5[6][3],level5[6][4],level5[6][5],level5[6][6],level5[6][7],level5[6][8]);
    printf("                |           |\n");
    printf("  H   %c   %c   %c | %c   %c   %c | %c   %c   %c\n",level5[7][0],level5[7][1],level5[7][2],level5[7][3],level5[7][4],level5[7][5],level5[7][6],level5[7][7],level5[7][8]);
    printf("                |           |\n");
    printf("  I   %c   %c   %c | %c   %c   %c | %c   %c   %c\n",level5[8][0],level5[8][1],level5[8][2],level5[8][3],level5[8][4],level5[8][5],level5[8][6],level5[8][7],level5[8][8]);

}

void gameplay(char a, int b){

    char num;

    printf("\nEnter the number: ");
    scanf(" %c", &num);

    if(a=='A'&& b==1)
	level5[0][0] = num;
    else if(a=='A' && b==3)
	level5[0][2] = num;
    else if(a=='A' && b==4)
	level5[0][3] = num;
    else if(a=='A' && b==6)
	level5[0][5] = num;
    else if(a=='A' && b==8)
	level5[0][7] = num;
    else if(a=='A' && b==9)
	level5[0][8] = num;
    else if(a=='B' && b==1)
	level5[1][0] = num;
    else if(a=='B' && b==3)
	level5[1][2] = num;
    else if(a=='B' && b==5)
	level5[1][4] = num;
    else if(a=='B' && b==8)
	level5[1][7] = num;
    else if(a=='B' && b==9)
	level5[1][8] = num;
    else if(a=='C' && b==2)
	level5[2][1] = num;
    else if(a=='C' && b==3)
	level5[2][2] = num;
    else if(a=='C' && b==4)
	level5[2][3] = num;
    else if(a=='C' && b==5)
	level5[2][4] = num;
    else if(a=='C' && b==6)
	level5[2][5] = num;
    else if(a=='C' && b==8)
	level5[2][7] = num;
    else if(a=='D' && b==1)
	level5[3][0] = num;
    else if(a=='D' && b==2)
	level5[3][1] = num;
    else if(a=='D' && b==5)
	level5[3][4] = num;
    else if(a=='D' && b==7)
	level5[3][6] = num;
    else if(a=='D' && b==8)
	level5[3][7] = num;
    else if(a=='D' && b==9)
	level5[3][8] = num;
    else if(a=='E' && b==1)
	level5[4][0] = num;
    else if(a=='E' && b==2)
	level5[4][1] = num;
    else if(a=='E' && b==3)
	level5[4][2] = num;
    else if(a=='E' && b==4)
	level5[4][3] = num;
    else if(a=='E' && b==5)
	level5[4][4] = num;
    else if(a=='E' && b==6)
	level5[4][5] = num;
    else if(a=='E' && b==7)
	level5[4][6] = num;
    else if(a=='E' && b==8)
	level5[4][7] = num;
    else if(a=='E' && b==9)
	level5[4][8] = num;
    else if(a=='F' && b==1)
	level5[5][0] = num;
    else if(a=='F' && b==2)
	level5[5][1] = num;
    else if(a=='F' && b==3)
	level5[5][2] = num;
    else if(a=='F' && b==5)
	level5[5][4] = num;
    else if(a=='F' && b==8)
	level5[5][7] = num;
    else if(a=='F' && b==9)
	level5[5][8] = num;
    else if(a=='G' && b==2)
	level5[6][1] = num;
    else if(a=='G' && b==4)
	level5[6][3] = num;
    else if(a=='G' && b==5)
	level5[6][4] = num;
    else if(a=='G' && b==6)
	level5[6][5] = num;
    else if(a=='G' && b==7)
	level5[6][6] = num;
    else if(a=='G' && b==8)
	level5[6][7] = num;
    else if(a=='H' && b==1)
	level5[7][0] = num;
    else if(a=='H' && b==2)
	level5[7][1] = num;
    else if(a=='H' && b==5)
	level5[7][4] = num;
    else if(a=='H' && b==7)
	level5[7][6] = num;
    else if(a=='H' && b==9)
	level5[7][8] = num;
    else if(a=='I' && b==1)
	level5[8][0] = num;
    else if(a=='I' && b==2)
	level5[8][1] = num;
    else if(a=='I' && b==4)
	level5[8][3] = num;
    else if(a=='I' && b==6)
	level5[8][5] = num;
    else if(a=='I' && b==7)
	level5[8][6] = num;
    else if(a=='I' && b==9)
	level5[8][8] = num;
    else if(a=='0' && b== 0){}
    else
	printf("Invalid selection of cell\a");

}

void winorlose()
{
    int row1, row2, row3, row4, row5, row6, row7, row8, row9, rowTotal;
    int column1, column2, column3, column4, column5, column6, column7, column8, column9, columnTotal;
    int block1, block2, block3, block4, block5, block6, block7, block8, block9, blockTotal;

    row1 = level5[0][0] + level5[0][1] + level5[0][2] + level5[0][3] + level5[0][4] + level5[0][5] + level5[0][6] + level5[0][7] + level5[0][8];
    row2 = level5[1][0] + level5[1][1] + level5[1][2] + level5[1][3] + level5[1][4] + level5[1][5] + level5[1][6] + level5[1][7] + level5[1][8];
    row3 = level5[2][0] + level5[2][1] + level5[2][2] + level5[2][3] + level5[2][4] + level5[2][5] + level5[2][6] + level5[2][7] + level5[2][8];
    row4 = level5[3][0] + level5[3][1] + level5[3][2] + level5[3][3] + level5[3][4] + level5[3][5] + level5[3][6] + level5[3][7] + level5[3][8];
    row5 = level5[4][0] + level5[4][1] + level5[4][2] + level5[4][3] + level5[4][4] + level5[4][5] + level5[4][6] + level5[4][7] + level5[4][8];
    row6 = level5[5][0] + level5[5][1] + level5[5][2] + level5[5][3] + level5[5][4] + level5[5][5] + level5[5][6] + level5[5][7] + level5[5][8];
    row7 = level5[6][0] + level5[6][1] + level5[6][2] + level5[6][3] + level5[6][4] + level5[6][5] + level5[6][6] + level5[6][7] + level5[6][8];
    row8 = level5[7][0] + level5[7][1] + level5[7][2] + level5[7][3] + level5[7][4] + level5[7][5] + level5[7][6] + level5[7][7] + level5[7][8];
    row9 = level5[8][0] + level5[8][1] + level5[8][2] + level5[8][3] + level5[8][4] + level5[8][5] + level5[8][6] + level5[8][7] + level5[8][8];

    column1 = level5[0][0] + level5[1][0] + level5[2][0] + level5[3][0] + level5[4][0] + level5[5][0] + level5[6][0] + level5[7][0] + level5[8][0];
    column2 = level5[0][1] + level5[1][1] + level5[2][1] + level5[3][1] + level5[4][1] + level5[5][1] + level5[6][1] + level5[7][1] + level5[8][1];
    column3 = level5[0][2] + level5[1][2] + level5[2][2] + level5[3][2] + level5[4][2] + level5[5][2] + level5[6][2] + level5[7][2] + level5[8][2];
    column4 = level5[0][3] + level5[1][3] + level5[2][3] + level5[3][3] + level5[4][3] + level5[5][3] + level5[6][3] + level5[7][3] + level5[8][3];
    column5 = level5[0][4] + level5[1][4] + level5[2][4] + level5[3][4] + level5[4][4] + level5[5][4] + level5[6][4] + level5[7][4] + level5[8][4];
    column6 = level5[0][5] + level5[1][5] + level5[2][5] + level5[3][5] + level5[4][5] + level5[5][5] + level5[6][5] + level5[7][5] + level5[8][5];
    column7 = level5[0][6] + level5[1][6] + level5[2][6] + level5[3][6] + level5[4][6] + level5[5][6] + level5[6][6] + level5[7][6] + level5[8][6];
    column8 = level5[0][7] + level5[1][7] + level5[2][7] + level5[3][7] + level5[4][7] + level5[5][7] + level5[6][7] + level5[7][7] + level5[8][7];
    column9 = level5[0][8] + level5[1][8] + level5[2][8] + level5[3][8] + level5[4][8] + level5[5][8] + level5[6][8] + level5[7][8] + level5[8][8];

    block1 = level5[0][0] + level5[0][1] + level5[0][2] + level5[1][0] + level5[1][1] + level5[1][2] + level5[2][0] + level5[2][1] + level5[2][2];
    block2 = level5[0][3] + level5[0][4] + level5[0][5] + level5[1][3] + level5[1][4] + level5[1][5] + level5[2][3] + level5[2][4] + level5[2][5];
    block3 = level5[0][6] + level5[0][7] + level5[0][8] + level5[1][6] + level5[1][7] + level5[1][8] + level5[2][6] + level5[2][7] + level5[2][8];
    block4 = level5[3][0] + level5[3][1] + level5[3][2] + level5[4][0] + level5[4][1] + level5[4][2] + level5[5][0] + level5[5][1] + level5[5][2];
    block5 = level5[3][3] + level5[3][4] + level5[3][5] + level5[4][3] + level5[4][4] + level5[4][5] + level5[5][3] + level5[5][4] + level5[5][5];
    block6 = level5[3][6] + level5[3][7] + level5[3][8] + level5[4][6] + level5[4][7] + level5[4][8] + level5[5][6] + level5[5][7] + level5[5][8];
    block7 = level5[6][0] + level5[6][1] + level5[6][2] + level5[7][0] + level5[7][1] + level5[7][2] + level5[8][0] + level5[8][1] + level5[8][2];
    block8 = level5[6][3] + level5[6][4] + level5[6][5] + level5[7][3] + level5[7][4] + level5[7][5] + level5[8][3] + level5[8][4] + level5[8][5];
    block9 = level5[6][6] + level5[6][7] + level5[6][8] + level5[7][6] + level5[7][7] + level5[7][8] + level5[8][6] + level5[8][7] + level5[8][8];

    rowTotal = row1 + row2 + row3 + row4 + row5 + row6 + row7 + row8 + row9;
    columnTotal = column1 + column2 + column3 + column4 + column5 + column6 + column7 + column8 + column9;
    blockTotal = block1 + block2 + block3 + block4 + block5 + block6 + block7 + block8 + block9;

    if(rowTotal==4293 && columnTotal==4293 && blockTotal==4293)
	printf("\n\n\nYou Win!!\n\n\n");
    else
	printf("\n\n\nYou Lost :(\n\n\n");
}


int sudokumain(){

  char row;
  int column;
  clrscr();

  do{

   system("cls");
   board5();
   printf("Enter the row and column: ");
   scanf(" %1c%1d", &row, &column);

gameplay(row, column);
}

while(row!='0' && column!=0);

winorlose();

getch();
return 0;
}






//SUDOKU YET TO BE ADDED




