void hardgameplay1(char a, char b){

     char num;

    printf("\n\t\t\tEnter the number: ");
    scanf(" %1c", &num);

    if(a=='A' && b=='1')
        hard1[0][0] = num;
    else if(a=='A' && b=='3')
        hard1[0][2] = num;
    else if(a=='A' && b=='4')
        hard1[0][3] = num;
    else if(a=='A' && b=='6')
        hard1[0][5] = num;
    else if(a=='A' && b=='8')
        hard1[0][7] = num;
    else if(a=='A' && b=='9')
        hard1[0][8] = num;
    else if(a=='B' && b=='2')
        hard1[1][1] = num;
    else if(a=='B' && b=='4')
        hard1[1][3] = num;
    else if(a=='B' && b=='5')
        hard1[1][4] = num;
    else if(a=='B' && b=='7')
        hard1[1][6] = num;
    else if(a=='B' && b=='9')
        hard1[1][8] = num;
    else if(a=='C' && b=='1')
        hard1[2][0] = num;
    else if(a=='C' && b=='2')
        hard1[2][1] = num;
    else if(a=='C' && b=='3')
        hard1[2][2] = num;
    else if(a=='C' && b=='5')
        hard1[2][4] = num;
    else if(a=='C' && b=='6')
        hard1[2][5] = num;
    else if(a=='C' && b=='7')
        hard1[2][6] = num;
    else if(a=='C' && b=='8')
        hard1[2][7] = num;
    else if(a=='D' && b=='2')
        hard1[3][1] = num;
    else if(a=='D' && b=='4')
        hard1[3][3] = num;
    else if(a=='D' && b=='5')
        hard1[3][4] = num;
    else if(a=='D' && b=='6')
        hard1[3][5] = num;
    else if(a=='D' && b=='7')
        hard1[3][6] = num;
    else if(a=='D' && b=='8')
        hard1[3][7] = num;
    else if(a=='D' && b=='9')
        hard1[3][8] = num;
    else if(a=='E' && b=='1')
        hard1[4][0] = num;
    else if(a=='E' && b=='3')
        hard1[4][2] = num;
    else if(a=='E' && b=='4')
        hard1[4][3] = num;
    else if(a=='E' && b=='6')
        hard1[4][5] = num;
    else if(a=='E' && b=='7')
        hard1[4][6] = num;
    else if(a=='E' && b=='9')
        hard1[4][8] = num;
    else if(a=='F' && b=='1')
        hard1[5][0] = num;
    else if(a=='F' && b=='2')
        hard1[5][1] = num;
    else if(a=='F' && b=='3')
        hard1[5][2] = num;
    else if(a=='F' && b=='4')
        hard1[5][3] = num;
    else if(a=='F' && b=='5')
        hard1[5][4] = num;
    else if(a=='F' && b=='6')
        hard1[5][5] = num;
    else if(a=='F' && b=='8')
        hard1[5][7] = num;
    else if(a=='G' && b=='2')
        hard1[6][1] = num;
    else if(a=='G' && b=='3')
        hard1[6][2] = num;
    else if(a=='G' && b=='4')
        hard1[6][3] = num;
    else if(a=='G' && b=='5')
        hard1[6][4] = num;
    else if(a=='G' && b=='7')
        hard1[6][6] = num;
    else if(a=='G' && b=='8')
        hard1[6][7] = num;
    else if(a=='G' && b=='9')
        hard1[6][8] = num;
    else if(a=='H' && b=='1')
        hard1[7][0] = num;
    else if(a=='H' && b=='3')
        hard1[7][2] = num;
    else if(a=='H' && b=='5')
        hard1[7][4] = num;
    else if(a=='H' && b=='6')
        hard1[7][5] = num;
    else if(a=='H' && b=='8')
        hard1[7][7] = num;
    else if(a=='I' && b=='1')
        hard1[8][0] = num;
    else if(a=='I' && b=='2')
        hard1[8][1] = num;
    else if(a=='I' && b=='4')
        hard1[8][3] = num;
    else if(a=='I' && b=='6')
        hard1[8][5] = num;
    else if(a=='I' && b=='7')
        hard1[8][6] = num;
    else if(a=='I' && b=='9')
        hard1[8][8] = num;
    else if(a=='0' && b=='0'){}
    else{
            printf("\nInvalid selection of cell\a");
            delay(1500);
        }
    }



