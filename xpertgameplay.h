void xpertgameplay1(char a, char b){

     char num;

    printf("\n\t\t\tEnter the number: ");
    scanf(" %1c", &num);

    if(a=='A' && b=='2')
        xpert1[0][1] = num;
    else if(a=='A' && b=='3')
        xpert1[0][2] = num;
    else if(a=='A' && b=='4')
        xpert1[0][3] = num;
    else if(a=='A' && b=='5')
        xpert1[0][4] = num;
    else if(a=='A' && b=='6')
        xpert1[0][5] = num;
    else if(a=='A' && b=='7')
        xpert1[0][6] = num;
    else if(a=='A' && b=='8')
        xpert1[0][7] = num;
    else if(a=='B' && b=='1')
        xpert1[1][0] = num;
    else if(a=='B' && b=='4')
        xpert1[1][3] = num;
    else if(a=='B' && b=='5')
        xpert1[1][4] = num;
    else if(a=='B' && b=='6')
        xpert1[1][5] = num;
    else if(a=='B' && b=='9')
        xpert1[1][8] = num;
    else if(a=='C' && b=='1')
        xpert1[2][0] = num;
    else if(a=='C' && b=='2')
        xpert1[2][1] = num;
    else if(a=='C' && b=='3')
        xpert1[2][2] = num;
    else if(a=='C' && b=='7')
        xpert1[2][6] = num;
    else if(a=='C' && b=='8')
        xpert1[2][7] = num;
    else if(a=='C' && b=='9')
        xpert1[2][8] = num;
    else if(a=='D' && b=='1')
        xpert1[3][0] = num;
    else if(a=='D' && b=='2')
        xpert1[3][1] = num;
    else if(a=='D' && b=='8')
        xpert1[3][7] = num;
    else if(a=='D' && b=='9')
        xpert1[3][8] = num;
    else if(a=='E' && b=='3')
        xpert1[4][2] = num;
    else if(a=='E' && b=='4')
        xpert1[4][3] = num;
    else if(a=='E' && b=='5')
        xpert1[4][4] = num;
    else if(a=='E' && b=='6')
        xpert1[4][5] = num;
    else if(a=='E' && b=='7')
        xpert1[4][6] = num;
    else if(a=='F' && b=='1')
        xpert1[5][0] = num;
    else if(a=='F' && b=='2')
        xpert1[5][1] = num;
    else if(a=='F' && b=='8')
        xpert1[5][7] = num;
    else if(a=='F' && b=='9')
        xpert1[5][8] = num;
    else if(a=='G' && b=='1')
        xpert1[6][0] = num;
    else if(a=='G' && b=='2')
        xpert1[6][1] = num;
    else if(a=='G' && b=='3')
        xpert1[6][2] = num;
    else if(a=='G' && b=='7')
        xpert1[6][6] = num;
    else if(a=='G' && b=='8')
        xpert1[6][7] = num;
    else if(a=='G' && b=='9')
        xpert1[6][8] = num;
    else if(a=='H' && b=='1')
        xpert1[7][0] = num;
    else if(a=='H' && b=='4')
        xpert1[7][3] = num;
    else if(a=='H' && b=='5')
        xpert1[7][4] = num;
    else if(a=='H' && b=='6')
        xpert1[7][5] = num;
    else if(a=='H' && b=='9')
        xpert1[7][8] = num;
    else if(a=='I' && b=='2')
        xpert1[8][1] = num;
    else if(a=='I' && b=='3')
        xpert1[8][2] = num;
    else if(a=='I' && b=='4')
        xpert1[8][3] = num;
    else if(a=='I' && b=='5')
        xpert1[8][4] = num;
    else if(a=='I' && b=='6')
        xpert2[8][5] = num;
    else if(a=='I' && b=='7')
        xpert1[8][6] = num;
    else if(a=='I' && b=='8')
        xpert1[8][7] = num;
    else if(a=='0' && b=='0'){}
    else{
            printf("\nInvalid selection of cell\a");
            delay(1500);
        }
    }



