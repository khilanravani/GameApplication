void mediumgameplay1(char a, char b){

     char num;

    printf("\n\t\t\tEnter the number: ");
    scanf(" %1c", &num);

    if(a=='A' && b=='2')
        medium1[0][1] = num;
    else if(a=='A' && b=='3')
        medium1[0][2] = num;
    else if(a=='A' && b=='4')
        medium1[0][3] = num;
    else if(a=='A' && b=='6')
        medium1[0][5] = num;
    else if(a=='B' && b=='1')
        medium1[1][0] = num;
    else if(a=='B' && b=='2')
        medium1[1][1] = num;
    else if(a=='B' && b=='3')
        medium1[1][2] = num;
    else if(a=='B' && b=='5')
        medium1[1][4] = num;
    else if(a=='B' && b=='7')
        medium1[1][6] = num;
    else if(a=='B' && b=='9')
        medium1[1][8] = num;
    else if(a=='C' && b=='2')
        medium1[2][1] = num;
    else if(a=='C' && b=='3')
        medium1[2][2] = num;
    else if(a=='C' && b=='4')
        medium1[2][3] = num;
    else if(a=='C' && b=='6')
        medium1[2][5] = num;
    else if(a=='D' && b=='1')
        medium1[3][0] = num;
    else if(a=='D' && b=='2')
        medium1[3][1] = num;
    else if(a=='D' && b=='3')
        medium1[3][2] = num;
    else if(a=='D' && b=='5')
        medium1[3][4] = num;
    else if(a=='D' && b=='7')
        medium1[3][6] = num;
    else if(a=='E' && b=='1')
        medium1[4][0] = num;
    else if(a=='E' && b=='2')
        medium1[4][1] = num;
    else if(a=='E' && b=='3')
        medium1[4][2] = num;
    else if(a=='E' && b=='4')
        medium1[4][3] = num;
    else if(a=='E' && b=='6')
        medium1[4][5] = num;
    else if(a=='E' && b=='7')
        medium1[4][6] = num;
    else if(a=='E' && b=='8')
        medium1[4][7] = num;
    else if(a=='E' && b=='9')
        medium1[4][8] = num;
    else if(a=='F' && b=='3')
        medium1[5][2] = num;
    else if(a=='F' && b=='5')
        medium1[5][4] = num;
    else if(a=='F' && b=='7')
        medium1[5][6] = num;
    else if(a=='F' && b=='8')
        medium1[5][7] = num;
    else if(a=='F' && b=='9')
        medium1[5][8] = num;
    else if(a=='G' && b=='4')
        medium1[6][3] = num;
    else if(a=='G' && b=='6')
        medium1[6][5] = num;
    else if(a=='G' && b=='7')
        medium1[6][6] = num;
    else if(a=='G' && b=='8')
        medium1[6][7] = num;
    else if(a=='H' && b=='1')
        medium1[7][0] = num;
    else if(a=='H' && b=='3')
        medium1[7][2] = num;
    else if(a=='H' && b=='5')
        medium1[7][4] = num;
    else if(a=='H' && b=='7')
        medium1[7][6] = num;
    else if(a=='H' && b=='8')
        medium1[7][7] = num;
    else if(a=='H' && b=='9')
        medium1[7][8] = num;
    else if(a=='I' && b=='4')
        medium1[8][3] = num;
    else if(a=='I' && b=='6')
        medium1[8][5] = num;
    else if(a=='I' && b=='7')
        medium1[8][6] = num;
    else if(a=='I' && b=='8')
        medium1[8][7] = num;
    else if(a=='0' && b=='0'){}
    else{
            printf("\nInvalid selection of cell\a");
            delay(1500);
        }
    }