void hardgameplay2(char a, char b){

     char num;

    printf("\n\t\t\tEnter the number: ");
    scanf(" %1c", &num);

    if(a=='A' && b=='2')
        hard2[0][1] = num;
    else if(a=='A' && b=='3')
        hard2[0][2] = num;
    else if(a=='A' && b=='5')
        hard2[0][4] = num;
    else if(a=='A' && b=='6')
        hard2[0][5] = num;
    else if(a=='A' && b=='7')
        hard2[0][6] = num;
    else if(a=='A' && b=='8')
        hard2[0][7] = num;
    else if(a=='A' && b=='9')
        hard2[0][8] = num;
    else if(a=='B' && b=='1')
        hard2[1][0] = num;
    else if(a=='B' && b=='2')
        hard2[1][1] = num;
    else if(a=='B' && b=='3')
        hard2[1][2] = num;
    else if(a=='B' && b=='4')
        hard2[1][3] = num;
    else if(a=='B' && b=='8')
        hard2[1][7] = num;
    else if(a=='B' && b=='9')
        hard2[1][8] = num;
    else if(a=='C' && b=='1')
        hard2[2][0] = num;
    else if(a=='C' && b=='3')
        hard2[2][2] = num;
    else if(a=='C' && b=='4')
        hard2[2][3] = num;
    else if(a=='C' && b=='5')
        hard2[2][4] = num;
    else if(a=='C' && b=='7')
        hard2[2][6] = num;
    else if(a=='C' && b=='9')
        hard2[2][8] = num;
    else if(a=='D' && b=='1')
        hard2[3][0] = num;
    else if(a=='D' && b=='2')
        hard2[3][1] = num;
    else if(a=='D' && b=='4')
        hard2[3][3] = num;
    else if(a=='D' && b=='5')
        hard2[3][4] = num;
    else if(a=='D' && b=='6')
        hard2[3][5] = num;
    else if(a=='D' && b=='8')
        hard2[3][7] = num;
    else if(a=='E' && b=='2')
        hard2[4][1] = num;
    else if(a=='E' && b=='3')
        hard2[4][2] = num;
    else if(a=='E' && b=='5')
        hard2[4][4] = num;
    else if(a=='E' && b=='7')
        hard2[4][6] = num;
    else if(a=='E' && b=='8')
        hard2[4][7] = num;
    else if(a=='F' && b=='2')
        hard2[5][1] = num;
    else if(a=='F' && b=='4')
        hard2[5][3] = num;
    else if(a=='F' && b=='5')
        hard2[5][4] = num;
    else if(a=='F' && b=='6')
        hard2[5][5] = num;
    else if(a=='F' && b=='8')
        hard2[5][7] = num;
    else if(a=='F' && b=='9')
        hard2[5][8] = num;
    else if(a=='G' && b=='1')
        hard2[6][0] = num;
    else if(a=='G' && b=='3')
        hard2[6][2] = num;
    else if(a=='G' && b=='5')
        hard2[6][4] = num;
    else if(a=='G' && b=='6')
        hard2[6][5] = num;
    else if(a=='G' && b=='7')
        hard2[6][6] = num;
    else if(a=='G' && b=='9')
        hard2[6][8] = num;
    else if(a=='H' && b=='1')
        hard2[7][0] = num;
    else if(a=='H' && b=='2')
        hard2[7][1] = num;
    else if(a=='H' && b=='6')
        hard2[7][5] = num;
    else if(a=='H' && b=='7')
        hard2[7][6] = num;
    else if(a=='H' && b=='8')
        hard2[7][7] = num;
    else if(a=='H' && b=='9')
        hard2[7][8] = num;
    else if(a=='I' && b=='1')
        hard2[8][0] = num;
    else if(a=='I' && b=='2')
        hard2[8][1] = num;
    else if(a=='I' && b=='3')
        hard2[8][2] = num;
    else if(a=='I' && b=='4')
        hard2[8][3] = num;
    else if(a=='I' && b=='5')
        hard2[8][4] = num;
    else if(a=='I' && b=='7')
        hard2[8][6] = num;
    else if(a=='I' && b=='8')
        hard2[8][7] = num;
    else if(a=='0' && b=='0'){}
    else{
            printf("\nInvalid selection of cell\a");
            delay(1500);
        }
    }