void xpertgameplay2(char a, char b){

     char num;

    printf("\n\t\t\tEnter the number: ");
    scanf(" %1c", &num);

    if(a=='A' && b=='1')
        xpert2[0][0] = num;
    else if(a=='A' && b=='2')
        xpert2[0][1] = num;
    else if(a=='A' && b=='6')
        xpert2[0][5] = num;
    else if(a=='A' && b=='7')
        xpert2[0][6] = num;
    else if(a=='A' && b=='8')
        xpert2[0][7] = num;
    else if(a=='A' && b=='9')
        xpert2[0][8] = num;
    else if(a=='B' && b=='1')
        xpert2[1][0] = num;
    else if(a=='B' && b=='2')
        xpert2[1][1] = num;
    else if(a=='B' && b=='4')
        xpert2[1][3] = num;
    else if(a=='B' && b=='6')
        xpert2[1][5] = num;
    else if(a=='C' && b=='1')
        xpert2[2][0] = num;
    else if(a=='C' && b=='2')
        xpert2[2][1] = num;
    else if(a=='C' && b=='6')
        xpert2[2][5] = num;
    else if(a=='C' && b=='8')
        xpert2[2][7] = num;
    else if(a=='D' && b=='1')
        xpert2[3][0] = num;
    else if(a=='D' && b=='2')
        xpert2[3][1] = num;
    else if(a=='D' && b=='3')
        xpert2[3][2] = num;
    else if(a=='D' && b=='4')
        xpert2[3][3] = num;
    else if(a=='D' && b=='5')
        xpert2[3][4] = num;
    else if(a=='D' && b=='6')
        xpert2[3][5] = num;
    else if(a=='E' && b=='1')
        xpert2[4][0] = num;
    else if(a=='E' && b=='2')
        xpert2[4][1] = num;
    else if(a=='E' && b=='3')
        xpert2[4][2] = num;
    else if(a=='E' && b=='4')
        xpert2[4][3] = num;
    else if(a=='E' && b=='5')
        xpert2[4][4] = num;
    else if(a=='E' && b=='6')
        xpert2[4][5] = num;
    else if(a=='E' && b=='7')
        xpert2[4][6] = num;
    else if(a=='E' && b=='8')
        xpert2[4][7] = num;
    else if(a=='E' && b=='9')
        xpert2[4][8] = num;
    else if(a=='F' && b=='4')
        xpert2[5][3] = num;
    else if(a=='F' && b=='5')
        xpert2[5][4] = num;
    else if(a=='F' && b=='6')
        xpert2[5][5] = num;
    else if(a=='F' && b=='7')
        xpert2[5][6] = num;
    else if(a=='F' && b=='8')
        xpert2[5][7] = num;
    else if(a=='F' && b=='9')
        xpert2[5][8] = num;
    else if(a=='G' && b=='2')
        xpert2[6][1] = num;
    else if(a=='G' && b=='4')
        xpert2[6][3] = num;
    else if(a=='G' && b=='8')
        xpert2[6][7] = num;
    else if(a=='G' && b=='9')
        xpert2[6][8] = num;
    else if(a=='H' && b=='4')
        xpert2[7][3] = num;
    else if(a=='H' && b=='6')
        xpert2[7][5] = num;
    else if(a=='H' && b=='8')
        xpert2[7][7] = num;
    else if(a=='H' && b=='9')
        xpert2[7][8] = num;
    else if(a=='I' && b=='1')
        xpert2[8][0] = num;
    else if(a=='I' && b=='2')
        xpert2[8][1] = num;
    else if(a=='I' && b=='3')
        xpert2[8][2] = num;
    else if(a=='I' && b=='4')
        xpert2[8][3] = num;
    else if(a=='I' && b=='8')
        xpert2[8][7] = num;
    else if(a=='I' && b=='9')
        xpert2[8][8] = num;
    else if(a=='0' && b=='0'){}
    else{
            printf("\nInvalid selection of cell\a");
            delay(1500);
        }
    }