void mediumgameplay2(char a, char b){

     char num;

    printf("\n\t\t\tEnter the number: ");
    scanf(" %1c", &num);

    if(a=='A' && b=='1')
        medium2[0][0] = num;
    else if(a=='A' && b=='2')
        medium2[0][1] = num;
    else if(a=='A' && b=='4')
        medium2[0][3] = num;
    else if(a=='A' && b=='6')
        medium2[0][5] = num;
    else if(a=='A' && b=='8')
        medium2[0][7] = num;
    else if(a=='A' && b=='9')
        medium2[0][8] = num;
    else if(a=='B' && b=='1')
        medium2[1][0] = num;
    else if(a=='B' && b=='3')
        medium2[1][2] = num;
    else if(a=='B' && b=='4')
        medium2[1][3] = num;
    else if(a=='B' && b=='5')
        medium2[1][4] = num;
    else if(a=='B' && b=='6')
        medium2[1][5] = num;
    else if(a=='B' && b=='7')
        medium2[1][6] = num;
    else if(a=='B' && b=='9')
        medium2[1][8] = num;
    else if(a=='C' && b=='1')
        medium2[2][0] = num;
    else if(a=='C' && b=='5')
        medium2[2][4] = num;
    else if(a=='C' && b=='9')
        medium2[2][8] = num;
    else if(a=='D' && b=='2')
        medium2[3][1] = num;
    else if(a=='D' && b=='5')
        medium2[3][4] = num;
    else if(a=='D' && b=='8')
        medium2[3][7] = num;
    else if(a=='E' && b=='1')
        medium2[4][0] = num;
    else if(a=='E' && b=='2')
        medium2[4][1] = num;
    else if(a=='E' && b=='3')
        medium2[4][2] = num;
    else if(a=='E' && b=='4')
        medium2[4][3] = num;
    else if(a=='E' && b=='5')
        medium2[4][4] = num;
    else if(a=='E' && b=='6')
        medium2[4][5] = num;
    else if(a=='E' && b=='7')
        medium2[4][6] = num;
    else if(a=='E' && b=='8')
        medium2[4][7] = num;
    else if(a=='E' && b=='9')
        medium2[4][8] = num;
    else if(a=='F' && b=='2')
        medium2[5][1] = num;
    else if(a=='F' && b=='5')
        medium2[5][4] = num;
    else if(a=='F' && b=='8')
        medium2[5][7] = num;
    else if(a=='G' && b=='1')
        medium2[6][0] = num;
    else if(a=='G' && b=='5')
        medium2[6][4] = num;
    else if(a=='G' && b=='9')
        medium2[6][8] = num;
    else if(a=='H' && b=='1')
        medium2[7][0] = num;
    else if(a=='H' && b=='3')
        medium2[7][2] = num;
    else if(a=='H' && b=='4')
        medium2[7][3] = num;
    else if(a=='H' && b=='5')
        medium2[7][4] = num;
    else if(a=='H' && b=='6')
        medium2[7][5] = num;
    else if(a=='H' && b=='7')
        medium2[7][6] = num;
    else if(a=='H' && b=='9')
        medium2[7][8] = num;
    else if(a=='I' && b=='1')
        medium2[8][0] = num;
    else if(a=='I' && b=='2')
        medium2[8][1] = num;
    else if(a=='I' && b=='4')
        medium2[8][3] = num;
    else if(a=='I' && b=='6')
        medium2[8][5] = num;
    else if(a=='I' && b=='8')
        medium2[8][7] = num;
    else if(a=='I' && b=='9')
        medium2[8][8] = num;
    else if(a=='0' && b=='0'){}
    else{
            printf("\nInvalid selection of cell\a");
            delay(1500);
        }
    }



void mediumgameplay3(char a, char b){

     char num;

    printf("\n\t\t\tEnter the number: ");
    scanf(" %1c", &num);

    if(a=='A' && b=='1')
        medium3[0][0] = num;
    else if(a=='A' && b=='5')
        medium3[0][4] = num;
    else if(a=='A' && b=='9')
        medium3[0][8] = num;
    else if(a=='B' && b=='2')
        medium3[1][1] = num;
    else if(a=='B' && b=='3')
        medium3[1][2] = num;
    else if(a=='B' && b=='4')
        medium3[1][3] = num;
    else if(a=='B' && b=='5')
        medium3[1][4] = num;
    else if(a=='B' && b=='6')
        medium3[1][5] = num;
    else if(a=='B' && b=='7')
        medium3[1][6] = num;
    else if(a=='B' && b=='8')
        medium3[1][7] = num;
    else if(a=='C' && b=='2')
        medium3[2][1] = num;
    else if(a=='C' && b=='5')
        medium3[2][4] = num;
    else if(a=='C' && b=='8')
        medium3[2][7] = num;
    else if(a=='D' && b=='2')
        medium3[3][1] = num;
    else if(a=='D' && b=='3')
        medium3[3][2] = num;
    else if(a=='D' && b=='4')
        medium3[3][3] = num;
    else if(a=='D' && b=='5')
        medium3[3][4] = num;
    else if(a=='D' && b=='6')
        medium3[3][5] = num;
    else if(a=='D' && b=='7')
        medium3[3][6] = num;
    else if(a=='D' && b=='8')
        medium3[3][7] = num;
    else if(a=='E' && b=='1')
        medium3[4][0] = num;
    else if(a=='E' && b=='5')
        medium3[4][4] = num;
    else if(a=='E' && b=='9')
        medium3[4][8] = num;
    else if(a=='F' && b=='2')
        medium3[5][1] = num;
    else if(a=='F' && b=='3')
        medium3[5][2] = num;
    else if(a=='F' && b=='4')
        medium3[5][3] = num;
    else if(a=='F' && b=='5')
        medium3[5][4] = num;
    else if(a=='F' && b=='6')
        medium3[5][5] = num;
    else if(a=='F' && b=='7')
        medium3[5][6] = num;
    else if(a=='F' && b=='8')
        medium3[5][7] = num;
    else if(a=='G' && b=='2')
        medium3[6][1] = num;
    else if(a=='G' && b=='5')
        medium3[6][4] = num;
    else if(a=='G' && b=='8')
        medium3[6][7] = num;
    else if(a=='H' && b=='2')
        medium3[7][1] = num;
    else if(a=='H' && b=='3')
        medium3[7][2] = num;
    else if(a=='H' && b=='4')
        medium3[7][3] = num;
    else if(a=='H' && b=='5')
        medium3[7][4] = num;
    else if(a=='H' && b=='6')
        medium3[7][5] = num;
    else if(a=='H' && b=='7')
        medium3[7][6] = num;
    else if(a=='H' && b=='8')
        medium3[7][7] = num;
    else if(a=='I' && b=='1')
        medium3[8][0] = num;
    else if(a=='I' && b=='5')
        medium3[8][4] = num;
    else if(a=='I' && b=='9')
        medium3[8][8] = num;
    else if(a=='0' && b=='0'){}
    else{
            printf("\nInvalid selection of cell\a");
            delay(1500);
        }
    }



