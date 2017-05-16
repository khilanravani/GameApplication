void easygameplay1(char a, char b){

        char num;

        printf("\n\t\t\tEnter the number: ");
        scanf(" %1c", &num);

        if(a=='A' && b=='2')
            easy1[0][1] = num;
        else if(a=='A' && b=='3')
            easy1[0][2] = num;
        else if(a=='A' && b=='6')
            easy1[0][5] = num;
        else if(a=='A' && b=='7')
            easy1[0][6] = num;
        else if(a=='B' && b=='1')
            easy1[1][0] = num;
        else if(a=='B' && b=='4')
            easy1[1][3] = num;
        else if(a=='B' && b=='8')
            easy1[1][7] = num;
        else if(a=='B' && b=='9')
            easy1[1][8] = num;
        else if(a=='C' && b=='1')
            easy1[2][0] = num;
        else if(a=='C' && b=='4')
            easy1[2][3] = num;
        else if(a=='C' && b=='6')
            easy1[2][5] = num;
        else if(a=='C' && b=='8')
            easy1[2][7] = num;
        else if(a=='D' && b=='1')
            easy1[3][0] = num;
        else if(a=='D' && b=='2')
            easy1[3][1] = num;
        else if(a=='D' && b=='3')
            easy1[3][2] = num;
        else if(a=='D' && b=='5')
            easy1[3][4] = num;
        else if(a=='E' && b=='3')
            easy1[4][2] = num;
        else if(a=='E' && b=='4')
            easy1[4][3] = num;
        else if(a=='E' && b=='5')
            easy1[4][4] = num;
        else if(a=='E' && b=='9')
            easy1[4][8] = num;
        else if(a=='F' && b=='5')
            easy1[5][4] = num;
        else if(a=='F' && b=='7')
            easy1[5][6] = num;
        else if(a=='F' && b=='8')
            easy1[5][7] = num;
        else if(a=='F' && b=='9')
            easy1[5][8] = num;
        else if(a=='G' && b=='1')
            easy1[6][0] = num;
        else if(a=='G' && b=='2')
            easy1[6][1] = num;
        else if(a=='G' && b=='3')
            easy1[6][2] = num;
        else if(a=='G' && b=='7')
            easy1[6][6] = num;
        else if(a=='G' && b=='9')
            easy1[6][8] = num;
        else if(a=='H' && b=='2')
            easy1[7][1] = num;
        else if(a=='H' && b=='3')
            easy1[7][2] = num;
        else if(a=='H' && b=='5')
            easy1[7][4] = num;
        else if(a=='H' && b=='8')
            easy1[7][7] = num;
        else if(a=='I' && b=='4')
            easy1[8][3] = num;
        else if(a=='I' && b=='5')
            easy1[8][4] = num;
        else if(a=='I' && b=='6')
            easy1[8][5] = num;
        else if(a=='I' && b=='7')
            easy1[8][6] = num;
        else if(a=='0' && b=='0'){}
        else{
            printf("\nInvalid selection of cell\a");
            delay(1500);
        }
    }