void xpertgameplay3(char a, char b){

     char num;

    printf("\n\t\t\tEnter the number: ");
    scanf(" %1c", &num);

    if(a=='A' && b=='2')
        xpert3[0][1] = num;
    else if(a=='A' && b=='3')
        xpert3[0][2] = num;
    else if(a=='A' && b=='4')
        xpert3[0][3] = num;
    else if(a=='A' && b=='6')
        xpert3[0][5] = num;
    else if(a=='A' && b=='7')
        xpert3[0][6] = num;
    else if(a=='A' && b=='8')
        xpert3[0][7] = num;
    else if(a=='B' && b=='1')
        xpert3[1][0] = num;
    else if(a=='B' && b=='3')
        xpert3[1][2] = num;
    else if(a=='B' && b=='5')
        xpert3[1][4] = num;
    else if(a=='B' && b=='7')
        xpert3[1][6] = num;
    else if(a=='B' && b=='9')
        xpert3[1][8] = num;
    else if(a=='C' && b=='1')
        xpert3[2][0] = num;
    else if(a=='C' && b=='2')
        xpert3[2][1] = num;
    else if(a=='C' && b=='4')
        xpert3[2][3] = num;
    else if(a=='C' && b=='6')
        xpert3[2][5] = num;
    else if(a=='C' && b=='8')
        xpert3[2][7] = num;
    else if(a=='C' && b=='9')
        xpert3[2][8] = num;
    else if(a=='D' && b=='1')
        xpert3[3][0] = num;
    else if(a=='D' && b=='3')
        xpert3[3][2] = num;
    else if(a=='D' && b=='5')
        xpert3[3][4] = num;
    else if(a=='D' && b=='7')
        xpert3[3][6] = num;
    else if(a=='D' && b=='9')
        xpert3[3][8] = num;
    else if(a=='E' && b=='2')
        xpert3[4][1] = num;
    else if(a=='E' && b=='4')
        xpert3[4][3] = num;
    else if(a=='E' && b=='6')
        xpert3[4][5] = num;
    else if(a=='E' && b=='8')
        xpert3[4][7] = num;
    else if(a=='F' && b=='1')
        xpert3[5][0] = num;
    else if(a=='F' && b=='3')
        xpert3[5][2] = num;
    else if(a=='F' && b=='5')
        xpert3[5][4] = num;
    else if(a=='F' && b=='7')
        xpert3[5][6] = num;
    else if(a=='F' && b=='9')
        xpert3[5][8] = num;
    else if(a=='G' && b=='1')
        xpert3[6][0] = num;
    else if(a=='G' && b=='2')
        xpert3[6][1] = num;
    else if(a=='G' && b=='4')
        xpert3[6][3] = num;
    else if(a=='G' && b=='6')
        xpert3[6][5] = num;
    else if(a=='G' && b=='8')
        xpert3[6][7] = num;
    else if(a=='G' && b=='9')
        xpert3[6][8] = num;
    else if(a=='H' && b=='1')
        xpert3[7][0] = num;
    else if(a=='H' && b=='3')
        xpert3[7][2] = num;
    else if(a=='H' && b=='5')
        xpert3[7][4] = num;
    else if(a=='H' && b=='7')
        xpert3[7][6] = num;
    else if(a=='H' && b=='9')
        xpert3[7][8] = num;
    else if(a=='I' && b=='2')
        xpert3[8][1] = num;
    else if(a=='I' && b=='3')
        xpert3[8][2] = num;
    else if(a=='I' && b=='4')
        xpert3[8][3] = num;
    else if(a=='I' && b=='6')
        xpert3[8][5] = num;
    else if(a=='I' && b=='7')
        xpert3[8][6] = num;
    else if(a=='I' && b=='8')
        xpert3[8][7] = num;
    else if(a=='0' && b=='0'){}
    else{
            printf("\nInvalid selection of cell\a");
            delay(1500);
        }
    }