void mediumgameplay4(char a, char b){

     char num;

    printf("\n\t\t\tEnter the number: ");
    scanf(" %1c", &num);

    if(a=='A' && b=='1')
        medium4[0][0] = num;
    else if(a=='A' && b=='2')
        medium4[0][1] = num;
    else if(a=='A' && b=='4')
        medium4[0][3] = num;
    else if(a=='A' && b=='6')
        medium4[0][5] = num;
    else if(a=='A' && b=='8')
        medium4[0][7] = num;
    else if(a=='A' && b=='9')
        medium4[0][8] = num;
    else if(a=='B' && b=='1')
        medium4[1][0] = num;
    else if(a=='B' && b=='3')
        medium4[1][2] = num;
    else if(a=='B' && b=='4')
        medium4[1][3] = num;
    else if(a=='B' && b=='5')
        medium4[1][4] = num;
    else if(a=='B' && b=='6')
        medium4[1][5] = num;
    else if(a=='B' && b=='7')
        medium4[1][6] = num;
    else if(a=='B' && b=='9')
        medium4[1][8] = num;
    else if(a=='C' && b=='1')
        medium4[2][0] = num;
    else if(a=='C' && b=='5')
        medium4[2][4] = num;
    else if(a=='C' && b=='9')
        medium4[2][8] = num;
    else if(a=='D' && b=='2')
        medium4[3][1] = num;
    else if(a=='D' && b=='5')
        medium4[3][4] = num;
    else if(a=='D' && b=='8')
        medium4[3][7] = num;
    else if(a=='E' && b=='1')
        medium4[4][0] = num;
    else if(a=='E' && b=='2')
        medium4[4][1] = num;
    else if(a=='E' && b=='3')
        medium4[4][2] = num;
    else if(a=='E' && b=='4')
        medium4[4][3] = num;
    else if(a=='E' && b=='5')
        medium4[4][4] = num;
    else if(a=='E' && b=='6')
        medium4[4][5] = num;
    else if(a=='E' && b=='7')
        medium4[4][6] = num;
    else if(a=='E' && b=='8')
        medium4[4][7] = num;
    else if(a=='E' && b=='9')
        medium4[4][8] = num;
    else if(a=='F' && b=='2')
        medium4[5][1] = num;
    else if(a=='F' && b=='5')
        medium4[5][4] = num;
    else if(a=='F' && b=='8')
        medium4[5][7] = num;
    else if(a=='G' && b=='1')
        medium4[6][0] = num;
    else if(a=='G' && b=='5')
        medium4[6][4] = num;
    else if(a=='G' && b=='9')
        medium4[6][8] = num;
    else if(a=='H' && b=='1')
        medium4[7][0] = num;
    else if(a=='H' && b=='3')
        medium4[7][2] = num;
    else if(a=='H' && b=='4')
        medium4[7][3] = num;
    else if(a=='H' && b=='5')
        medium4[7][4] = num;
    else if(a=='H' && b=='6')
        medium4[7][5] = num;
    else if(a=='H' && b=='7')
        medium4[7][6] = num;
    else if(a=='H' && b=='9')
        medium4[7][8] = num;
    else if(a=='I' && b=='1')
        medium4[8][0] = num;
    else if(a=='I' && b=='2')
        medium4[8][1] = num;
    else if(a=='I' && b=='4')
        medium4[8][3] = num;
    else if(a=='I' && b=='6')
        medium4[8][5] = num;
    else if(a=='I' && b=='8')
        medium4[8][7] = num;
    else if(a=='I' && b=='9')
        medium4[8][8] = num;
    else if(a=='0' && b=='0'){}
        else{
            printf("\nInvalid selection of cell\a");
            delay(1500);
        }
    }