void hardgameplay3(char a, char b){

     char num;

    printf("\n\t\t\tEnter the number: ");
    scanf(" %1c", &num);

    if(a=='A' && b=='1')
        hard3[0][0] = num;
    else if(a=='A' && b=='3')
        hard3[0][2] = num;
    else if(a=='A' && b=='4')
        hard3[0][3] = num;
    else if(a=='A' && b=='6')
        hard3[0][5] = num;
    else if(a=='A' && b=='8')
        hard3[0][7] = num;
    else if(a=='A' && b=='9')
        hard3[0][8] = num;
    else if(a=='B' && b=='2')
        hard3[1][1] = num;
    else if(a=='B' && b=='4')
        hard3[1][3] = num;
    else if(a=='B' && b=='5')
        hard3[1][4] = num;
    else if(a=='B' && b=='7')
        hard3[1][6] = num;
    else if(a=='B' && b=='9')
        hard3[1][8] = num;
    else if(a=='C' && b=='1')
        hard3[2][0] = num;
    else if(a=='C' && b=='2')
        hard3[2][1] = num;
    else if(a=='C' && b=='3')
        hard3[2][2] = num;
    else if(a=='C' && b=='5')
        hard3[2][4] = num;
    else if(a=='C' && b=='6')
        hard3[2][5] = num;
    else if(a=='C' && b=='7')
        hard3[2][6] = num;
    else if(a=='C' && b=='8')
        hard3[2][7] = num;
    else if(a=='D' && b=='2')
        hard3[3][1] = num;
    else if(a=='D' && b=='4')
        hard3[3][3] = num;
    else if(a=='D' && b=='5')
        hard3[3][4] = num;
    else if(a=='D' && b=='6')
        hard3[3][5] = num;
    else if(a=='D' && b=='7')
        hard3[3][6] = num;
    else if(a=='D' && b=='8')
        hard3[3][7] = num;
    else if(a=='D' && b=='9')
        hard3[3][8] = num;
    else if(a=='E' && b=='1')
        hard3[4][0] = num;
    else if(a=='E' && b=='3')
        hard3[4][2] = num;
    else if(a=='E' && b=='4')
        hard3[4][3] = num;
    else if(a=='E' && b=='6')
        hard3[4][5] = num;
    else if(a=='E' && b=='7')
        hard3[4][6] = num;
    else if(a=='E' && b=='9')
        hard3[4][8] = num;
    else if(a=='F' && b=='1')
        hard3[5][0] = num;
    else if(a=='F' && b=='2')
        hard3[5][1] = num;
    else if(a=='F' && b=='3')
        hard3[5][2] = num;
    else if(a=='F' && b=='4')
        hard3[5][3] = num;
    else if(a=='F' && b=='5')
        hard3[5][4] = num;
    else if(a=='F' && b=='6')
        hard3[5][5] = num;
    else if(a=='F' && b=='8')
        hard3[5][7] = num;
    else if(a=='G' && b=='2')
        hard3[6][1] = num;
    else if(a=='G' && b=='3')
        hard3[6][2] = num;
    else if(a=='G' && b=='4')
        hard3[6][3] = num;
    else if(a=='G' && b=='5')
        hard3[6][4] = num;
    else if(a=='G' && b=='7')
        hard3[6][6] = num;
    else if(a=='G' && b=='8')
        hard3[6][7] = num;
    else if(a=='G' && b=='9')
        hard3[6][8] = num;
    else if(a=='H' && b=='1')
        hard3[7][0] = num;
    else if(a=='H' && b=='3')
        hard3[7][2] = num;
    else if(a=='H' && b=='5')
        hard3[7][4] = num;
    else if(a=='H' && b=='6')
        hard3[7][5] = num;
    else if(a=='H' && b=='8')
        hard3[7][7] = num;
    else if(a=='I' && b=='1')
        hard3[8][0] = num;
    else if(a=='I' && b=='2')
        hard3[8][1] = num;
    else if(a=='I' && b=='4')
        hard3[8][3] = num;
    else if(a=='I' && b=='6')
        hard3[8][5] = num;
    else if(a=='I' && b=='7')
        hard3[8][6] = num;
    else if(a=='I' && b=='9')
        hard3[8][8] = num;
    else if(a=='0' && b=='0'){}
    else{
            printf("\nInvalid selection of cell\a");
            delay(1500);
        }
    }