void xpertgameplay4(char a, char b){

     char num;

    printf("\n\t\t\tEnter the number: ");
    scanf(" %1c", &num);

    if(a=='A' && b=='2')
        xpert4[0][1] = num;
    else if(a=='A' && b=='3')
        xpert4[0][2] = num;
    else if(a=='A' && b=='5')
        xpert4[0][4] = num;
    else if(a=='A' && b=='7')
        xpert4[0][6] = num;
    else if(a=='A' && b=='8')
        xpert4[0][7] = num;
    else if(a=='A' && b=='9')
        xpert4[0][8] = num;
    else if(a=='B' && b=='1')
        xpert4[1][0] = num;
    else if(a=='B' && b=='2')
        xpert4[1][1] = num;
    else if(a=='B' && b=='4')
        xpert4[1][3] = num;
    else if(a=='B' && b=='6')
        xpert4[1][5] = num;
    else if(a=='B' && b=='8')
        xpert4[1][7] = num;
    else if(a=='B' && b=='9')
        xpert4[1][8] = num;
    else if(a=='C' && b=='1')
        xpert4[2][0] = num;
    else if(a=='C' && b=='3')
        xpert4[2][2] = num;
    else if(a=='C' && b=='4')
        xpert4[2][3] = num;
    else if(a=='C' && b=='5')
        xpert4[2][4] = num;
    else if(a=='C' && b=='6')
        xpert4[2][5] = num;
    else if(a=='C' && b=='7')
        xpert4[2][6] = num;
    else if(a=='C' && b=='9')
        xpert4[2][8] = num;
    else if(a=='D' && b=='2')
        xpert4[3][1] = num;
    else if(a=='D' && b=='3')
        xpert4[3][2] = num;
    else if(a=='D' && b=='4')
        xpert4[3][3] = num;
    else if(a=='D' && b=='7')
        xpert4[3][6] = num;
    else if(a=='D' && b=='8')
        xpert4[3][7] = num;
    else if(a=='E' && b=='1')
        xpert4[4][0] = num;
    else if(a=='E' && b=='2')
        xpert4[4][1] = num;
    else if(a=='E' && b=='4')
        xpert4[4][3] = num;
    else if(a=='E' && b=='5')
        xpert4[4][4] = num;
    else if(a=='E' && b=='6')
        xpert4[4][5] = num;
    else if(a=='E' && b=='8')
        xpert4[4][7] = num;
    else if(a=='E' && b=='9')
        xpert4[4][8] = num;
    else if(a=='F' && b=='2')
        xpert4[5][1] = num;
    else if(a=='F' && b=='3')
        xpert4[5][2] = num;
    else if(a=='F' && b=='6')
        xpert4[5][5] = num;
    else if(a=='F' && b=='7')
        xpert4[5][6] = num;
    else if(a=='F' && b=='8')
        xpert4[5][7] = num;
    else if(a=='G' && b=='1')
        xpert4[6][0] = num;
    else if(a=='G' && b=='3')
        xpert4[6][2] = num;
    else if(a=='G' && b=='4')
        xpert4[6][3] = num;
    else if(a=='G' && b=='5')
        xpert4[6][4] = num;
    else if(a=='G' && b=='6')
        xpert4[6][5] = num;
    else if(a=='G' && b=='7')
        xpert4[6][6] = num;
    else if(a=='G' && b=='9')
        xpert4[6][8] = num;
    else if(a=='H' && b=='1')
        xpert4[7][0] = num;
    else if(a=='H' && b=='2')
        xpert4[7][1] = num;
    else if(a=='H' && b=='4')
        xpert4[7][3] = num;
    else if(a=='H' && b=='6')
        xpert4[7][5] = num;
    else if(a=='H' && b=='8')
        xpert4[7][7] = num;
    else if(a=='H' && b=='9')
        xpert4[7][8] = num;
    else if(a=='I' && b=='1')
        xpert4[8][0] = num;
    else if(a=='I' && b=='2')
        xpert4[8][1] = num;
    else if(a=='I' && b=='3')
        xpert4[8][2] = num;
    else if(a=='I' && b=='5')
        xpert4[8][4] = num;
    else if(a=='I' && b=='7')
        xpert4[8][6] = num;
    else if(a=='I' && b=='8')
        xpert4[8][7] = num;
    else if(a=='0' && b=='0'){}
    else{
            printf("\nInvalid selection of cell\a");
            delay(1500);
        }
    }