void easygameplay2(char a, char b){

        char num;

        printf("\n\t\t\tEnter the number: ");
        scanf(" %1c", &num);

        if(a=='A' && b=='2')
            easy2[0][1] = num;
        else if(a=='A' && b=='4')
            easy2[0][3] = num;
        else if(a=='A' && b=='5')
            easy2[0][4] = num;
        else if(a=='A' && b=='7')
            easy2[0][6] = num;
        else if(a=='A' && b=='8')
            easy2[0][7] = num;
        else if(a=='B' && b=='2')
            easy2[1][1] = num;
        else if(a=='B' && b=='3')
            easy2[1][2] = num;
        else if(a=='B' && b=='6')
            easy2[1][5] = num;
        else if(a=='B' && b=='7')
            easy2[1][6] = num;
        else if(a=='B' && b=='9')
            easy2[1][8] = num;
        else if(a=='C' && b=='1')
            easy2[2][0] = num;
        else if(a=='C' && b=='2')
            easy2[2][1] = num;
        else if(a=='C' && b=='3')
            easy2[2][2] = num;
        else if(a=='C' && b=='4')
            easy2[2][3] = num;
        else if(a=='C' && b=='6')
            easy2[2][5] = num;
        else if(a=='C' && b=='7')
            easy2[2][6] = num;
        else if(a=='D' && b=='3')
            easy2[3][2] = num;
        else if(a=='D' && b=='4')
            easy2[3][3] = num;
        else if(a=='D' && b=='7')
            easy2[3][6] = num;
        else if(a=='D' && b=='8')
            easy2[3][7] = num;
        else if(a=='D' && b=='9')
            easy2[3][8] = num;
        else if(a=='E' && b=='3')
            easy2[4][2] = num;
        else if(a=='E' && b=='5')
            easy2[4][4] = num;
        else if(a=='E' && b=='7')
            easy2[4][6] = num;
        else if(a=='F' && b=='1')
            easy2[5][0] = num;
        else if(a=='F' && b=='2')
            easy2[5][1] = num;
        else if(a=='F' && b=='3')
            easy2[5][2] = num;
        else if(a=='F' && b=='6')
            easy2[5][5] = num;
        else if(a=='F' && b=='7')
            easy2[5][6] = num;
        else if(a=='G' && b=='3')
            easy2[6][2] = num;
        else if(a=='G' && b=='4')
            easy2[6][3] = num;
        else if(a=='G' && b=='6')
            easy2[6][5] = num;
        else if(a=='G' && b=='7')
            easy2[6][6] = num;
        else if(a=='G' && b=='8')
            easy2[6][7] = num;
        else if(a=='G' && b=='9')
            easy2[6][8] = num;
        else if(a=='H' && b=='1')
            easy2[7][0] = num;
        else if(a=='H' && b=='3')
            easy2[7][2] = num;
        else if(a=='H' && b=='4')
            easy2[7][3] = num;
        else if(a=='H' && b=='7')
            easy2[7][6] = num;
        else if(a=='H' && b=='8')
            easy2[7][7] = num;
        else if(a=='I' && b=='2')
            easy2[8][1] = num;
        else if(a=='I' && b=='3')
            easy2[8][2] = num;
        else if(a=='I' && b=='5')
            easy2[8][4] = num;
        else if(a=='I' && b=='6')
            easy2[8][5] = num;
        else if(a=='I' && b=='8')
            easy2[8][7] = num;
        else if(a=='0' && b=='0'){}
        else{
            printf("\nInvalid selection of cell\a");
            delay(1500);
        }
    }


void easygameplay3(char a, char b){

        char num;

        printf("\n\t\t\tEnter the number: ");
        scanf(" %1c", &num);

        if(a=='A' && b=='2')
            easy3[0][1] = num;
        else if(a=='A' && b=='3')
            easy3[0][2] = num;
        else if(a=='A' && b=='4')
            easy3[0][3] = num;
        else if(a=='A' && b=='6')
            easy3[0][5] = num;
        else if(a=='B' && b=='4')
            easy3[1][3] = num;
        else if(a=='B' && b=='5')
            easy3[1][4] = num;
        else if(a=='B' && b=='6')
            easy3[1][5] = num;
        else if(a=='B' && b=='8')
            easy3[1][7] = num;
        else if(a=='C' && b=='5')
            easy3[2][4] = num;
        else if(a=='C' && b=='6')
            easy3[2][5] = num;
        else if(a=='C' && b=='7')
            easy3[2][6] = num;
        else if(a=='D' && b=='1')
            easy3[3][0] = num;
        else if(a=='D' && b=='4')
            easy3[3][3] = num;
        else if(a=='D' && b=='7')
            easy3[3][6] = num;
        else if(a=='D' && b=='8')
            easy3[3][7] = num;
        else if(a=='D' && b=='9')
            easy3[3][8] = num;
        else if(a=='E' && b=='3')
            easy3[4][2] = num;
        else if(a=='E' && b=='8')
            easy3[4][7] = num;
        else if(a=='F' && b=='1')
            easy3[5][0] = num;
        else if(a=='F' && b=='7')
            easy3[5][6] = num;
        else if(a=='G' && b=='5')
            easy3[6][4] = num;
        else if(a=='G' && b=='6')
            easy3[6][5] = num;
        else if(a=='G' && b=='8')
            easy3[6][7] = num;
        else if(a=='H' && b=='4')
            easy3[7][3] = num;
        else if(a=='H' && b=='6')
            easy3[7][5] = num;
        else if(a=='I' && b=='1')
            easy3[8][0] = num;
        else if(a=='I' && b=='3')
            easy3[8][2] = num;
        else if(a=='I' && b=='5')
            easy3[8][4] = num;
        else if(a=='I' && b=='7')
            easy3[8][6] = num;
        else if(a=='I' && b=='8')
            easy3[8][7] = num;
        else if(a=='0' && b=='0'){}
        else{
            printf("\nInvalid selection of cell\a");
            delay(1500);
        }
    }