void hardgameplay4(char a, char b){

     char num;

    printf("\n\t\t\tEnter the number: ");
    scanf(" %1c", &num);

    if(a=='A' && b=='2')
        hard4[0][1] = num;
    else if(a=='A' && b=='3')
        hard4[0][2] = num;
    else if(a=='A' && b=='4')
        hard4[0][3] = num;
    else if(a=='A' && b=='6')
        hard4[0][5] = num;
    else if(a=='A' && b=='7')
        hard4[0][6] = num;
    else if(a=='A' && b=='8')
        hard4[0][7] = num;
    else if(a=='B' && b=='1')
        hard4[1][0] = num;
    else if(a=='B' && b=='3')
        hard4[1][2] = num;
    else if(a=='B' && b=='4')
        hard4[1][3] = num;
    else if(a=='B' && b=='6')
        hard4[1][5] = num;
    else if(a=='B' && b=='7')
        hard4[1][6] = num;
    else if(a=='B' && b=='9')
        hard4[1][8] = num;
    else if(a=='C' && b=='1')
        hard4[2][0] = num;
    else if(a=='C' && b=='2')
        hard4[2][1] = num;
    else if(a=='C' && b=='4')
        hard4[2][3] = num;
    else if(a=='C' && b=='6')
        hard4[2][5] = num;
    else if(a=='C' && b=='8')
        hard4[2][7] = num;
    else if(a=='C' && b=='9')
        hard4[2][8] = num;
    else if(a=='D' && b=='1')
        hard4[3][0] = num;
    else if(a=='D' && b=='2')
        hard4[3][1] = num;
    else if(a=='D' && b=='3')
        hard4[3][2] = num;
    else if(a=='D' && b=='5')
        hard4[3][4] = num;
    else if(a=='D' && b=='7')
        hard4[3][6] = num;
    else if(a=='D' && b=='8')
        hard4[3][7] = num;
    else if(a=='D' && b=='9')
        hard4[3][8] = num;
    else if(a=='E' && b=='4')
        hard4[4][3] = num;
    else if(a=='E' && b=='5')
        hard4[4][4] = num;
    else if(a=='E' && b=='6')
        hard4[4][5] = num;
    else if(a=='F' && b=='1')
        hard4[5][0] = num;
    else if(a=='F' && b=='2')
        hard4[5][1] = num;
    else if(a=='F' && b=='3')
        hard4[5][2] = num;
    else if(a=='F' && b=='5')
        hard4[5][4] = num;
    else if(a=='F' && b=='7')
        hard4[5][6] = num;
    else if(a=='F' && b=='8')
        hard4[5][7] = num;
    else if(a=='F' && b=='9')
        hard4[5][8] = num;
    else if(a=='G' && b=='1')
        hard4[6][0] = num;
    else if(a=='G' && b=='2')
        hard4[6][1] = num;
    else if(a=='G' && b=='4')
        hard4[6][3] = num;
    else if(a=='G' && b=='6')
        hard4[6][5] = num;
    else if(a=='G' && b=='8')
        hard4[6][7] = num;
    else if(a=='G' && b=='9')
        hard4[6][8] = num;
    else if(a=='H' && b=='1')
        hard4[7][0] = num;
    else if(a=='H' && b=='3')
        hard4[7][2] = num;
    else if(a=='H' && b=='4')
        hard4[7][3] = num;
    else if(a=='H' && b=='6')
        hard4[7][5] = num;
    else if(a=='H' && b=='7')
        hard4[7][6] = num;
    else if(a=='H' && b=='9')
        hard4[7][8] = num;
    else if(a=='I' && b=='2')
        hard4[8][1] = num;
    else if(a=='I' && b=='3')
        hard4[8][2] = num;
    else if(a=='I' && b=='4')
        hard4[8][3] = num;
    else if(a=='I' && b=='6')
        hard4[8][5] = num;
    else if(a=='I' && b=='7')
        hard4[8][6] = num;
    else if(a=='I' && b=='8')
        hard4[8][7] = num;
    else if(a=='0' && b=='0'){}
    else{
            printf("\nInvalid selection of cell\a");
            delay(1500);
        }
    }