void mediumgameplay5(char a, char b){

     char num;

    printf("\n\t\t\tEnter the number: ");
    scanf(" %1c", &num);

    if(a=='A' && b=='1')
        medium5[0][0] = num;
    else if(a=='A' && b=='3')
        medium5[0][2] = num;
    else if(a=='A' && b=='4')
        medium5[0][3] = num;
    else if(a=='A' && b=='5')
        medium5[0][4] = num;
    else if(a=='A' && b=='7')
        medium5[0][6] = num;
    else if(a=='B' && b=='1')
        medium5[1][0] = num;
    else if(a=='B' && b=='2')
        medium5[1][1] = num;
    else if(a=='B' && b=='3')
        medium5[1][2] = num;
    else if(a=='B' && b=='7')
        medium5[1][6] = num;
    else if(a=='C' && b=='3')
        medium5[2][2] = num;
    else if(a=='C' && b=='4')
        medium5[2][3] = num;
    else if(a=='C' && b=='8')
        medium5[2][7] = num;
    else if(a=='C' && b=='9')
        medium5[2][8] = num;
    else if(a=='D' && b=='1')
        medium5[3][0] = num;
    else if(a=='D' && b=='4')
        medium5[3][3] = num;
    else if(a=='D' && b=='5')
        medium5[3][4] = num;
    else if(a=='D' && b=='6')
        medium5[3][5] = num;
    else if(a=='D' && b=='7')
        medium5[3][6] = num;
    else if(a=='D' && b=='8')
        medium5[3][7] = num;
    else if(a=='E' && b=='1')
        medium5[4][0] = num;
    else if(a=='E' && b=='2')
        medium5[4][1] = num;
    else if(a=='E' && b=='3')
        medium5[4][2] = num;
    else if(a=='E' && b=='4')
        medium5[4][3] = num;
    else if(a=='E' && b=='5')
        medium5[4][4] = num;
    else if(a=='E' && b=='6')
        medium5[4][5] = num;
    else if(a=='E' && b=='7')
        medium5[4][6] = num;
    else if(a=='E' && b=='8')
        medium5[4][7] = num;
    else if(a=='E' && b=='9')
        medium5[4][8] = num;
    else if(a=='F' && b=='2')
        medium5[5][1] = num;
    else if(a=='F' && b=='3')
        medium5[5][2] = num;
    else if(a=='F' && b=='4')
        medium5[5][3] = num;
    else if(a=='F' && b=='5')
        medium5[5][4] = num;
    else if(a=='F' && b=='6')
        medium5[5][5] = num;
    else if(a=='F' && b=='9')
        medium5[5][8] = num;
    else if(a=='G' && b=='1')
        medium5[6][0] = num;
    else if(a=='G' && b=='2')
        medium5[6][1] = num;
    else if(a=='G' && b=='6')
        medium5[6][5] = num;
    else if(a=='G' && b=='7')
        medium5[6][6] = num;
    else if(a=='H' && b=='3')
        medium5[7][2] = num;
    else if(a=='H' && b=='7')
        medium5[7][6] = num;
    else if(a=='H' && b=='8')
        medium5[7][7] = num;
    else if(a=='H' && b=='9')
        medium5[7][8] = num;
    else if(a=='I' && b=='3')
        medium5[8][2] = num;
    else if(a=='I' && b=='5')
        medium5[8][4] = num;
    else if(a=='I' && b=='6')
        medium5[8][5] = num;
    else if(a=='I' && b=='7')
        medium5[8][6] = num;
    else if(a=='I' && b=='9')
        medium5[8][8] = num;
    else if(a=='0' && b=='0'){}
    else{
            printf("\nInvalid selection of cell\a");
            delay(1500);
        }
    }