void easygameplay4(char a, char b){

        char num;

        printf("\n\t\t\tEnter the number: ");
        scanf(" %1c", &num);

        if(a=='A' && b=='3')
            easy4[0][2] = num;
        else if(a=='A' && b=='7')
            easy4[0][6] = num;
        else if(a=='B' && b=='1')
            easy4[1][0] = num;
        else if(a=='B' && b=='2')
            easy4[1][1] = num;
        else if(a=='B' && b=='4')
            easy4[1][3] = num;
        else if(a=='B' && b=='5')
            easy4[1][4] = num;
        else if(a=='B' && b=='6')
            easy4[1][5] = num;
        else if(a=='B' && b=='8')
            easy4[1][7] = num;
        else if(a=='B' && b=='9')
            easy4[1][8] = num;
        else if(a=='C' && b=='3')
            easy4[2][2] = num;
        else if(a=='C' && b=='4')
            easy4[2][3] = num;
        else if(a=='C' && b=='6')
            easy4[2][5] = num;
        else if(a=='C' && b=='7')
            easy4[2][6] = num;
        else if(a=='D' && b=='1')
            easy4[3][0] = num;
        else if(a=='D' && b=='3')
            easy4[3][2] = num;
        else if(a=='D' && b=='5')
            easy4[3][4] = num;
        else if(a=='D' && b=='7')
            easy4[3][6] = num;
        else if(a=='D' && b=='9')
            easy4[3][8] = num;
        else if(a=='E' && b=='1')
            easy4[4][0] = num;
        else if(a=='E' && b=='3')
            easy4[4][2] = num;
        else if(a=='E' && b=='4')
            easy4[4][3] = num;
        else if(a=='E' && b=='5')
            easy4[4][4] = num;
        else if(a=='E' && b=='6')
            easy4[4][5] = num;
        else if(a=='E' && b=='7')
            easy4[4][6] = num;
        else if(a=='E' && b=='9')
            easy4[4][8] = num;
        else if(a=='F' && b=='1')
            easy4[5][0] = num;
        else if(a=='F' && b=='3')
            easy4[5][2] = num;
        else if(a=='F' && b=='5')
            easy4[5][4] = num;
        else if(a=='F' && b=='7')
            easy4[5][6] = num;
        else if(a=='F' && b=='9')
            easy4[5][8] = num;
        else if(a=='G' && b=='3')
            easy4[6][2] = num;
        else if(a=='G' && b=='4')
            easy4[6][3] = num;
        else if(a=='G' && b=='6')
            easy4[6][5] = num;
        else if(a=='G' && b=='7')
            easy4[6][6] = num;
        else if(a=='H' && b=='1')
            easy4[7][0] = num;
        else if(a=='H' && b=='2')
            easy4[7][1] = num;
        else if(a=='H' && b=='4')
            easy4[7][3] = num;
        else if(a=='H' && b=='5')
            easy4[7][4] = num;
        else if(a=='H' && b=='6')
            easy4[7][5] = num;
        else if(a=='H' && b=='8')
            easy4[7][7] = num;
        else if(a=='H' && b=='9')
            easy4[7][8] = num;
        else if(a=='I' && b=='3')
            easy4[8][2] = num;
        else if(a=='I' && b=='7')
            easy4[8][6] = num;
        else if(a=='0' && b=='0'){}
        else{
            printf("\nInvalid selection of cell\a");
            delay(1500);
        }
    }