void hardgameplay5(char a, char b){

     char num;

    printf("\n\t\t\tEnter the number: ");
    scanf(" %1c", &num);

    if(a=='A' && b=='1')
        hard5[0][0] = num;
    else if(a=='A' && b=='2')
        hard5[0][1] = num;
    else if(a=='A' && b=='3')
        hard5[0][2] = num;
    else if(a=='A' && b=='4')
        hard5[0][3] = num;
    else if(a=='A' && b=='6')
        hard5[0][5] = num;
    else if(a=='A' && b=='7')
        hard5[0][6] = num;
    else if(a=='A' && b=='8')
        hard5[0][7] = num;
    else if(a=='A' && b=='9')
        hard5[0][8] = num;
    else if(a=='B' && b=='2')
        hard5[1][1] = num;
    else if(a=='B' && b=='3')
        hard5[1][2] = num;
    else if(a=='B' && b=='4')
        hard5[1][3] = num;
    else if(a=='B' && b=='5')
        hard5[1][4] = num;
    else if(a=='B' && b=='6')
        hard5[1][5]= num;
    else if(a=='B' && b=='7')
        hard5[1][6] = num;
    else if(a=='B' && b=='8')
        hard5[1][7] = num;
    else if(a=='C' && b=='1')
        hard5[2][0] = num;
    else if(a=='C' && b=='4')
        hard5[2][3] = num;
    else if(a=='C' && b=='5')
        hard5[2][4] = num;
    else if(a=='C' && b=='6')
        hard5[2][5] = num;
    else if(a=='C' && b=='9')
        hard5[2][8] = num;
    else if(a=='D' && b=='2')
        hard5[3][1] = num;
    else if(a=='D' && b=='3')
        hard5[3][2] = num;
    else if(a=='D' && b=='4')
        hard5[3][3] = num;
    else if(a=='D' && b=='6')
        hard5[3][5] = num;
    else if(a=='D' && b=='7')
        hard5[3][6] = num;
    else if(a=='D' && b=='8')
        hard5[3][7] = num;
    else if(a=='E' && b=='1')
        hard5[4][0] = num;
    else if(a=='E' && b=='2')
        hard5[4][1] = num;
    else if(a=='E' && b=='3')
        hard5[4][2] = num;
    else if(a=='E' && b=='4')
        hard5[4][3] = num;
    else if(a=='E' && b=='5')
        hard5[4][4] = num;
    else if(a=='E' && b=='6')
        hard5[4][5] = num;
    else if(a=='E' && b=='7')
        hard5[4][6] = num;
    else if(a=='E' && b=='8')
        hard5[4][7] = num;
    else if(a=='E' && b=='9')
        hard5[4][8] = num;
    else if(a=='F' && b=='1')
        hard5[5][0] = num;
    else if(a=='F' && b=='5')
        hard5[5][4] = num;
    else if(a=='F' && b=='9')
        hard5[5][8] = num;
    else if(a=='G' && b=='2')
        hard5[6][1] = num;
    else if(a=='G' && b=='3')
        hard5[6][2] = num;
    else if(a=='G' && b=='4')
        hard5[6][3] = num;
    else if(a=='G' && b=='6')
        hard5[6][5] = num;
    else if(a=='G' && b=='7')
        hard5[6][6] = num;
    else if(a=='G' && b=='8')
        hard5[6][7] = num;
    else if(a=='H' && b=='3')
        hard5[7][2] = num;
    else if(a=='H' && b=='5')
        hard5[7][4] = num;
    else if(a=='H' && b=='7')
        hard5[7][6] = num;
    else if(a=='I' && b=='1')
        hard5[8][0] = num;
    else if(a=='I' && b=='2')
        hard5[8][1] = num;
    else if(a=='I' && b=='3')
        hard5[8][2] = num;
    else if(a=='I' && b=='5')
        hard5[8][4] = num;
    else if(a=='I' && b=='7')
        hard5[8][6] = num;
    else if(a=='I' && b=='8')
        hard5[8][7] = num;
    else if(a=='I' && b=='9')
        hard5[8][8] = num;
    else if(a=='0' && b=='0'){}
    else{
            printf("\nInvalid selection of cell\a");
            delay(1500);
        }
    }