void xpertgameplay5(char a, char b){

     char num;

    printf("\n\t\t\tEnter the number: ");
    scanf(" %1c", &num);

    if(a=='A' && b=='2')
        xpert5[0][1] = num;
    else if(a=='A' && b=='3')
        xpert5[0][2] = num;
    else if(a=='A' && b=='5')
        xpert5[0][4] = num;
    else if(a=='A' && b=='6')
        xpert5[0][5] = num;
    else if(a=='A' && b=='8')
        xpert5[0][7] = num;
    else if(a=='B' && b=='1')
        xpert5[1][0] = num;
    else if(a=='B' && b=='2')
        xpert5[1][1] = num;
    else if(a=='B' && b=='4')
        xpert5[1][3] = num;
    else if(a=='B' && b=='5')
        xpert5[1][4] = num;
    else if(a=='B' && b=='7')
        xpert5[1][6] = num;
    else if(a=='B' && b=='8')
        xpert5[1][7] = num;
    else if(a=='B' && b=='9')
        xpert5[1][8] = num;
    else if(a=='C' && b=='1')
        xpert5[2][0] = num;
    else if(a=='C' && b=='3')
        xpert5[2][2] = num;
    else if(a=='C' && b=='4')
        xpert5[2][3] = num;
    else if(a=='C' && b=='6')
        xpert5[2][5] = num;
    else if(a=='C' && b=='7')
        xpert5[2][6] = num;
    else if(a=='C' && b=='8')
        xpert5[2][7] = num;
    else if(a=='D' && b=='2')
        xpert5[3][1] = num;
    else if(a=='D' && b=='3')
        xpert5[3][2] = num;
    else if(a=='D' && b=='5')
        xpert5[3][4] = num;
    else if(a=='D' && b=='6')
        xpert5[3][5] = num;
    else if(a=='D' && b=='7')
        xpert5[3][6] = num;
    else if(a=='D' && b=='9')
        xpert5[3][8] = num;
    else if(a=='E' && b=='1')
        xpert5[4][0] = num;
    else if(a=='E' && b=='2')
        xpert5[4][1] = num;
    else if(a=='E' && b=='4')
        xpert5[4][3] = num;
    else if(a=='E' && b=='5')
        xpert5[4][4] = num;
    else if(a=='E' && b=='6')
        xpert5[4][5] = num;
    else if(a=='E' && b=='8')
        xpert5[4][7] = num;
    else if(a=='E' && b=='9')
        xpert5[4][8] = num;
    else if(a=='F' && b=='1')
        xpert5[5][0] = num;
    else if(a=='F' && b=='3')
        xpert5[5][2] = num;
    else if(a=='F' && b=='4')
        xpert5[5][3] = num;
    else if(a=='F' && b=='5')
        xpert5[5][4] = num;
    else if(a=='F' && b=='7')
        xpert5[5][6] = num;
    else if(a=='F' && b=='8')
        xpert5[5][7] = num;
    else if(a=='G' && b=='2')
        xpert5[6][1] = num;
    else if(a=='G' && b=='3')
        xpert5[6][2] = num;
    else if(a=='G' && b=='4')
        xpert5[6][3] = num;
    else if(a=='G' && b=='6')
        xpert5[6][5] = num;
    else if(a=='G' && b=='7')
        xpert5[6][6] = num;
    else if(a=='G' && b=='9')
        xpert5[6][8] = num;
    else if(a=='H' && b=='1')
        xpert5[7][0] = num;
    else if(a=='H' && b=='2')
        xpert5[7][1] = num;
    else if(a=='H' && b=='3')
        xpert5[7][2] = num;
    else if(a=='H' && b=='5')
        xpert5[7][4] = num;
    else if(a=='H' && b=='6')
        xpert5[7][5] = num;
    else if(a=='H' && b=='8')
        xpert5[7][7] = num;
    else if(a=='H' && b=='9')
        xpert5[7][8] = num;
    else if(a=='I' && b=='2')
        xpert5[8][1] = num;
    else if(a=='I' && b=='4')
        xpert5[8][3] = num;
    else if(a=='I' && b=='5')
        xpert5[8][4] = num;
    else if(a=='I' && b=='7')
        xpert5[8][6] = num;
    else if(a=='I' && b=='8')
        xpert5[8][7] = num;
    else if(a=='0' && b=='0'){}
    else{
            printf("\nInvalid selection of cell\a");
            delay(1500);
        }
    }