void easygameplay5(char a, char b){

        char num;

        printf("\n\t\t\tEnter the number: ");
        scanf(" %1c", &num);

        if(a=='A' && b=='2')
            easy5[0][1] = num;
        else if(a=='A' && b=='6')
            easy5[0][5] = num;
        else if(a=='A' && b=='7')
            easy5[0][6] = num;
        else if(a=='B' && b=='2')
            easy5[1][1] = num;
        else if(a=='B' && b=='3')
            easy5[1][2] = num;
        else if(a=='B' && b=='4')
            easy5[1][3] = num;
        else if(a=='B' && b=='5')
            easy5[1][4] = num;
        else if(a=='B' && b=='8')
            easy5[1][7] = num;
        else if(a=='B' && b=='9')
            easy5[1][8] = num;
        else if(a=='C' && b=='1')
            easy5[2][0] = num;
        else if(a=='C' && b=='3')
            easy5[2][2] = num;
        else if(a=='C' && b=='5')
            easy5[2][4] = num;
        else if(a=='C' && b=='6')
            easy5[2][5] = num;
        else if(a=='C' && b=='7')
            easy5[2][6] = num;
        else if(a=='C' && b=='8')
            easy5[2][7] = num;
        else if(a=='D' && b=='1')
            easy5[3][0] = num;
        else if(a=='D' && b=='3')
            easy5[3][2] = num;
        else if(a=='D' && b=='4')
            easy5[3][3] = num;
        else if(a=='D' && b=='6')
            easy5[3][5] = num;
        else if(a=='D' && b=='8')
            easy5[3][7] = num;
        else if(a=='E' && b=='2')
            easy5[4][1] = num;
        else if(a=='E' && b=='3')
            easy5[4][2] = num;
        else if(a=='E' && b=='5')
            easy5[4][4] = num;
        else if(a=='E' && b=='7')
            easy5[4][6] = num;
        else if(a=='E' && b=='8')
            easy5[4][7] = num;
        else if(a=='F' && b=='2')
            easy5[5][1] = num;
        else if(a=='F' && b=='4')
            easy5[5][3] = num;
        else if(a=='F' && b=='6')
            easy5[5][5] = num;
        else if(a=='F' && b=='7')
            easy5[5][6] = num;
        else if(a=='F' && b=='9')
            easy5[5][8] = num;
        else if(a=='G' && b=='2')
            easy5[6][1] = num;
        else if(a=='G' && b=='3')
            easy5[6][2] = num;
        else if(a=='G' && b=='4')
            easy5[6][3] = num;
        else if(a=='G' && b=='5')
            easy5[6][4] = num;
        else if(a=='G' && b=='7')
            easy5[6][6] = num;
        else if(a=='G' && b=='9')
            easy5[6][8] = num;
        else if(a=='H' && b=='1')
            easy5[7][0] = num;
        else if(a=='H' && b=='2')
            easy5[7][1] = num;
        else if(a=='H' && b=='5')
            easy5[7][4] = num;
        else if(a=='H' && b=='6')
            easy5[7][5] = num;
        else if(a=='H' && b=='7')
            easy5[7][6] = num;
        else if(a=='H' && b=='8')
            easy5[7][7] = num;
        else if(a=='I' && b=='3')
            easy5[8][2] = num;
        else if(a=='I' && b=='4')
            easy5[8][4] = num;
        else if(a=='I' && b=='8')
            easy5[8][7] = num;
        else if(a=='0' && b=='0'){}
        else{
            printf("\nInvalid selection of cell\a");
            delay(1500);
        }
    }
