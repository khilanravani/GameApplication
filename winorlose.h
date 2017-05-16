void easyworl1()
    {
        int row1, row2, row3, row4, row5, row6, row7, row8, row9, rowTotal;
        int column1, column2, column3, column4, column5, column6, column7, column8, column9, columnTotal;
        int block1, block2, block3, block4, block5, block6, block7, block8, block9, blockTotal;

        row1 = easy1[0][0] + easy1[0][1] + easy1[0][2] + easy1[0][3] + easy1[0][4] + easy1[0][5] + easy1[0][6] + easy1[0][7] + easy1[0][8];
        row2 = easy1[1][0] + easy1[1][1] + easy1[1][2] + easy1[1][3] + easy1[1][4] + easy1[1][5] + easy1[1][6] + easy1[1][7] + easy1[1][8];
        row3 = easy1[2][0] + easy1[2][1] + easy1[2][2] + easy1[2][3] + easy1[2][4] + easy1[2][5] + easy1[2][6] + easy1[2][7] + easy1[2][8];
        row4 = easy1[3][0] + easy1[3][1] + easy1[3][2] + easy1[3][3] + easy1[3][4] + easy1[3][5] + easy1[3][6] + easy1[3][7] + easy1[3][8];
        row5 = easy1[4][0] + easy1[4][1] + easy1[4][2] + easy1[4][3] + easy1[4][4] + easy1[4][5] + easy1[4][6] + easy1[4][7] + easy1[4][8];
        row6 = easy1[5][0] + easy1[5][1] + easy1[5][2] + easy1[5][3] + easy1[5][4] + easy1[5][5] + easy1[5][6] + easy1[5][7] + easy1[5][8];
        row7 = easy1[6][0] + easy1[6][1] + easy1[6][2] + easy1[6][3] + easy1[6][4] + easy1[6][5] + easy1[6][6] + easy1[6][7] + easy1[6][8];
        row8 = easy1[7][0] + easy1[7][1] + easy1[7][2] + easy1[7][3] + easy1[7][4] + easy1[7][5] + easy1[7][6] + easy1[7][7] + easy1[7][8];
        row9 = easy1[8][0] + easy1[8][1] + easy1[8][2] + easy1[8][3] + easy1[8][4] + easy1[8][5] + easy1[8][6] + easy1[8][7] + easy1[8][8];

        column1 = easy1[0][0] + easy1[1][0] + easy1[2][0] + easy1[3][0] + easy1[4][0] + easy1[5][0] + easy1[6][0] + easy1[7][0] + easy1[8][0];
        column2 = easy1[0][1] + easy1[1][1] + easy1[2][1] + easy1[3][1] + easy1[4][1] + easy1[5][1] + easy1[6][1] + easy1[7][1] + easy1[8][1];
        column3 = easy1[0][2] + easy1[1][2] + easy1[2][2] + easy1[3][2] + easy1[4][2] + easy1[5][2] + easy1[6][2] + easy1[7][2] + easy1[8][2];
        column4 = easy1[0][3] + easy1[1][3] + easy1[2][3] + easy1[3][3] + easy1[4][3] + easy1[5][3] + easy1[6][3] + easy1[7][3] + easy1[8][3];
        column5 = easy1[0][4] + easy1[1][4] + easy1[2][4] + easy1[3][4] + easy1[4][4] + easy1[5][4] + easy1[6][4] + easy1[7][4] + easy1[8][4];
        column6 = easy1[0][5] + easy1[1][5] + easy1[2][5] + easy1[3][5] + easy1[4][5] + easy1[5][5] + easy1[6][5] + easy1[7][5] + easy1[8][5];
        column7 = easy1[0][6] + easy1[1][6] + easy1[2][6] + easy1[3][6] + easy1[4][6] + easy1[5][6] + easy1[6][6] + easy1[7][6] + easy1[8][6];
        column8 = easy1[0][7] + easy1[1][7] + easy1[2][7] + easy1[3][7] + easy1[4][7] + easy1[5][7] + easy1[6][7] + easy1[7][7] + easy1[8][7];
        column9 = easy1[0][8] + easy1[1][8] + easy1[2][8] + easy1[3][8] + easy1[4][8] + easy1[5][8] + easy1[6][8] + easy1[7][8] + easy1[8][8];

        block1 = easy1[0][0] + easy1[0][1] + easy1[0][2] + easy1[1][0] + easy1[1][1] + easy1[1][2] + easy1[2][0] + easy1[2][1] + easy1[2][2];
        block2 = easy1[0][3] + easy1[0][4] + easy1[0][5] + easy1[1][3] + easy1[1][4] + easy1[1][5] + easy1[2][3] + easy1[2][4] + easy1[2][5];
        block3 = easy1[0][6] + easy1[0][7] + easy1[0][8] + easy1[1][6] + easy1[1][7] + easy1[1][8] + easy1[2][6] + easy1[2][7] + easy1[2][8];
        block4 = easy1[3][0] + easy1[3][1] + easy1[3][2] + easy1[4][0] + easy1[4][1] + easy1[4][2] + easy1[5][0] + easy1[5][1] + easy1[5][2];
        block5 = easy1[3][3] + easy1[3][4] + easy1[3][5] + easy1[4][3] + easy1[4][4] + easy1[4][5] + easy1[5][3] + easy1[5][4] + easy1[5][5];
        block6 = easy1[3][6] + easy1[3][7] + easy1[3][8] + easy1[4][6] + easy1[4][7] + easy1[4][8] + easy1[5][6] + easy1[5][7] + easy1[5][8];
        block7 = easy1[6][0] + easy1[6][1] + easy1[6][2] + easy1[7][0] + easy1[7][1] + easy1[7][2] + easy1[8][0] + easy1[8][1] + easy1[8][2];
        block8 = easy1[6][3] + easy1[6][4] + easy1[6][5] + easy1[7][3] + easy1[7][4] + easy1[7][5] + easy1[8][3] + easy1[8][4] + easy1[8][5];
        block9 = easy1[6][6] + easy1[6][7] + easy1[6][8] + easy1[7][6] + easy1[7][7] + easy1[7][8] + easy1[8][6] + easy1[8][7] + easy1[8][8];

        rowTotal = row1 + row2 + row3 + row4 + row5 + row6 + row7 + row8 + row9;
        columnTotal = column1 + column2 + column3 + column4 + column5 + column6 + column7 + column8 + column9;
        blockTotal = block1 + block2 + block3 + block4 + block5 + block6 + block7 + block8 + block9;

        if(rowTotal==4293 && columnTotal==4293 && blockTotal==4293)
            printf("\n\n\n\t\t\tYou Win!!\n\n\n");
        else
            printf("\n\n\n\t\t\tYou Lost :(\n\n\n");
    }

void easyworl2()
    {
        int row1, row2, row3, row4, row5, row6, row7, row8, row9, rowTotal;
        int column1, column2, column3, column4, column5, column6, column7, column8, column9, columnTotal;
        int block1, block2, block3, block4, block5, block6, block7, block8, block9, blockTotal;

        row1 = easy2[0][0] + easy2[0][1] + easy2[0][2] + easy2[0][3] + easy2[0][4] + easy2[0][5] + easy2[0][6] + easy2[0][7] + easy2[0][8];
        row2 = easy2[1][0] + easy2[1][1] + easy2[1][2] + easy2[1][3] + easy2[1][4] + easy2[1][5] + easy2[1][6] + easy2[1][7] + easy2[1][8];
        row3 = easy2[2][0] + easy2[2][1] + easy2[2][2] + easy2[2][3] + easy2[2][4] + easy2[2][5] + easy2[2][6] + easy2[2][7] + easy2[2][8];
        row4 = easy2[3][0] + easy2[3][1] + easy2[3][2] + easy2[3][3] + easy2[3][4] + easy2[3][5] + easy2[3][6] + easy2[3][7] + easy2[3][8];
        row5 = easy2[4][0] + easy2[4][1] + easy2[4][2] + easy2[4][3] + easy2[4][4] + easy2[4][5] + easy2[4][6] + easy2[4][7] + easy2[4][8];
        row6 = easy2[5][0] + easy2[5][1] + easy2[5][2] + easy2[5][3] + easy2[5][4] + easy2[5][5] + easy2[5][6] + easy2[5][7] + easy2[5][8];
        row7 = easy2[6][0] + easy2[6][1] + easy2[6][2] + easy2[6][3] + easy2[6][4] + easy2[6][5] + easy2[6][6] + easy2[6][7] + easy2[6][8];
        row8 = easy2[7][0] + easy2[7][1] + easy2[7][2] + easy2[7][3] + easy2[7][4] + easy2[7][5] + easy2[7][6] + easy2[7][7] + easy2[7][8];
        row9 = easy2[8][0] + easy2[8][1] + easy2[8][2] + easy2[8][3] + easy2[8][4] + easy2[8][5] + easy2[8][6] + easy2[8][7] + easy2[8][8];

        column1 = easy2[0][0] + easy2[1][0] + easy2[2][0] + easy2[3][0] + easy2[4][0] + easy2[5][0] + easy2[6][0] + easy2[7][0] + easy2[8][0];
        column2 = easy2[0][1] + easy2[1][1] + easy2[2][1] + easy2[3][1] + easy2[4][1] + easy2[5][1] + easy2[6][1] + easy2[7][1] + easy2[8][1];
        column3 = easy2[0][2] + easy2[1][2] + easy2[2][2] + easy2[3][2] + easy2[4][2] + easy2[5][2] + easy2[6][2] + easy2[7][2] + easy2[8][2];
        column4 = easy2[0][3] + easy2[1][3] + easy2[2][3] + easy2[3][3] + easy2[4][3] + easy2[5][3] + easy2[6][3] + easy2[7][3] + easy2[8][3];
        column5 = easy2[0][4] + easy2[1][4] + easy2[2][4] + easy2[3][4] + easy2[4][4] + easy2[5][4] + easy2[6][4] + easy2[7][4] + easy2[8][4];
        column6 = easy2[0][5] + easy2[1][5] + easy2[2][5] + easy2[3][5] + easy2[4][5] + easy2[5][5] + easy2[6][5] + easy2[7][5] + easy2[8][5];
        column7 = easy2[0][6] + easy2[1][6] + easy2[2][6] + easy2[3][6] + easy2[4][6] + easy2[5][6] + easy2[6][6] + easy2[7][6] + easy2[8][6];
        column8 = easy2[0][7] + easy2[1][7] + easy2[2][7] + easy2[3][7] + easy2[4][7] + easy2[5][7] + easy2[6][7] + easy2[7][7] + easy2[8][7];
        column9 = easy2[0][8] + easy2[1][8] + easy2[2][8] + easy2[3][8] + easy2[4][8] + easy2[5][8] + easy2[6][8] + easy2[7][8] + easy2[8][8];

        block1 = easy2[0][0] + easy2[0][1] + easy2[0][2] + easy2[1][0] + easy2[1][1] + easy2[1][2] + easy2[2][0] + easy2[2][1] + easy2[2][2];
        block2 = easy2[0][3] + easy2[0][4] + easy2[0][5] + easy2[1][3] + easy2[1][4] + easy2[1][5] + easy2[2][3] + easy2[2][4] + easy2[2][5];
        block3 = easy2[0][6] + easy2[0][7] + easy2[0][8] + easy2[1][6] + easy2[1][7] + easy2[1][8] + easy2[2][6] + easy2[2][7] + easy2[2][8];
        block4 = easy2[3][0] + easy2[3][1] + easy2[3][2] + easy2[4][0] + easy2[4][1] + easy2[4][2] + easy2[5][0] + easy2[5][1] + easy2[5][2];
        block5 = easy2[3][3] + easy2[3][4] + easy2[3][5] + easy2[4][3] + easy2[4][4] + easy2[4][5] + easy2[5][3] + easy2[5][4] + easy2[5][5];
        block6 = easy2[3][6] + easy2[3][7] + easy2[3][8] + easy2[4][6] + easy2[4][7] + easy2[4][8] + easy2[5][6] + easy2[5][7] + easy2[5][8];
        block7 = easy2[6][0] + easy2[6][1] + easy2[6][2] + easy2[7][0] + easy2[7][1] + easy2[7][2] + easy2[8][0] + easy2[8][1] + easy2[8][2];
        block8 = easy2[6][3] + easy2[6][4] + easy2[6][5] + easy2[7][3] + easy2[7][4] + easy2[7][5] + easy2[8][3] + easy2[8][4] + easy2[8][5];
        block9 = easy2[6][6] + easy2[6][7] + easy2[6][8] + easy2[7][6] + easy2[7][7] + easy2[7][8] + easy2[8][6] + easy2[8][7] + easy2[8][8];

        rowTotal = row1 + row2 + row3 + row4 + row5 + row6 + row7 + row8 + row9;
        columnTotal = column1 + column2 + column3 + column4 + column5 + column6 + column7 + column8 + column9;
        blockTotal = block1 + block2 + block3 + block4 + block5 + block6 + block7 + block8 + block9;

        if(rowTotal==4293 && columnTotal==4293 && blockTotal==4293)
            printf("\n\n\n\t\t\tYou Win!!\n\n\n");
        else
            printf("\n\n\n\t\t\tYou Lost :(\n\n\n");
    }

void easyworl3()
    {
        int row1, row2, row3, row4, row5, row6, row7, row8, row9, rowTotal;
        int column1, column2, column3, column4, column5, column6, column7, column8, column9, columnTotal;
        int block1, block2, block3, block4, block5, block6, block7, block8, block9, blockTotal;

        row1 = easy3[0][0] + easy3[0][1] + easy3[0][2] + easy3[0][3] + easy3[0][4] + easy3[0][5] + easy3[0][6] + easy3[0][7] + easy3[0][8];
        row2 = easy3[1][0] + easy3[1][1] + easy3[1][2] + easy3[1][3] + easy3[1][4] + easy3[1][5] + easy3[1][6] + easy3[1][7] + easy3[1][8];
        row3 = easy3[2][0] + easy3[2][1] + easy3[2][2] + easy3[2][3] + easy3[2][4] + easy3[2][5] + easy3[2][6] + easy3[2][7] + easy3[2][8];
        row4 = easy3[3][0] + easy3[3][1] + easy3[3][2] + easy3[3][3] + easy3[3][4] + easy3[3][5] + easy3[3][6] + easy3[3][7] + easy3[3][8];
        row5 = easy3[4][0] + easy3[4][1] + easy3[4][2] + easy3[4][3] + easy3[4][4] + easy3[4][5] + easy3[4][6] + easy3[4][7] + easy3[4][8];
        row6 = easy3[5][0] + easy3[5][1] + easy3[5][2] + easy3[5][3] + easy3[5][4] + easy3[5][5] + easy3[5][6] + easy3[5][7] + easy3[5][8];
        row7 = easy3[6][0] + easy3[6][1] + easy3[6][2] + easy3[6][3] + easy3[6][4] + easy3[6][5] + easy3[6][6] + easy3[6][7] + easy3[6][8];
        row8 = easy3[7][0] + easy3[7][1] + easy3[7][2] + easy3[7][3] + easy3[7][4] + easy3[7][5] + easy3[7][6] + easy3[7][7] + easy3[7][8];
        row9 = easy3[8][0] + easy3[8][1] + easy3[8][2] + easy3[8][3] + easy3[8][4] + easy3[8][5] + easy3[8][6] + easy3[8][7] + easy3[8][8];

        column1 = easy3[0][0] + easy3[1][0] + easy3[2][0] + easy3[3][0] + easy3[4][0] + easy3[5][0] + easy3[6][0] + easy3[7][0] + easy3[8][0];
        column2 = easy3[0][1] + easy3[1][1] + easy3[2][1] + easy3[3][1] + easy3[4][1] + easy3[5][1] + easy3[6][1] + easy3[7][1] + easy3[8][1];
        column3 = easy3[0][2] + easy3[1][2] + easy3[2][2] + easy3[3][2] + easy3[4][2] + easy3[5][2] + easy3[6][2] + easy3[7][2] + easy3[8][2];
        column4 = easy3[0][3] + easy3[1][3] + easy3[2][3] + easy3[3][3] + easy3[4][3] + easy3[5][3] + easy3[6][3] + easy3[7][3] + easy3[8][3];
        column5 = easy3[0][4] + easy3[1][4] + easy3[2][4] + easy3[3][4] + easy3[4][4] + easy3[5][4] + easy3[6][4] + easy3[7][4] + easy3[8][4];
        column6 = easy3[0][5] + easy3[1][5] + easy3[2][5] + easy3[3][5] + easy3[4][5] + easy3[5][5] + easy3[6][5] + easy3[7][5] + easy3[8][5];
        column7 = easy3[0][6] + easy3[1][6] + easy3[2][6] + easy3[3][6] + easy3[4][6] + easy3[5][6] + easy3[6][6] + easy3[7][6] + easy3[8][6];
        column8 = easy3[0][7] + easy3[1][7] + easy3[2][7] + easy3[3][7] + easy3[4][7] + easy3[5][7] + easy3[6][7] + easy3[7][7] + easy3[8][7];
        column9 = easy3[0][8] + easy3[1][8] + easy3[2][8] + easy3[3][8] + easy3[4][8] + easy3[5][8] + easy3[6][8] + easy3[7][8] + easy3[8][8];

        block1 = easy3[0][0] + easy3[0][1] + easy3[0][2] + easy3[1][0] + easy3[1][1] + easy3[1][2] + easy3[2][0] + easy3[2][1] + easy3[2][2];
        block2 = easy3[0][3] + easy3[0][4] + easy3[0][5] + easy3[1][3] + easy3[1][4] + easy3[1][5] + easy3[2][3] + easy3[2][4] + easy3[2][5];
        block3 = easy3[0][6] + easy3[0][7] + easy3[0][8] + easy3[1][6] + easy3[1][7] + easy3[1][8] + easy3[2][6] + easy3[2][7] + easy3[2][8];
        block4 = easy3[3][0] + easy3[3][1] + easy3[3][2] + easy3[4][0] + easy3[4][1] + easy3[4][2] + easy3[5][0] + easy3[5][1] + easy3[5][2];
        block5 = easy3[3][3] + easy3[3][4] + easy3[3][5] + easy3[4][3] + easy3[4][4] + easy3[4][5] + easy3[5][3] + easy3[5][4] + easy3[5][5];
        block6 = easy3[3][6] + easy3[3][7] + easy3[3][8] + easy3[4][6] + easy3[4][7] + easy3[4][8] + easy3[5][6] + easy3[5][7] + easy3[5][8];
        block7 = easy3[6][0] + easy3[6][1] + easy3[6][2] + easy3[7][0] + easy3[7][1] + easy3[7][2] + easy3[8][0] + easy3[8][1] + easy3[8][2];
        block8 = easy3[6][3] + easy3[6][4] + easy3[6][5] + easy3[7][3] + easy3[7][4] + easy3[7][5] + easy3[8][3] + easy3[8][4] + easy3[8][5];
        block9 = easy3[6][6] + easy3[6][7] + easy3[6][8] + easy3[7][6] + easy3[7][7] + easy3[7][8] + easy3[8][6] + easy3[8][7] + easy3[8][8];

        rowTotal = row1 + row2 + row3 + row4 + row5 + row6 + row7 + row8 + row9;
        columnTotal = column1 + column2 + column3 + column4 + column5 + column6 + column7 + column8 + column9;
        blockTotal = block1 + block2 + block3 + block4 + block5 + block6 + block7 + block8 + block9;

        if(rowTotal==4293 && columnTotal==4293 && blockTotal==4293)
            printf("\n\n\n\t\t\tYou Win!!\n\n\n");
        else
            printf("\n\n\n\t\t\tYou Lost :(\n\n\n");
    }


void easyworl4()
    {
        int row1, row2, row3, row4, row5, row6, row7, row8, row9, rowTotal;
        int column1, column2, column3, column4, column5, column6, column7, column8, column9, columnTotal;
        int block1, block2, block3, block4, block5, block6, block7, block8, block9, blockTotal;

        row1 = easy4[0][0] + easy4[0][1] + easy4[0][2] + easy4[0][3] + easy4[0][4] + easy4[0][5] + easy4[0][6] + easy4[0][7] + easy4[0][8];
        row2 = easy4[1][0] + easy4[1][1] + easy4[1][2] + easy4[1][3] + easy4[1][4] + easy4[1][5] + easy4[1][6] + easy4[1][7] + easy4[1][8];
        row3 = easy4[2][0] + easy4[2][1] + easy4[2][2] + easy4[2][3] + easy4[2][4] + easy4[2][5] + easy4[2][6] + easy4[2][7] + easy4[2][8];
        row4 = easy4[3][0] + easy4[3][1] + easy4[3][2] + easy4[3][3] + easy4[3][4] + easy4[3][5] + easy4[3][6] + easy4[3][7] + easy4[3][8];
        row5 = easy4[4][0] + easy4[4][1] + easy4[4][2] + easy4[4][3] + easy4[4][4] + easy4[4][5] + easy4[4][6] + easy4[4][7] + easy4[4][8];
        row6 = easy4[5][0] + easy4[5][1] + easy4[5][2] + easy4[5][3] + easy4[5][4] + easy4[5][5] + easy4[5][6] + easy4[5][7] + easy4[5][8];
        row7 = easy4[6][0] + easy4[6][1] + easy4[6][2] + easy4[6][3] + easy4[6][4] + easy4[6][5] + easy4[6][6] + easy4[6][7] + easy4[6][8];
        row8 = easy4[7][0] + easy4[7][1] + easy4[7][2] + easy4[7][3] + easy4[7][4] + easy4[7][5] + easy4[7][6] + easy4[7][7] + easy4[7][8];
        row9 = easy4[8][0] + easy4[8][1] + easy4[8][2] + easy4[8][3] + easy4[8][4] + easy4[8][5] + easy4[8][6] + easy4[8][7] + easy4[8][8];

        column1 = easy4[0][0] + easy4[1][0] + easy4[2][0] + easy4[3][0] + easy4[4][0] + easy4[5][0] + easy4[6][0] + easy4[7][0] + easy4[8][0];
        column2 = easy4[0][1] + easy4[1][1] + easy4[2][1] + easy4[3][1] + easy4[4][1] + easy4[5][1] + easy4[6][1] + easy4[7][1] + easy4[8][1];
        column3 = easy4[0][2] + easy4[1][2] + easy4[2][2] + easy4[3][2] + easy4[4][2] + easy4[5][2] + easy4[6][2] + easy4[7][2] + easy4[8][2];
        column4 = easy4[0][3] + easy4[1][3] + easy4[2][3] + easy4[3][3] + easy4[4][3] + easy4[5][3] + easy4[6][3] + easy4[7][3] + easy4[8][3];
        column5 = easy4[0][4] + easy4[1][4] + easy4[2][4] + easy4[3][4] + easy4[4][4] + easy4[5][4] + easy4[6][4] + easy4[7][4] + easy4[8][4];
        column6 = easy4[0][5] + easy4[1][5] + easy4[2][5] + easy4[3][5] + easy4[4][5] + easy4[5][5] + easy4[6][5] + easy4[7][5] + easy4[8][5];
        column7 = easy4[0][6] + easy4[1][6] + easy4[2][6] + easy4[3][6] + easy4[4][6] + easy4[5][6] + easy4[6][6] + easy4[7][6] + easy4[8][6];
        column8 = easy4[0][7] + easy4[1][7] + easy4[2][7] + easy4[3][7] + easy4[4][7] + easy4[5][7] + easy4[6][7] + easy4[7][7] + easy4[8][7];
        column9 = easy4[0][8] + easy4[1][8] + easy4[2][8] + easy4[3][8] + easy4[4][8] + easy4[5][8] + easy4[6][8] + easy4[7][8] + easy4[8][8];

        block1 = easy4[0][0] + easy4[0][1] + easy4[0][2] + easy4[1][0] + easy4[1][1] + easy4[1][2] + easy4[2][0] + easy4[2][1] + easy4[2][2];
        block2 = easy4[0][3] + easy4[0][4] + easy4[0][5] + easy4[1][3] + easy4[1][4] + easy4[1][5] + easy4[2][3] + easy4[2][4] + easy4[2][5];
        block3 = easy4[0][6] + easy4[0][7] + easy4[0][8] + easy4[1][6] + easy4[1][7] + easy4[1][8] + easy4[2][6] + easy4[2][7] + easy4[2][8];
        block4 = easy4[3][0] + easy4[3][1] + easy4[3][2] + easy4[4][0] + easy4[4][1] + easy4[4][2] + easy4[5][0] + easy4[5][1] + easy4[5][2];
        block5 = easy4[3][3] + easy4[3][4] + easy4[3][5] + easy4[4][3] + easy4[4][4] + easy4[4][5] + easy4[5][3] + easy4[5][4] + easy4[5][5];
        block6 = easy4[3][6] + easy4[3][7] + easy4[3][8] + easy4[4][6] + easy4[4][7] + easy4[4][8] + easy4[5][6] + easy4[5][7] + easy4[5][8];
        block7 = easy4[6][0] + easy4[6][1] + easy4[6][2] + easy4[7][0] + easy4[7][1] + easy4[7][2] + easy4[8][0] + easy4[8][1] + easy4[8][2];
        block8 = easy4[6][3] + easy4[6][4] + easy4[6][5] + easy4[7][3] + easy4[7][4] + easy4[7][5] + easy4[8][3] + easy4[8][4] + easy4[8][5];
        block9 = easy4[6][6] + easy4[6][7] + easy4[6][8] + easy4[7][6] + easy4[7][7] + easy4[7][8] + easy4[8][6] + easy4[8][7] + easy4[8][8];

        rowTotal = row1 + row2 + row3 + row4 + row5 + row6 + row7 + row8 + row9;
        columnTotal = column1 + column2 + column3 + column4 + column5 + column6 + column7 + column8 + column9;
        blockTotal = block1 + block2 + block3 + block4 + block5 + block6 + block7 + block8 + block9;

        if(rowTotal==4293 && columnTotal==4293 && blockTotal==4293)
            printf("\n\n\n\t\t\tYou Win!!\n\n\n");
        else
            printf("\n\n\n\t\t\tYou Lost :(\n\n\n");
    }



void easyworl5()
    {
        int row1, row2, row3, row4, row5, row6, row7, row8, row9, rowTotal;
        int column1, column2, column3, column4, column5, column6, column7, column8, column9, columnTotal;
        int block1, block2, block3, block4, block5, block6, block7, block8, block9, blockTotal;

        row1 = easy5[0][0] + easy5[0][1] + easy5[0][2] + easy5[0][3] + easy5[0][4] + easy5[0][5] + easy5[0][6] + easy5[0][7] + easy5[0][8];
        row2 = easy5[1][0] + easy5[1][1] + easy5[1][2] + easy5[1][3] + easy5[1][4] + easy5[1][5] + easy5[1][6] + easy5[1][7] + easy5[1][8];
        row3 = easy5[2][0] + easy5[2][1] + easy5[2][2] + easy5[2][3] + easy5[2][4] + easy5[2][5] + easy5[2][6] + easy5[2][7] + easy5[2][8];
        row4 = easy5[3][0] + easy5[3][1] + easy5[3][2] + easy5[3][3] + easy5[3][4] + easy5[3][5] + easy5[3][6] + easy5[3][7] + easy5[3][8];
        row5 = easy5[4][0] + easy5[4][1] + easy5[4][2] + easy5[4][3] + easy5[4][4] + easy5[4][5] + easy5[4][6] + easy5[4][7] + easy5[4][8];
        row6 = easy5[5][0] + easy5[5][1] + easy5[5][2] + easy5[5][3] + easy5[5][4] + easy5[5][5] + easy5[5][6] + easy5[5][7] + easy5[5][8];
        row7 = easy5[6][0] + easy5[6][1] + easy5[6][2] + easy5[6][3] + easy5[6][4] + easy5[6][5] + easy5[6][6] + easy5[6][7] + easy5[6][8];
        row8 = easy5[7][0] + easy5[7][1] + easy5[7][2] + easy5[7][3] + easy5[7][4] + easy5[7][5] + easy5[7][6] + easy5[7][7] + easy5[7][8];
        row9 = easy5[8][0] + easy5[8][1] + easy5[8][2] + easy5[8][3] + easy5[8][4] + easy5[8][5] + easy5[8][6] + easy5[8][7] + easy5[8][8];

        column1 = easy5[0][0] + easy5[1][0] + easy5[2][0] + easy5[3][0] + easy5[4][0] + easy5[5][0] + easy5[6][0] + easy5[7][0] + easy5[8][0];
        column2 = easy5[0][1] + easy5[1][1] + easy5[2][1] + easy5[3][1] + easy5[4][1] + easy5[5][1] + easy5[6][1] + easy5[7][1] + easy5[8][1];
        column3 = easy5[0][2] + easy5[1][2] + easy5[2][2] + easy5[3][2] + easy5[4][2] + easy5[5][2] + easy5[6][2] + easy5[7][2] + easy5[8][2];
        column4 = easy5[0][3] + easy5[1][3] + easy5[2][3] + easy5[3][3] + easy5[4][3] + easy5[5][3] + easy5[6][3] + easy5[7][3] + easy5[8][3];
        column5 = easy5[0][4] + easy5[1][4] + easy5[2][4] + easy5[3][4] + easy5[4][4] + easy5[5][4] + easy5[6][4] + easy5[7][4] + easy5[8][4];
        column6 = easy5[0][5] + easy5[1][5] + easy5[2][5] + easy5[3][5] + easy5[4][5] + easy5[5][5] + easy5[6][5] + easy5[7][5] + easy5[8][5];
        column7 = easy5[0][6] + easy5[1][6] + easy5[2][6] + easy5[3][6] + easy5[4][6] + easy5[5][6] + easy5[6][6] + easy5[7][6] + easy5[8][6];
        column8 = easy5[0][7] + easy5[1][7] + easy5[2][7] + easy5[3][7] + easy5[4][7] + easy5[5][7] + easy5[6][7] + easy5[7][7] + easy5[8][7];
        column9 = easy5[0][8] + easy5[1][8] + easy5[2][8] + easy5[3][8] + easy5[4][8] + easy5[5][8] + easy5[6][8] + easy5[7][8] + easy5[8][8];

        block1 = easy5[0][0] + easy5[0][1] + easy5[0][2] + easy5[1][0] + easy5[1][1] + easy5[1][2] + easy5[2][0] + easy5[2][1] + easy5[2][2];
        block2 = easy5[0][3] + easy5[0][4] + easy5[0][5] + easy5[1][3] + easy5[1][4] + easy5[1][5] + easy5[2][3] + easy5[2][4] + easy5[2][5];
        block3 = easy5[0][6] + easy5[0][7] + easy5[0][8] + easy5[1][6] + easy5[1][7] + easy5[1][8] + easy5[2][6] + easy5[2][7] + easy5[2][8];
        block4 = easy5[3][0] + easy5[3][1] + easy5[3][2] + easy5[4][0] + easy5[4][1] + easy5[4][2] + easy5[5][0] + easy5[5][1] + easy5[5][2];
        block5 = easy5[3][3] + easy5[3][4] + easy5[3][5] + easy5[4][3] + easy5[4][4] + easy5[4][5] + easy5[5][3] + easy5[5][4] + easy5[5][5];
        block6 = easy5[3][6] + easy5[3][7] + easy5[3][8] + easy5[4][6] + easy5[4][7] + easy5[4][8] + easy5[5][6] + easy5[5][7] + easy5[5][8];
        block7 = easy5[6][0] + easy5[6][1] + easy5[6][2] + easy5[7][0] + easy5[7][1] + easy5[7][2] + easy5[8][0] + easy5[8][1] + easy5[8][2];
        block8 = easy5[6][3] + easy5[6][4] + easy5[6][5] + easy5[7][3] + easy5[7][4] + easy5[7][5] + easy5[8][3] + easy5[8][4] + easy5[8][5];
        block9 = easy5[6][6] + easy5[6][7] + easy5[6][8] + easy5[7][6] + easy5[7][7] + easy5[7][8] + easy5[8][6] + easy5[8][7] + easy5[8][8];

        rowTotal = row1 + row2 + row3 + row4 + row5 + row6 + row7 + row8 + row9;
        columnTotal = column1 + column2 + column3 + column4 + column5 + column6 + column7 + column8 + column9;
        blockTotal = block1 + block2 + block3 + block4 + block5 + block6 + block7 + block8 + block9;

        if(rowTotal==4293 && columnTotal==4293 && blockTotal==4293)
            printf("\n\n\n\t\t\tYou Win!!\n\n\n");
        else
            printf("\n\n\n\t\t\tYou Lost :(\n\n\n");
    }


void mediumworl1()
    {
        int row1, row2, row3, row4, row5, row6, row7, row8, row9, rowTotal;
        int column1, column2, column3, column4, column5, column6, column7, column8, column9, columnTotal;
        int block1, block2, block3, block4, block5, block6, block7, block8, block9, blockTotal;

        row1 = medium1[0][0] + medium1[0][1] + medium1[0][2] + medium1[0][3] + medium1[0][4] + medium1[0][5] + medium1[0][6] + medium1[0][7] + medium1[0][8];
        row2 = medium1[1][0] + medium1[1][1] + medium1[1][2] + medium1[1][3] + medium1[1][4] + medium1[1][5] + medium1[1][6] + medium1[1][7] + medium1[1][8];
        row3 = medium1[2][0] + medium1[2][1] + medium1[2][2] + medium1[2][3] + medium1[2][4] + medium1[2][5] + medium1[2][6] + medium1[2][7] + medium1[2][8];
        row4 = medium1[3][0] + medium1[3][1] + medium1[3][2] + medium1[3][3] + medium1[3][4] + medium1[3][5] + medium1[3][6] + medium1[3][7] + medium1[3][8];
        row5 = medium1[4][0] + medium1[4][1] + medium1[4][2] + medium1[4][3] + medium1[4][4] + medium1[4][5] + medium1[4][6] + medium1[4][7] + medium1[4][8];
        row6 = medium1[5][0] + medium1[5][1] + medium1[5][2] + medium1[5][3] + medium1[5][4] + medium1[5][5] + medium1[5][6] + medium1[5][7] + medium1[5][8];
        row7 = medium1[6][0] + medium1[6][1] + medium1[6][2] + medium1[6][3] + medium1[6][4] + medium1[6][5] + medium1[6][6] + medium1[6][7] + medium1[6][8];
        row8 = medium1[7][0] + medium1[7][1] + medium1[7][2] + medium1[7][3] + medium1[7][4] + medium1[7][5] + medium1[7][6] + medium1[7][7] + medium1[7][8];
        row9 = medium1[8][0] + medium1[8][1] + medium1[8][2] + medium1[8][3] + medium1[8][4] + medium1[8][5] + medium1[8][6] + medium1[8][7] + medium1[8][8];

        column1 = medium1[0][0] + medium1[1][0] + medium1[2][0] + medium1[3][0] + medium1[4][0] + medium1[5][0] + medium1[6][0] + medium1[7][0] + medium1[8][0];
        column2 = medium1[0][1] + medium1[1][1] + medium1[2][1] + medium1[3][1] + medium1[4][1] + medium1[5][1] + medium1[6][1] + medium1[7][1] + medium1[8][1];
        column3 = medium1[0][2] + medium1[1][2] + medium1[2][2] + medium1[3][2] + medium1[4][2] + medium1[5][2] + medium1[6][2] + medium1[7][2] + medium1[8][2];
        column4 = medium1[0][3] + medium1[1][3] + medium1[2][3] + medium1[3][3] + medium1[4][3] + medium1[5][3] + medium1[6][3] + medium1[7][3] + medium1[8][3];
        column5 = medium1[0][4] + medium1[1][4] + medium1[2][4] + medium1[3][4] + medium1[4][4] + medium1[5][4] + medium1[6][4] + medium1[7][4] + medium1[8][4];
        column6 = medium1[0][5] + medium1[1][5] + medium1[2][5] + medium1[3][5] + medium1[4][5] + medium1[5][5] + medium1[6][5] + medium1[7][5] + medium1[8][5];
        column7 = medium1[0][6] + medium1[1][6] + medium1[2][6] + medium1[3][6] + medium1[4][6] + medium1[5][6] + medium1[6][6] + medium1[7][6] + medium1[8][6];
        column8 = medium1[0][7] + medium1[1][7] + medium1[2][7] + medium1[3][7] + medium1[4][7] + medium1[5][7] + medium1[6][7] + medium1[7][7] + medium1[8][7];
        column9 = medium1[0][8] + medium1[1][8] + medium1[2][8] + medium1[3][8] + medium1[4][8] + medium1[5][8] + medium1[6][8] + medium1[7][8] + medium1[8][8];

        block1 = medium1[0][0] + medium1[0][1] + medium1[0][2] + medium1[1][0] + medium1[1][1] + medium1[1][2] + medium1[2][0] + medium1[2][1] + medium1[2][2];
        block2 = medium1[0][3] + medium1[0][4] + medium1[0][5] + medium1[1][3] + medium1[1][4] + medium1[1][5] + medium1[2][3] + medium1[2][4] + medium1[2][5];
        block3 = medium1[0][6] + medium1[0][7] + medium1[0][8] + medium1[1][6] + medium1[1][7] + medium1[1][8] + medium1[2][6] + medium1[2][7] + medium1[2][8];
        block4 = medium1[3][0] + medium1[3][1] + medium1[3][2] + medium1[4][0] + medium1[4][1] + medium1[4][2] + medium1[5][0] + medium1[5][1] + medium1[5][2];
        block5 = medium1[3][3] + medium1[3][4] + medium1[3][5] + medium1[4][3] + medium1[4][4] + medium1[4][5] + medium1[5][3] + medium1[5][4] + medium1[5][5];
        block6 = medium1[3][6] + medium1[3][7] + medium1[3][8] + medium1[4][6] + medium1[4][7] + medium1[4][8] + medium1[5][6] + medium1[5][7] + medium1[5][8];
        block7 = medium1[6][0] + medium1[6][1] + medium1[6][2] + medium1[7][0] + medium1[7][1] + medium1[7][2] + medium1[8][0] + medium1[8][1] + medium1[8][2];
        block8 = medium1[6][3] + medium1[6][4] + medium1[6][5] + medium1[7][3] + medium1[7][4] + medium1[7][5] + medium1[8][3] + medium1[8][4] + medium1[8][5];
        block9 = medium1[6][6] + medium1[6][7] + medium1[6][8] + medium1[7][6] + medium1[7][7] + medium1[7][8] + medium1[8][6] + medium1[8][7] + medium1[8][8];

        rowTotal = row1 + row2 + row3 + row4 + row5 + row6 + row7 + row8 + row9;
        columnTotal = column1 + column2 + column3 + column4 + column5 + column6 + column7 + column8 + column9;
        blockTotal = block1 + block2 + block3 + block4 + block5 + block6 + block7 + block8 + block9;

        if(rowTotal==4293 && columnTotal==4293 && blockTotal==4293)
            printf("\n\n\n\t\t\tYou Win!!\n\n\n");
        else
            printf("\n\n\n\t\t\tYou Lost :(\n\n\n");
    }


void mediumworl2()
    {
        int row1, row2, row3, row4, row5, row6, row7, row8, row9, rowTotal;
        int column1, column2, column3, column4, column5, column6, column7, column8, column9, columnTotal;
        int block1, block2, block3, block4, block5, block6, block7, block8, block9, blockTotal;

        row1 = medium2[0][0] + medium2[0][1] + medium2[0][2] + medium2[0][3] + medium2[0][4] + medium2[0][5] + medium2[0][6] + medium2[0][7] + medium2[0][8];
        row2 = medium2[1][0] + medium2[1][1] + medium2[1][2] + medium2[1][3] + medium2[1][4] + medium2[1][5] + medium2[1][6] + medium2[1][7] + medium2[1][8];
        row3 = medium2[2][0] + medium2[2][1] + medium2[2][2] + medium2[2][3] + medium2[2][4] + medium2[2][5] + medium2[2][6] + medium2[2][7] + medium2[2][8];
        row4 = medium2[3][0] + medium2[3][1] + medium2[3][2] + medium2[3][3] + medium2[3][4] + medium2[3][5] + medium2[3][6] + medium2[3][7] + medium2[3][8];
        row5 = medium2[4][0] + medium2[4][1] + medium2[4][2] + medium2[4][3] + medium2[4][4] + medium2[4][5] + medium2[4][6] + medium2[4][7] + medium2[4][8];
        row6 = medium2[5][0] + medium2[5][1] + medium2[5][2] + medium2[5][3] + medium2[5][4] + medium2[5][5] + medium2[5][6] + medium2[5][7] + medium2[5][8];
        row7 = medium2[6][0] + medium2[6][1] + medium2[6][2] + medium2[6][3] + medium2[6][4] + medium2[6][5] + medium2[6][6] + medium2[6][7] + medium2[6][8];
        row8 = medium2[7][0] + medium2[7][1] + medium2[7][2] + medium2[7][3] + medium2[7][4] + medium2[7][5] + medium2[7][6] + medium2[7][7] + medium2[7][8];
        row9 = medium2[8][0] + medium2[8][1] + medium2[8][2] + medium2[8][3] + medium2[8][4] + medium2[8][5] + medium2[8][6] + medium2[8][7] + medium2[8][8];

        column1 = medium2[0][0] + medium2[1][0] + medium2[2][0] + medium2[3][0] + medium2[4][0] + medium2[5][0] + medium2[6][0] + medium2[7][0] + medium2[8][0];
        column2 = medium2[0][1] + medium2[1][1] + medium2[2][1] + medium2[3][1] + medium2[4][1] + medium2[5][1] + medium2[6][1] + medium2[7][1] + medium2[8][1];
        column3 = medium2[0][2] + medium2[1][2] + medium2[2][2] + medium2[3][2] + medium2[4][2] + medium2[5][2] + medium2[6][2] + medium2[7][2] + medium2[8][2];
        column4 = medium2[0][3] + medium2[1][3] + medium2[2][3] + medium2[3][3] + medium2[4][3] + medium2[5][3] + medium2[6][3] + medium2[7][3] + medium2[8][3];
        column5 = medium2[0][4] + medium2[1][4] + medium2[2][4] + medium2[3][4] + medium2[4][4] + medium2[5][4] + medium2[6][4] + medium2[7][4] + medium2[8][4];
        column6 = medium2[0][5] + medium2[1][5] + medium2[2][5] + medium2[3][5] + medium2[4][5] + medium2[5][5] + medium2[6][5] + medium2[7][5] + medium2[8][5];
        column7 = medium2[0][6] + medium2[1][6] + medium2[2][6] + medium2[3][6] + medium2[4][6] + medium2[5][6] + medium2[6][6] + medium2[7][6] + medium2[8][6];
        column8 = medium2[0][7] + medium2[1][7] + medium2[2][7] + medium2[3][7] + medium2[4][7] + medium2[5][7] + medium2[6][7] + medium2[7][7] + medium2[8][7];
        column9 = medium2[0][8] + medium2[1][8] + medium2[2][8] + medium2[3][8] + medium2[4][8] + medium2[5][8] + medium2[6][8] + medium2[7][8] + medium2[8][8];

        block1 = medium2[0][0] + medium2[0][1] + medium2[0][2] + medium2[1][0] + medium2[1][1] + medium2[1][2] + medium2[2][0] + medium2[2][1] + medium2[2][2];
        block2 = medium2[0][3] + medium2[0][4] + medium2[0][5] + medium2[1][3] + medium2[1][4] + medium2[1][5] + medium2[2][3] + medium2[2][4] + medium2[2][5];
        block3 = medium2[0][6] + medium2[0][7] + medium2[0][8] + medium2[1][6] + medium2[1][7] + medium2[1][8] + medium2[2][6] + medium2[2][7] + medium2[2][8];
        block4 = medium2[3][0] + medium2[3][1] + medium2[3][2] + medium2[4][0] + medium2[4][1] + medium2[4][2] + medium2[5][0] + medium2[5][1] + medium2[5][2];
        block5 = medium2[3][3] + medium2[3][4] + medium2[3][5] + medium2[4][3] + medium2[4][4] + medium2[4][5] + medium2[5][3] + medium2[5][4] + medium2[5][5];
        block6 = medium2[3][6] + medium2[3][7] + medium2[3][8] + medium2[4][6] + medium2[4][7] + medium2[4][8] + medium2[5][6] + medium2[5][7] + medium2[5][8];
        block7 = medium2[6][0] + medium2[6][1] + medium2[6][2] + medium2[7][0] + medium2[7][1] + medium2[7][2] + medium2[8][0] + medium2[8][1] + medium2[8][2];
        block8 = medium2[6][3] + medium2[6][4] + medium2[6][5] + medium2[7][3] + medium2[7][4] + medium2[7][5] + medium2[8][3] + medium2[8][4] + medium2[8][5];
        block9 = medium2[6][6] + medium2[6][7] + medium2[6][8] + medium2[7][6] + medium2[7][7] + medium2[7][8] + medium2[8][6] + medium2[8][7] + medium2[8][8];

        rowTotal = row1 + row2 + row3 + row4 + row5 + row6 + row7 + row8 + row9;
        columnTotal = column1 + column2 + column3 + column4 + column5 + column6 + column7 + column8 + column9;
        blockTotal = block1 + block2 + block3 + block4 + block5 + block6 + block7 + block8 + block9;

        if(rowTotal==4293 && columnTotal==4293 && blockTotal==4293)
            printf("\n\n\n\t\t\tYou Win!!\n\n\n");
        else
            printf("\n\n\n\t\t\tYou Lost :(\n\n\n");
    }



void mediumworl3()
    {
        int row1, row2, row3, row4, row5, row6, row7, row8, row9, rowTotal;
        int column1, column2, column3, column4, column5, column6, column7, column8, column9, columnTotal;
        int block1, block2, block3, block4, block5, block6, block7, block8, block9, blockTotal;

        row1 = medium3[0][0] + medium3[0][1] + medium3[0][2] + medium3[0][3] + medium3[0][4] + medium3[0][5] + medium3[0][6] + medium3[0][7] + medium3[0][8];
        row2 = medium3[1][0] + medium3[1][1] + medium3[1][2] + medium3[1][3] + medium3[1][4] + medium3[1][5] + medium3[1][6] + medium3[1][7] + medium3[1][8];
        row3 = medium3[2][0] + medium3[2][1] + medium3[2][2] + medium3[2][3] + medium3[2][4] + medium3[2][5] + medium3[2][6] + medium3[2][7] + medium3[2][8];
        row4 = medium3[3][0] + medium3[3][1] + medium3[3][2] + medium3[3][3] + medium3[3][4] + medium3[3][5] + medium3[3][6] + medium3[3][7] + medium3[3][8];
        row5 = medium3[4][0] + medium3[4][1] + medium3[4][2] + medium3[4][3] + medium3[4][4] + medium3[4][5] + medium3[4][6] + medium3[4][7] + medium3[4][8];
        row6 = medium3[5][0] + medium3[5][1] + medium3[5][2] + medium3[5][3] + medium3[5][4] + medium3[5][5] + medium3[5][6] + medium3[5][7] + medium3[5][8];
        row7 = medium3[6][0] + medium3[6][1] + medium3[6][2] + medium3[6][3] + medium3[6][4] + medium3[6][5] + medium3[6][6] + medium3[6][7] + medium3[6][8];
        row8 = medium3[7][0] + medium3[7][1] + medium3[7][2] + medium3[7][3] + medium3[7][4] + medium3[7][5] + medium3[7][6] + medium3[7][7] + medium3[7][8];
        row9 = medium3[8][0] + medium3[8][1] + medium3[8][2] + medium3[8][3] + medium3[8][4] + medium3[8][5] + medium3[8][6] + medium3[8][7] + medium3[8][8];

        column1 = medium3[0][0] + medium3[1][0] + medium3[2][0] + medium3[3][0] + medium3[4][0] + medium3[5][0] + medium3[6][0] + medium3[7][0] + medium3[8][0];
        column2 = medium3[0][1] + medium3[1][1] + medium3[2][1] + medium3[3][1] + medium3[4][1] + medium3[5][1] + medium3[6][1] + medium3[7][1] + medium3[8][1];
        column3 = medium3[0][2] + medium3[1][2] + medium3[2][2] + medium3[3][2] + medium3[4][2] + medium3[5][2] + medium3[6][2] + medium3[7][2] + medium3[8][2];
        column4 = medium3[0][3] + medium3[1][3] + medium3[2][3] + medium3[3][3] + medium3[4][3] + medium3[5][3] + medium3[6][3] + medium3[7][3] + medium3[8][3];
        column5 = medium3[0][4] + medium3[1][4] + medium3[2][4] + medium3[3][4] + medium3[4][4] + medium3[5][4] + medium3[6][4] + medium3[7][4] + medium3[8][4];
        column6 = medium3[0][5] + medium3[1][5] + medium3[2][5] + medium3[3][5] + medium3[4][5] + medium3[5][5] + medium3[6][5] + medium3[7][5] + medium3[8][5];
        column7 = medium3[0][6] + medium3[1][6] + medium3[2][6] + medium3[3][6] + medium3[4][6] + medium3[5][6] + medium3[6][6] + medium3[7][6] + medium3[8][6];
        column8 = medium3[0][7] + medium3[1][7] + medium3[2][7] + medium3[3][7] + medium3[4][7] + medium3[5][7] + medium3[6][7] + medium3[7][7] + medium3[8][7];
        column9 = medium3[0][8] + medium3[1][8] + medium3[2][8] + medium3[3][8] + medium3[4][8] + medium3[5][8] + medium3[6][8] + medium3[7][8] + medium3[8][8];

        block1 = medium3[0][0] + medium3[0][1] + medium3[0][2] + medium3[1][0] + medium3[1][1] + medium3[1][2] + medium3[2][0] + medium3[2][1] + medium3[2][2];
        block2 = medium3[0][3] + medium3[0][4] + medium3[0][5] + medium3[1][3] + medium3[1][4] + medium3[1][5] + medium3[2][3] + medium3[2][4] + medium3[2][5];
        block3 = medium3[0][6] + medium3[0][7] + medium3[0][8] + medium3[1][6] + medium3[1][7] + medium3[1][8] + medium3[2][6] + medium3[2][7] + medium3[2][8];
        block4 = medium3[3][0] + medium3[3][1] + medium3[3][2] + medium3[4][0] + medium3[4][1] + medium3[4][2] + medium3[5][0] + medium3[5][1] + medium3[5][2];
        block5 = medium3[3][3] + medium3[3][4] + medium3[3][5] + medium3[4][3] + medium3[4][4] + medium3[4][5] + medium3[5][3] + medium3[5][4] + medium3[5][5];
        block6 = medium3[3][6] + medium3[3][7] + medium3[3][8] + medium3[4][6] + medium3[4][7] + medium3[4][8] + medium3[5][6] + medium3[5][7] + medium3[5][8];
        block7 = medium3[6][0] + medium3[6][1] + medium3[6][2] + medium3[7][0] + medium3[7][1] + medium3[7][2] + medium3[8][0] + medium3[8][1] + medium3[8][2];
        block8 = medium3[6][3] + medium3[6][4] + medium3[6][5] + medium3[7][3] + medium3[7][4] + medium3[7][5] + medium3[8][3] + medium3[8][4] + medium3[8][5];
        block9 = medium3[6][6] + medium3[6][7] + medium3[6][8] + medium3[7][6] + medium3[7][7] + medium3[7][8] + medium3[8][6] + medium3[8][7] + medium3[8][8];

        rowTotal = row1 + row2 + row3 + row4 + row5 + row6 + row7 + row8 + row9;
        columnTotal = column1 + column2 + column3 + column4 + column5 + column6 + column7 + column8 + column9;
        blockTotal = block1 + block2 + block3 + block4 + block5 + block6 + block7 + block8 + block9;

        if(rowTotal==4293 && columnTotal==4293 && blockTotal==4293)
            printf("\n\n\n\t\t\tYou Win!!\n\n\n");
        else
            printf("\n\n\n\t\t\tYou Lost :(\n\n\n");
    }


void mediumworl4()
    {
        int row1, row2, row3, row4, row5, row6, row7, row8, row9, rowTotal;
        int column1, column2, column3, column4, column5, column6, column7, column8, column9, columnTotal;
        int block1, block2, block3, block4, block5, block6, block7, block8, block9, blockTotal;

        row1 = medium4[0][0] + medium4[0][1] + medium4[0][2] + medium4[0][3] + medium4[0][4] + medium4[0][5] + medium4[0][6] + medium4[0][7] + medium4[0][8];
        row2 = medium4[1][0] + medium4[1][1] + medium4[1][2] + medium4[1][3] + medium4[1][4] + medium4[1][5] + medium4[1][6] + medium4[1][7] + medium4[1][8];
        row3 = medium4[2][0] + medium4[2][1] + medium4[2][2] + medium4[2][3] + medium4[2][4] + medium4[2][5] + medium4[2][6] + medium4[2][7] + medium4[2][8];
        row4 = medium4[3][0] + medium4[3][1] + medium4[3][2] + medium4[3][3] + medium4[3][4] + medium4[3][5] + medium4[3][6] + medium4[3][7] + medium4[3][8];
        row5 = medium4[4][0] + medium4[4][1] + medium4[4][2] + medium4[4][3] + medium4[4][4] + medium4[4][5] + medium4[4][6] + medium4[4][7] + medium4[4][8];
        row6 = medium4[5][0] + medium4[5][1] + medium4[5][2] + medium4[5][3] + medium4[5][4] + medium4[5][5] + medium4[5][6] + medium4[5][7] + medium4[5][8];
        row7 = medium4[6][0] + medium4[6][1] + medium4[6][2] + medium4[6][3] + medium4[6][4] + medium4[6][5] + medium4[6][6] + medium4[6][7] + medium4[6][8];
        row8 = medium4[7][0] + medium4[7][1] + medium4[7][2] + medium4[7][3] + medium4[7][4] + medium4[7][5] + medium4[7][6] + medium4[7][7] + medium4[7][8];
        row9 = medium4[8][0] + medium4[8][1] + medium4[8][2] + medium4[8][3] + medium4[8][4] + medium4[8][5] + medium4[8][6] + medium4[8][7] + medium4[8][8];

        column1 = medium4[0][0] + medium4[1][0] + medium4[2][0] + medium4[3][0] + medium4[4][0] + medium4[5][0] + medium4[6][0] + medium4[7][0] + medium4[8][0];
        column2 = medium4[0][1] + medium4[1][1] + medium4[2][1] + medium4[3][1] + medium4[4][1] + medium4[5][1] + medium4[6][1] + medium4[7][1] + medium4[8][1];
        column3 = medium4[0][2] + medium4[1][2] + medium4[2][2] + medium4[3][2] + medium4[4][2] + medium4[5][2] + medium4[6][2] + medium4[7][2] + medium4[8][2];
        column4 = medium4[0][3] + medium4[1][3] + medium4[2][3] + medium4[3][3] + medium4[4][3] + medium4[5][3] + medium4[6][3] + medium4[7][3] + medium4[8][3];
        column5 = medium4[0][4] + medium4[1][4] + medium4[2][4] + medium4[3][4] + medium4[4][4] + medium4[5][4] + medium4[6][4] + medium4[7][4] + medium4[8][4];
        column6 = medium4[0][5] + medium4[1][5] + medium4[2][5] + medium4[3][5] + medium4[4][5] + medium4[5][5] + medium4[6][5] + medium4[7][5] + medium4[8][5];
        column7 = medium4[0][6] + medium4[1][6] + medium4[2][6] + medium4[3][6] + medium4[4][6] + medium4[5][6] + medium4[6][6] + medium4[7][6] + medium4[8][6];
        column8 = medium4[0][7] + medium4[1][7] + medium4[2][7] + medium4[3][7] + medium4[4][7] + medium4[5][7] + medium4[6][7] + medium4[7][7] + medium4[8][7];
        column9 = medium4[0][8] + medium4[1][8] + medium4[2][8] + medium4[3][8] + medium4[4][8] + medium4[5][8] + medium4[6][8] + medium4[7][8] + medium4[8][8];

        block1 = medium4[0][0] + medium4[0][1] + medium4[0][2] + medium4[1][0] + medium4[1][1] + medium4[1][2] + medium4[2][0] + medium4[2][1] + medium4[2][2];
        block2 = medium4[0][3] + medium4[0][4] + medium4[0][5] + medium4[1][3] + medium4[1][4] + medium4[1][5] + medium4[2][3] + medium4[2][4] + medium4[2][5];
        block3 = medium4[0][6] + medium4[0][7] + medium4[0][8] + medium4[1][6] + medium4[1][7] + medium4[1][8] + medium4[2][6] + medium4[2][7] + medium4[2][8];
        block4 = medium4[3][0] + medium4[3][1] + medium4[3][2] + medium4[4][0] + medium4[4][1] + medium4[4][2] + medium4[5][0] + medium4[5][1] + medium4[5][2];
        block5 = medium4[3][3] + medium4[3][4] + medium4[3][5] + medium4[4][3] + medium4[4][4] + medium4[4][5] + medium4[5][3] + medium4[5][4] + medium4[5][5];
        block6 = medium4[3][6] + medium4[3][7] + medium4[3][8] + medium4[4][6] + medium4[4][7] + medium4[4][8] + medium4[5][6] + medium4[5][7] + medium4[5][8];
        block7 = medium4[6][0] + medium4[6][1] + medium4[6][2] + medium4[7][0] + medium4[7][1] + medium4[7][2] + medium4[8][0] + medium4[8][1] + medium4[8][2];
        block8 = medium4[6][3] + medium4[6][4] + medium4[6][5] + medium4[7][3] + medium4[7][4] + medium4[7][5] + medium4[8][3] + medium4[8][4] + medium4[8][5];
        block9 = medium4[6][6] + medium4[6][7] + medium4[6][8] + medium4[7][6] + medium4[7][7] + medium4[7][8] + medium4[8][6] + medium4[8][7] + medium4[8][8];

        rowTotal = row1 + row2 + row3 + row4 + row5 + row6 + row7 + row8 + row9;
        columnTotal = column1 + column2 + column3 + column4 + column5 + column6 + column7 + column8 + column9;
        blockTotal = block1 + block2 + block3 + block4 + block5 + block6 + block7 + block8 + block9;

        if(rowTotal==4293 && columnTotal==4293 && blockTotal==4293)
            printf("\n\n\n\t\t\tYou Win!!\n\n\n");
        else
            printf("\n\n\n\t\t\tYou Lost :(\n\n\n");
    }



void mediumworl5()
    {
        int row1, row2, row3, row4, row5, row6, row7, row8, row9, rowTotal;
        int column1, column2, column3, column4, column5, column6, column7, column8, column9, columnTotal;
        int block1, block2, block3, block4, block5, block6, block7, block8, block9, blockTotal;

        row1 = medium5[0][0] + medium5[0][1] + medium5[0][2] + medium5[0][3] + medium5[0][4] + medium5[0][5] + medium5[0][6] + medium5[0][7] + medium5[0][8];
        row2 = medium5[1][0] + medium5[1][1] + medium5[1][2] + medium5[1][3] + medium5[1][4] + medium5[1][5] + medium5[1][6] + medium5[1][7] + medium5[1][8];
        row3 = medium5[2][0] + medium5[2][1] + medium5[2][2] + medium5[2][3] + medium5[2][4] + medium5[2][5] + medium5[2][6] + medium5[2][7] + medium5[2][8];
        row4 = medium5[3][0] + medium5[3][1] + medium5[3][2] + medium5[3][3] + medium5[3][4] + medium5[3][5] + medium5[3][6] + medium5[3][7] + medium5[3][8];
        row5 = medium5[4][0] + medium5[4][1] + medium5[4][2] + medium5[4][3] + medium5[4][4] + medium5[4][5] + medium5[4][6] + medium5[4][7] + medium5[4][8];
        row6 = medium5[5][0] + medium5[5][1] + medium5[5][2] + medium5[5][3] + medium5[5][4] + medium5[5][5] + medium5[5][6] + medium5[5][7] + medium5[5][8];
        row7 = medium5[6][0] + medium5[6][1] + medium5[6][2] + medium5[6][3] + medium5[6][4] + medium5[6][5] + medium5[6][6] + medium5[6][7] + medium5[6][8];
        row8 = medium5[7][0] + medium5[7][1] + medium5[7][2] + medium5[7][3] + medium5[7][4] + medium5[7][5] + medium5[7][6] + medium5[7][7] + medium5[7][8];
        row9 = medium5[8][0] + medium5[8][1] + medium5[8][2] + medium5[8][3] + medium5[8][4] + medium5[8][5] + medium5[8][6] + medium5[8][7] + medium5[8][8];

        column1 = medium5[0][0] + medium5[1][0] + medium5[2][0] + medium5[3][0] + medium5[4][0] + medium5[5][0] + medium5[6][0] + medium5[7][0] + medium5[8][0];
        column2 = medium5[0][1] + medium5[1][1] + medium5[2][1] + medium5[3][1] + medium5[4][1] + medium5[5][1] + medium5[6][1] + medium5[7][1] + medium5[8][1];
        column3 = medium5[0][2] + medium5[1][2] + medium5[2][2] + medium5[3][2] + medium5[4][2] + medium5[5][2] + medium5[6][2] + medium5[7][2] + medium5[8][2];
        column4 = medium5[0][3] + medium5[1][3] + medium5[2][3] + medium5[3][3] + medium5[4][3] + medium5[5][3] + medium5[6][3] + medium5[7][3] + medium5[8][3];
        column5 = medium5[0][4] + medium5[1][4] + medium5[2][4] + medium5[3][4] + medium5[4][4] + medium5[5][4] + medium5[6][4] + medium5[7][4] + medium5[8][4];
        column6 = medium5[0][5] + medium5[1][5] + medium5[2][5] + medium5[3][5] + medium5[4][5] + medium5[5][5] + medium5[6][5] + medium5[7][5] + medium5[8][5];
        column7 = medium5[0][6] + medium5[1][6] + medium5[2][6] + medium5[3][6] + medium5[4][6] + medium5[5][6] + medium5[6][6] + medium5[7][6] + medium5[8][6];
        column8 = medium5[0][7] + medium5[1][7] + medium5[2][7] + medium5[3][7] + medium5[4][7] + medium5[5][7] + medium5[6][7] + medium5[7][7] + medium5[8][7];
        column9 = medium5[0][8] + medium5[1][8] + medium5[2][8] + medium5[3][8] + medium5[4][8] + medium5[5][8] + medium5[6][8] + medium5[7][8] + medium5[8][8];

        block1 = medium5[0][0] + medium5[0][1] + medium5[0][2] + medium5[1][0] + medium5[1][1] + medium5[1][2] + medium5[2][0] + medium5[2][1] + medium5[2][2];
        block2 = medium5[0][3] + medium5[0][4] + medium5[0][5] + medium5[1][3] + medium5[1][4] + medium5[1][5] + medium5[2][3] + medium5[2][4] + medium5[2][5];
        block3 = medium5[0][6] + medium5[0][7] + medium5[0][8] + medium5[1][6] + medium5[1][7] + medium5[1][8] + medium5[2][6] + medium5[2][7] + medium5[2][8];
        block4 = medium5[3][0] + medium5[3][1] + medium5[3][2] + medium5[4][0] + medium5[4][1] + medium5[4][2] + medium5[5][0] + medium5[5][1] + medium5[5][2];
        block5 = medium5[3][3] + medium5[3][4] + medium5[3][5] + medium5[4][3] + medium5[4][4] + medium5[4][5] + medium5[5][3] + medium5[5][4] + medium5[5][5];
        block6 = medium5[3][6] + medium5[3][7] + medium5[3][8] + medium5[4][6] + medium5[4][7] + medium5[4][8] + medium5[5][6] + medium5[5][7] + medium5[5][8];
        block7 = medium5[6][0] + medium5[6][1] + medium5[6][2] + medium5[7][0] + medium5[7][1] + medium5[7][2] + medium5[8][0] + medium5[8][1] + medium5[8][2];
        block8 = medium5[6][3] + medium5[6][4] + medium5[6][5] + medium5[7][3] + medium5[7][4] + medium5[7][5] + medium5[8][3] + medium5[8][4] + medium5[8][5];
        block9 = medium5[6][6] + medium5[6][7] + medium5[6][8] + medium5[7][6] + medium5[7][7] + medium5[7][8] + medium5[8][6] + medium5[8][7] + medium5[8][8];

        rowTotal = row1 + row2 + row3 + row4 + row5 + row6 + row7 + row8 + row9;
        columnTotal = column1 + column2 + column3 + column4 + column5 + column6 + column7 + column8 + column9;
        blockTotal = block1 + block2 + block3 + block4 + block5 + block6 + block7 + block8 + block9;

        if(rowTotal==4293 && columnTotal==4293 && blockTotal==4293)
            printf("\n\n\n\t\t\tYou Win!!\n\n\n");
        else
            printf("\n\n\n\t\t\tYou Lost :(\n\n\n");
    }


void hardworl1()
    {
        int row1, row2, row3, row4, row5, row6, row7, row8, row9, rowTotal;
        int column1, column2, column3, column4, column5, column6, column7, column8, column9, columnTotal;
        int block1, block2, block3, block4, block5, block6, block7, block8, block9, blockTotal;

        row1 = hard1[0][0] + hard1[0][1] + hard1[0][2] + hard1[0][3] + hard1[0][4] + hard1[0][5] + hard1[0][6] + hard1[0][7] + hard1[0][8];
        row2 = hard1[1][0] + hard1[1][1] + hard1[1][2] + hard1[1][3] + hard1[1][4] + hard1[1][5] + hard1[1][6] + hard1[1][7] + hard1[1][8];
        row3 = hard1[2][0] + hard1[2][1] + hard1[2][2] + hard1[2][3] + hard1[2][4] + hard1[2][5] + hard1[2][6] + hard1[2][7] + hard1[2][8];
        row4 = hard1[3][0] + hard1[3][1] + hard1[3][2] + hard1[3][3] + hard1[3][4] + hard1[3][5] + hard1[3][6] + hard1[3][7] + hard1[3][8];
        row5 = hard1[4][0] + hard1[4][1] + hard1[4][2] + hard1[4][3] + hard1[4][4] + hard1[4][5] + hard1[4][6] + hard1[4][7] + hard1[4][8];
        row6 = hard1[5][0] + hard1[5][1] + hard1[5][2] + hard1[5][3] + hard1[5][4] + hard1[5][5] + hard1[5][6] + hard1[5][7] + hard1[5][8];
        row7 = hard1[6][0] + hard1[6][1] + hard1[6][2] + hard1[6][3] + hard1[6][4] + hard1[6][5] + hard1[6][6] + hard1[6][7] + hard1[6][8];
        row8 = hard1[7][0] + hard1[7][1] + hard1[7][2] + hard1[7][3] + hard1[7][4] + hard1[7][5] + hard1[7][6] + hard1[7][7] + hard1[7][8];
        row9 = hard1[8][0] + hard1[8][1] + hard1[8][2] + hard1[8][3] + hard1[8][4] + hard1[8][5] + hard1[8][6] + hard1[8][7] + hard1[8][8];

        column1 = hard1[0][0] + hard1[1][0] + hard1[2][0] + hard1[3][0] + hard1[4][0] + hard1[5][0] + hard1[6][0] + hard1[7][0] + hard1[8][0];
        column2 = hard1[0][1] + hard1[1][1] + hard1[2][1] + hard1[3][1] + hard1[4][1] + hard1[5][1] + hard1[6][1] + hard1[7][1] + hard1[8][1];
        column3 = hard1[0][2] + hard1[1][2] + hard1[2][2] + hard1[3][2] + hard1[4][2] + hard1[5][2] + hard1[6][2] + hard1[7][2] + hard1[8][2];
        column4 = hard1[0][3] + hard1[1][3] + hard1[2][3] + hard1[3][3] + hard1[4][3] + hard1[5][3] + hard1[6][3] + hard1[7][3] + hard1[8][3];
        column5 = hard1[0][4] + hard1[1][4] + hard1[2][4] + hard1[3][4] + hard1[4][4] + hard1[5][4] + hard1[6][4] + hard1[7][4] + hard1[8][4];
        column6 = hard1[0][5] + hard1[1][5] + hard1[2][5] + hard1[3][5] + hard1[4][5] + hard1[5][5] + hard1[6][5] + hard1[7][5] + hard1[8][5];
        column7 = hard1[0][6] + hard1[1][6] + hard1[2][6] + hard1[3][6] + hard1[4][6] + hard1[5][6] + hard1[6][6] + hard1[7][6] + hard1[8][6];
        column8 = hard1[0][7] + hard1[1][7] + hard1[2][7] + hard1[3][7] + hard1[4][7] + hard1[5][7] + hard1[6][7] + hard1[7][7] + hard1[8][7];
        column9 = hard1[0][8] + hard1[1][8] + hard1[2][8] + hard1[3][8] + hard1[4][8] + hard1[5][8] + hard1[6][8] + hard1[7][8] + hard1[8][8];

        block1 = hard1[0][0] + hard1[0][1] + hard1[0][2] + hard1[1][0] + hard1[1][1] + hard1[1][2] + hard1[2][0] + hard1[2][1] + hard1[2][2];
        block2 = hard1[0][3] + hard1[0][4] + hard1[0][5] + hard1[1][3] + hard1[1][4] + hard1[1][5] + hard1[2][3] + hard1[2][4] + hard1[2][5];
        block3 = hard1[0][6] + hard1[0][7] + hard1[0][8] + hard1[1][6] + hard1[1][7] + hard1[1][8] + hard1[2][6] + hard1[2][7] + hard1[2][8];
        block4 = hard1[3][0] + hard1[3][1] + hard1[3][2] + hard1[4][0] + hard1[4][1] + hard1[4][2] + hard1[5][0] + hard1[5][1] + hard1[5][2];
        block5 = hard1[3][3] + hard1[3][4] + hard1[3][5] + hard1[4][3] + hard1[4][4] + hard1[4][5] + hard1[5][3] + hard1[5][4] + hard1[5][5];
        block6 = hard1[3][6] + hard1[3][7] + hard1[3][8] + hard1[4][6] + hard1[4][7] + hard1[4][8] + hard1[5][6] + hard1[5][7] + hard1[5][8];
        block7 = hard1[6][0] + hard1[6][1] + hard1[6][2] + hard1[7][0] + hard1[7][1] + hard1[7][2] + hard1[8][0] + hard1[8][1] + hard1[8][2];
        block8 = hard1[6][3] + hard1[6][4] + hard1[6][5] + hard1[7][3] + hard1[7][4] + hard1[7][5] + hard1[8][3] + hard1[8][4] + hard1[8][5];
        block9 = hard1[6][6] + hard1[6][7] + hard1[6][8] + hard1[7][6] + hard1[7][7] + hard1[7][8] + hard1[8][6] + hard1[8][7] + hard1[8][8];

        rowTotal = row1 + row2 + row3 + row4 + row5 + row6 + row7 + row8 + row9;
        columnTotal = column1 + column2 + column3 + column4 + column5 + column6 + column7 + column8 + column9;
        blockTotal = block1 + block2 + block3 + block4 + block5 + block6 + block7 + block8 + block9;

        if(rowTotal==4293 && columnTotal==4293 && blockTotal==4293)
            printf("\n\n\n\t\t\tYou Win!!\n\n\n");
        else
            printf("\n\n\n\t\t\tYou Lost :(\n\n\n");
    }



void hardworl2()
    {
        int row1, row2, row3, row4, row5, row6, row7, row8, row9, rowTotal;
        int column1, column2, column3, column4, column5, column6, column7, column8, column9, columnTotal;
        int block1, block2, block3, block4, block5, block6, block7, block8, block9, blockTotal;

        row1 = hard2[0][0] + hard2[0][1] + hard2[0][2] + hard2[0][3] + hard2[0][4] + hard2[0][5] + hard2[0][6] + hard2[0][7] + hard2[0][8];
        row2 = hard2[1][0] + hard2[1][1] + hard2[1][2] + hard2[1][3] + hard2[1][4] + hard2[1][5] + hard2[1][6] + hard2[1][7] + hard2[1][8];
        row3 = hard2[2][0] + hard2[2][1] + hard2[2][2] + hard2[2][3] + hard2[2][4] + hard2[2][5] + hard2[2][6] + hard2[2][7] + hard2[2][8];
        row4 = hard2[3][0] + hard2[3][1] + hard2[3][2] + hard2[3][3] + hard2[3][4] + hard2[3][5] + hard2[3][6] + hard2[3][7] + hard2[3][8];
        row5 = hard2[4][0] + hard2[4][1] + hard2[4][2] + hard2[4][3] + hard2[4][4] + hard2[4][5] + hard2[4][6] + hard2[4][7] + hard2[4][8];
        row6 = hard2[5][0] + hard2[5][1] + hard2[5][2] + hard2[5][3] + hard2[5][4] + hard2[5][5] + hard2[5][6] + hard2[5][7] + hard2[5][8];
        row7 = hard2[6][0] + hard2[6][1] + hard2[6][2] + hard2[6][3] + hard2[6][4] + hard2[6][5] + hard2[6][6] + hard2[6][7] + hard2[6][8];
        row8 = hard2[7][0] + hard2[7][1] + hard2[7][2] + hard2[7][3] + hard2[7][4] + hard2[7][5] + hard2[7][6] + hard2[7][7] + hard2[7][8];
        row9 = hard2[8][0] + hard2[8][1] + hard2[8][2] + hard2[8][3] + hard2[8][4] + hard2[8][5] + hard2[8][6] + hard2[8][7] + hard2[8][8];

        column1 = hard2[0][0] + hard2[1][0] + hard2[2][0] + hard2[3][0] + hard2[4][0] + hard2[5][0] + hard2[6][0] + hard2[7][0] + hard2[8][0];
        column2 = hard2[0][1] + hard2[1][1] + hard2[2][1] + hard2[3][1] + hard2[4][1] + hard2[5][1] + hard2[6][1] + hard2[7][1] + hard2[8][1];
        column3 = hard2[0][2] + hard2[1][2] + hard2[2][2] + hard2[3][2] + hard2[4][2] + hard2[5][2] + hard2[6][2] + hard2[7][2] + hard2[8][2];
        column4 = hard2[0][3] + hard2[1][3] + hard2[2][3] + hard2[3][3] + hard2[4][3] + hard2[5][3] + hard2[6][3] + hard2[7][3] + hard2[8][3];
        column5 = hard2[0][4] + hard2[1][4] + hard2[2][4] + hard2[3][4] + hard2[4][4] + hard2[5][4] + hard2[6][4] + hard2[7][4] + hard2[8][4];
        column6 = hard2[0][5] + hard2[1][5] + hard2[2][5] + hard2[3][5] + hard2[4][5] + hard2[5][5] + hard2[6][5] + hard2[7][5] + hard2[8][5];
        column7 = hard2[0][6] + hard2[1][6] + hard2[2][6] + hard2[3][6] + hard2[4][6] + hard2[5][6] + hard2[6][6] + hard2[7][6] + hard2[8][6];
        column8 = hard2[0][7] + hard2[1][7] + hard2[2][7] + hard2[3][7] + hard2[4][7] + hard2[5][7] + hard2[6][7] + hard2[7][7] + hard2[8][7];
        column9 = hard2[0][8] + hard2[1][8] + hard2[2][8] + hard2[3][8] + hard2[4][8] + hard2[5][8] + hard2[6][8] + hard2[7][8] + hard2[8][8];

        block1 = hard2[0][0] + hard2[0][1] + hard2[0][2] + hard2[1][0] + hard2[1][1] + hard2[1][2] + hard2[2][0] + hard2[2][1] + hard2[2][2];
        block2 = hard2[0][3] + hard2[0][4] + hard2[0][5] + hard2[1][3] + hard2[1][4] + hard2[1][5] + hard2[2][3] + hard2[2][4] + hard2[2][5];
        block3 = hard2[0][6] + hard2[0][7] + hard2[0][8] + hard2[1][6] + hard2[1][7] + hard2[1][8] + hard2[2][6] + hard2[2][7] + hard2[2][8];
        block4 = hard2[3][0] + hard2[3][1] + hard2[3][2] + hard2[4][0] + hard2[4][1] + hard2[4][2] + hard2[5][0] + hard2[5][1] + hard2[5][2];
        block5 = hard2[3][3] + hard2[3][4] + hard2[3][5] + hard2[4][3] + hard2[4][4] + hard2[4][5] + hard2[5][3] + hard2[5][4] + hard2[5][5];
        block6 = hard2[3][6] + hard2[3][7] + hard2[3][8] + hard2[4][6] + hard2[4][7] + hard2[4][8] + hard2[5][6] + hard2[5][7] + hard2[5][8];
        block7 = hard2[6][0] + hard2[6][1] + hard2[6][2] + hard2[7][0] + hard2[7][1] + hard2[7][2] + hard2[8][0] + hard2[8][1] + hard2[8][2];
        block8 = hard2[6][3] + hard2[6][4] + hard2[6][5] + hard2[7][3] + hard2[7][4] + hard2[7][5] + hard2[8][3] + hard2[8][4] + hard2[8][5];
        block9 = hard2[6][6] + hard2[6][7] + hard2[6][8] + hard2[7][6] + hard2[7][7] + hard2[7][8] + hard2[8][6] + hard2[8][7] + hard2[8][8];

        rowTotal = row1 + row2 + row3 + row4 + row5 + row6 + row7 + row8 + row9;
        columnTotal = column1 + column2 + column3 + column4 + column5 + column6 + column7 + column8 + column9;
        blockTotal = block1 + block2 + block3 + block4 + block5 + block6 + block7 + block8 + block9;

        if(rowTotal==4293 && columnTotal==4293 && blockTotal==4293)
            printf("\n\n\n\t\t\tYou Win!!\n\n\n");
        else
            printf("\n\n\n\t\t\tYou Lost :(\n\n\n");
    }



void hardworl3()
    {
        int row1, row2, row3, row4, row5, row6, row7, row8, row9, rowTotal;
        int column1, column2, column3, column4, column5, column6, column7, column8, column9, columnTotal;
        int block1, block2, block3, block4, block5, block6, block7, block8, block9, blockTotal;

        row1 = hard3[0][0] + hard3[0][1] + hard3[0][2] + hard3[0][3] + hard3[0][4] + hard3[0][5] + hard3[0][6] + hard3[0][7] + hard3[0][8];
        row2 = hard3[1][0] + hard3[1][1] + hard3[1][2] + hard3[1][3] + hard3[1][4] + hard3[1][5] + hard3[1][6] + hard3[1][7] + hard3[1][8];
        row3 = hard3[2][0] + hard3[2][1] + hard3[2][2] + hard3[2][3] + hard3[2][4] + hard3[2][5] + hard3[2][6] + hard3[2][7] + hard3[2][8];
        row4 = hard3[3][0] + hard3[3][1] + hard3[3][2] + hard3[3][3] + hard3[3][4] + hard3[3][5] + hard3[3][6] + hard3[3][7] + hard3[3][8];
        row5 = hard3[4][0] + hard3[4][1] + hard3[4][2] + hard3[4][3] + hard3[4][4] + hard3[4][5] + hard3[4][6] + hard3[4][7] + hard3[4][8];
        row6 = hard3[5][0] + hard3[5][1] + hard3[5][2] + hard3[5][3] + hard3[5][4] + hard3[5][5] + hard3[5][6] + hard3[5][7] + hard3[5][8];
        row7 = hard3[6][0] + hard3[6][1] + hard3[6][2] + hard3[6][3] + hard3[6][4] + hard3[6][5] + hard3[6][6] + hard3[6][7] + hard3[6][8];
        row8 = hard3[7][0] + hard3[7][1] + hard3[7][2] + hard3[7][3] + hard3[7][4] + hard3[7][5] + hard3[7][6] + hard3[7][7] + hard3[7][8];
        row9 = hard3[8][0] + hard3[8][1] + hard3[8][2] + hard3[8][3] + hard3[8][4] + hard3[8][5] + hard3[8][6] + hard3[8][7] + hard3[8][8];

        column1 = hard3[0][0] + hard3[1][0] + hard3[2][0] + hard3[3][0] + hard3[4][0] + hard3[5][0] + hard3[6][0] + hard3[7][0] + hard3[8][0];
        column2 = hard3[0][1] + hard3[1][1] + hard3[2][1] + hard3[3][1] + hard3[4][1] + hard3[5][1] + hard3[6][1] + hard3[7][1] + hard3[8][1];
        column3 = hard3[0][2] + hard3[1][2] + hard3[2][2] + hard3[3][2] + hard3[4][2] + hard3[5][2] + hard3[6][2] + hard3[7][2] + hard3[8][2];
        column4 = hard3[0][3] + hard3[1][3] + hard3[2][3] + hard3[3][3] + hard3[4][3] + hard3[5][3] + hard3[6][3] + hard3[7][3] + hard3[8][3];
        column5 = hard3[0][4] + hard3[1][4] + hard3[2][4] + hard3[3][4] + hard3[4][4] + hard3[5][4] + hard3[6][4] + hard3[7][4] + hard3[8][4];
        column6 = hard3[0][5] + hard3[1][5] + hard3[2][5] + hard3[3][5] + hard3[4][5] + hard3[5][5] + hard3[6][5] + hard3[7][5] + hard3[8][5];
        column7 = hard3[0][6] + hard3[1][6] + hard3[2][6] + hard3[3][6] + hard3[4][6] + hard3[5][6] + hard3[6][6] + hard3[7][6] + hard3[8][6];
        column8 = hard3[0][7] + hard3[1][7] + hard3[2][7] + hard3[3][7] + hard3[4][7] + hard3[5][7] + hard3[6][7] + hard3[7][7] + hard3[8][7];
        column9 = hard3[0][8] + hard3[1][8] + hard3[2][8] + hard3[3][8] + hard3[4][8] + hard3[5][8] + hard3[6][8] + hard3[7][8] + hard3[8][8];

        block1 = hard3[0][0] + hard3[0][1] + hard3[0][2] + hard3[1][0] + hard3[1][1] + hard3[1][2] + hard3[2][0] + hard3[2][1] + hard3[2][2];
        block2 = hard3[0][3] + hard3[0][4] + hard3[0][5] + hard3[1][3] + hard3[1][4] + hard3[1][5] + hard3[2][3] + hard3[2][4] + hard3[2][5];
        block3 = hard3[0][6] + hard3[0][7] + hard3[0][8] + hard3[1][6] + hard3[1][7] + hard3[1][8] + hard3[2][6] + hard3[2][7] + hard3[2][8];
        block4 = hard3[3][0] + hard3[3][1] + hard3[3][2] + hard3[4][0] + hard3[4][1] + hard3[4][2] + hard3[5][0] + hard3[5][1] + hard3[5][2];
        block5 = hard3[3][3] + hard3[3][4] + hard3[3][5] + hard3[4][3] + hard3[4][4] + hard3[4][5] + hard3[5][3] + hard3[5][4] + hard3[5][5];
        block6 = hard3[3][6] + hard3[3][7] + hard3[3][8] + hard3[4][6] + hard3[4][7] + hard3[4][8] + hard3[5][6] + hard3[5][7] + hard3[5][8];
        block7 = hard3[6][0] + hard3[6][1] + hard3[6][2] + hard3[7][0] + hard3[7][1] + hard3[7][2] + hard3[8][0] + hard3[8][1] + hard3[8][2];
        block8 = hard3[6][3] + hard3[6][4] + hard3[6][5] + hard3[7][3] + hard3[7][4] + hard3[7][5] + hard3[8][3] + hard3[8][4] + hard3[8][5];
        block9 = hard3[6][6] + hard3[6][7] + hard3[6][8] + hard3[7][6] + hard3[7][7] + hard3[7][8] + hard3[8][6] + hard3[8][7] + hard3[8][8];

        rowTotal = row1 + row2 + row3 + row4 + row5 + row6 + row7 + row8 + row9;
        columnTotal = column1 + column2 + column3 + column4 + column5 + column6 + column7 + column8 + column9;
        blockTotal = block1 + block2 + block3 + block4 + block5 + block6 + block7 + block8 + block9;

        if(rowTotal==4293 && columnTotal==4293 && blockTotal==4293)
            printf("\n\n\n\t\t\tYou Win!!\n\n\n");
        else
            printf("\n\n\n\t\t\tYou Lost :(\n\n\n");
    }




void hardworl4()
    {
        int row1, row2, row3, row4, row5, row6, row7, row8, row9, rowTotal;
        int column1, column2, column3, column4, column5, column6, column7, column8, column9, columnTotal;
        int block1, block2, block3, block4, block5, block6, block7, block8, block9, blockTotal;

        row1 = hard4[0][0] + hard4[0][1] + hard4[0][2] + hard4[0][3] + hard4[0][4] + hard4[0][5] + hard4[0][6] + hard4[0][7] + hard4[0][8];
        row2 = hard4[1][0] + hard4[1][1] + hard4[1][2] + hard4[1][3] + hard4[1][4] + hard4[1][5] + hard4[1][6] + hard4[1][7] + hard4[1][8];
        row3 = hard4[2][0] + hard4[2][1] + hard4[2][2] + hard4[2][3] + hard4[2][4] + hard4[2][5] + hard4[2][6] + hard4[2][7] + hard4[2][8];
        row4 = hard4[3][0] + hard4[3][1] + hard4[3][2] + hard4[3][3] + hard4[3][4] + hard4[3][5] + hard4[3][6] + hard4[3][7] + hard4[3][8];
        row5 = hard4[4][0] + hard4[4][1] + hard4[4][2] + hard4[4][3] + hard4[4][4] + hard4[4][5] + hard4[4][6] + hard4[4][7] + hard4[4][8];
        row6 = hard4[5][0] + hard4[5][1] + hard4[5][2] + hard4[5][3] + hard4[5][4] + hard4[5][5] + hard4[5][6] + hard4[5][7] + hard4[5][8];
        row7 = hard4[6][0] + hard4[6][1] + hard4[6][2] + hard4[6][3] + hard4[6][4] + hard4[6][5] + hard4[6][6] + hard4[6][7] + hard4[6][8];
        row8 = hard4[7][0] + hard4[7][1] + hard4[7][2] + hard4[7][3] + hard4[7][4] + hard4[7][5] + hard4[7][6] + hard4[7][7] + hard4[7][8];
        row9 = hard4[8][0] + hard4[8][1] + hard4[8][2] + hard4[8][3] + hard4[8][4] + hard4[8][5] + hard4[8][6] + hard4[8][7] + hard4[8][8];

        column1 = hard4[0][0] + hard4[1][0] + hard4[2][0] + hard4[3][0] + hard4[4][0] + hard4[5][0] + hard4[6][0] + hard4[7][0] + hard4[8][0];
        column2 = hard4[0][1] + hard4[1][1] + hard4[2][1] + hard4[3][1] + hard4[4][1] + hard4[5][1] + hard4[6][1] + hard4[7][1] + hard4[8][1];
        column3 = hard4[0][2] + hard4[1][2] + hard4[2][2] + hard4[3][2] + hard4[4][2] + hard4[5][2] + hard4[6][2] + hard4[7][2] + hard4[8][2];
        column4 = hard4[0][3] + hard4[1][3] + hard4[2][3] + hard4[3][3] + hard4[4][3] + hard4[5][3] + hard4[6][3] + hard4[7][3] + hard4[8][3];
        column5 = hard4[0][4] + hard4[1][4] + hard4[2][4] + hard4[3][4] + hard4[4][4] + hard4[5][4] + hard4[6][4] + hard4[7][4] + hard4[8][4];
        column6 = hard4[0][5] + hard4[1][5] + hard4[2][5] + hard4[3][5] + hard4[4][5] + hard4[5][5] + hard4[6][5] + hard4[7][5] + hard4[8][5];
        column7 = hard4[0][6] + hard4[1][6] + hard4[2][6] + hard4[3][6] + hard4[4][6] + hard4[5][6] + hard4[6][6] + hard4[7][6] + hard4[8][6];
        column8 = hard4[0][7] + hard4[1][7] + hard4[2][7] + hard4[3][7] + hard4[4][7] + hard4[5][7] + hard4[6][7] + hard4[7][7] + hard4[8][7];
        column9 = hard4[0][8] + hard4[1][8] + hard4[2][8] + hard4[3][8] + hard4[4][8] + hard4[5][8] + hard4[6][8] + hard4[7][8] + hard4[8][8];

        block1 = hard4[0][0] + hard4[0][1] + hard4[0][2] + hard4[1][0] + hard4[1][1] + hard4[1][2] + hard4[2][0] + hard4[2][1] + hard4[2][2];
        block2 = hard4[0][3] + hard4[0][4] + hard4[0][5] + hard4[1][3] + hard4[1][4] + hard4[1][5] + hard4[2][3] + hard4[2][4] + hard4[2][5];
        block3 = hard4[0][6] + hard4[0][7] + hard4[0][8] + hard4[1][6] + hard4[1][7] + hard4[1][8] + hard4[2][6] + hard4[2][7] + hard4[2][8];
        block4 = hard4[3][0] + hard4[3][1] + hard4[3][2] + hard4[4][0] + hard4[4][1] + hard4[4][2] + hard4[5][0] + hard4[5][1] + hard4[5][2];
        block5 = hard4[3][3] + hard4[3][4] + hard4[3][5] + hard4[4][3] + hard4[4][4] + hard4[4][5] + hard4[5][3] + hard4[5][4] + hard4[5][5];
        block6 = hard4[3][6] + hard4[3][7] + hard4[3][8] + hard4[4][6] + hard4[4][7] + hard4[4][8] + hard4[5][6] + hard4[5][7] + hard4[5][8];
        block7 = hard4[6][0] + hard4[6][1] + hard4[6][2] + hard4[7][0] + hard4[7][1] + hard4[7][2] + hard4[8][0] + hard4[8][1] + hard4[8][2];
        block8 = hard4[6][3] + hard4[6][4] + hard4[6][5] + hard4[7][3] + hard4[7][4] + hard4[7][5] + hard4[8][3] + hard4[8][4] + hard4[8][5];
        block9 = hard4[6][6] + hard4[6][7] + hard4[6][8] + hard4[7][6] + hard4[7][7] + hard4[7][8] + hard4[8][6] + hard4[8][7] + hard4[8][8];

        rowTotal = row1 + row2 + row3 + row4 + row5 + row6 + row7 + row8 + row9;
        columnTotal = column1 + column2 + column3 + column4 + column5 + column6 + column7 + column8 + column9;
        blockTotal = block1 + block2 + block3 + block4 + block5 + block6 + block7 + block8 + block9;

        if(rowTotal==4293 && columnTotal==4293 && blockTotal==4293)
            printf("\n\n\n\t\t\tYou Win!!\n\n\n");
        else
            printf("\n\n\n\t\t\tYou Lost :(\n\n\n");
    }



void hardworl5()
    {
        int row1, row2, row3, row4, row5, row6, row7, row8, row9, rowTotal;
        int column1, column2, column3, column4, column5, column6, column7, column8, column9, columnTotal;
        int block1, block2, block3, block4, block5, block6, block7, block8, block9, blockTotal;

        row1 = hard5[0][0] + hard5[0][1] + hard5[0][2] + hard5[0][3] + hard5[0][4] + hard5[0][5] + hard5[0][6] + hard5[0][7] + hard5[0][8];
        row2 = hard5[1][0] + hard5[1][1] + hard5[1][2] + hard5[1][3] + hard5[1][4] + hard5[1][5] + hard5[1][6] + hard5[1][7] + hard5[1][8];
        row3 = hard5[2][0] + hard5[2][1] + hard5[2][2] + hard5[2][3] + hard5[2][4] + hard5[2][5] + hard5[2][6] + hard5[2][7] + hard5[2][8];
        row4 = hard5[3][0] + hard5[3][1] + hard5[3][2] + hard5[3][3] + hard5[3][4] + hard5[3][5] + hard5[3][6] + hard5[3][7] + hard5[3][8];
        row5 = hard5[4][0] + hard5[4][1] + hard5[4][2] + hard5[4][3] + hard5[4][4] + hard5[4][5] + hard5[4][6] + hard5[4][7] + hard5[4][8];
        row6 = hard5[5][0] + hard5[5][1] + hard5[5][2] + hard5[5][3] + hard5[5][4] + hard5[5][5] + hard5[5][6] + hard5[5][7] + hard5[5][8];
        row7 = hard5[6][0] + hard5[6][1] + hard5[6][2] + hard5[6][3] + hard5[6][4] + hard5[6][5] + hard5[6][6] + hard5[6][7] + hard5[6][8];
        row8 = hard5[7][0] + hard5[7][1] + hard5[7][2] + hard5[7][3] + hard5[7][4] + hard5[7][5] + hard5[7][6] + hard5[7][7] + hard5[7][8];
        row9 = hard5[8][0] + hard5[8][1] + hard5[8][2] + hard5[8][3] + hard5[8][4] + hard5[8][5] + hard5[8][6] + hard5[8][7] + hard5[8][8];

        column1 = hard5[0][0] + hard5[1][0] + hard5[2][0] + hard5[3][0] + hard5[4][0] + hard5[5][0] + hard5[6][0] + hard5[7][0] + hard5[8][0];
        column2 = hard5[0][1] + hard5[1][1] + hard5[2][1] + hard5[3][1] + hard5[4][1] + hard5[5][1] + hard5[6][1] + hard5[7][1] + hard5[8][1];
        column3 = hard5[0][2] + hard5[1][2] + hard5[2][2] + hard5[3][2] + hard5[4][2] + hard5[5][2] + hard5[6][2] + hard5[7][2] + hard5[8][2];
        column4 = hard5[0][3] + hard5[1][3] + hard5[2][3] + hard5[3][3] + hard5[4][3] + hard5[5][3] + hard5[6][3] + hard5[7][3] + hard5[8][3];
        column5 = hard5[0][4] + hard5[1][4] + hard5[2][4] + hard5[3][4] + hard5[4][4] + hard5[5][4] + hard5[6][4] + hard5[7][4] + hard5[8][4];
        column6 = hard5[0][5] + hard5[1][5] + hard5[2][5] + hard5[3][5] + hard5[4][5] + hard5[5][5] + hard5[6][5] + hard5[7][5] + hard5[8][5];
        column7 = hard5[0][6] + hard5[1][6] + hard5[2][6] + hard5[3][6] + hard5[4][6] + hard5[5][6] + hard5[6][6] + hard5[7][6] + hard5[8][6];
        column8 = hard5[0][7] + hard5[1][7] + hard5[2][7] + hard5[3][7] + hard5[4][7] + hard5[5][7] + hard5[6][7] + hard5[7][7] + hard5[8][7];
        column9 = hard5[0][8] + hard5[1][8] + hard5[2][8] + hard5[3][8] + hard5[4][8] + hard5[5][8] + hard5[6][8] + hard5[7][8] + hard5[8][8];

        block1 = hard5[0][0] + hard5[0][1] + hard5[0][2] + hard5[1][0] + hard5[1][1] + hard5[1][2] + hard5[2][0] + hard5[2][1] + hard5[2][2];
        block2 = hard5[0][3] + hard5[0][4] + hard5[0][5] + hard5[1][3] + hard5[1][4] + hard5[1][5] + hard5[2][3] + hard5[2][4] + hard5[2][5];
        block3 = hard5[0][6] + hard5[0][7] + hard5[0][8] + hard5[1][6] + hard5[1][7] + hard5[1][8] + hard5[2][6] + hard5[2][7] + hard5[2][8];
        block4 = hard5[3][0] + hard5[3][1] + hard5[3][2] + hard5[4][0] + hard5[4][1] + hard5[4][2] + hard5[5][0] + hard5[5][1] + hard5[5][2];
        block5 = hard5[3][3] + hard5[3][4] + hard5[3][5] + hard5[4][3] + hard5[4][4] + hard5[4][5] + hard5[5][3] + hard5[5][4] + hard5[5][5];
        block6 = hard5[3][6] + hard5[3][7] + hard5[3][8] + hard5[4][6] + hard5[4][7] + hard5[4][8] + hard5[5][6] + hard5[5][7] + hard5[5][8];
        block7 = hard5[6][0] + hard5[6][1] + hard5[6][2] + hard5[7][0] + hard5[7][1] + hard5[7][2] + hard5[8][0] + hard5[8][1] + hard5[8][2];
        block8 = hard5[6][3] + hard5[6][4] + hard5[6][5] + hard5[7][3] + hard5[7][4] + hard5[7][5] + hard5[8][3] + hard5[8][4] + hard5[8][5];
        block9 = hard5[6][6] + hard5[6][7] + hard5[6][8] + hard5[7][6] + hard5[7][7] + hard5[7][8] + hard5[8][6] + hard5[8][7] + hard5[8][8];

        rowTotal = row1 + row2 + row3 + row4 + row5 + row6 + row7 + row8 + row9;
        columnTotal = column1 + column2 + column3 + column4 + column5 + column6 + column7 + column8 + column9;
        blockTotal = block1 + block2 + block3 + block4 + block5 + block6 + block7 + block8 + block9;

        if(rowTotal==4293 && columnTotal==4293 && blockTotal==4293)
            printf("\n\n\n\t\t\tYou Win!!\n\n\n");
        else
            printf("\n\n\n\t\t\tYou Lost :(\n\n\n");
    }




void xpertworl1()
    {
        int row1, row2, row3, row4, row5, row6, row7, row8, row9, rowTotal;
        int column1, column2, column3, column4, column5, column6, column7, column8, column9, columnTotal;
        int block1, block2, block3, block4, block5, block6, block7, block8, block9, blockTotal;

        row1 = xpert1[0][0] + xpert1[0][1] + xpert1[0][2] + xpert1[0][3] + xpert1[0][4] + xpert1[0][5] + xpert1[0][6] + xpert1[0][7] + xpert1[0][8];
        row2 = xpert1[1][0] + xpert1[1][1] + xpert1[1][2] + xpert1[1][3] + xpert1[1][4] + xpert1[1][5] + xpert1[1][6] + xpert1[1][7] + xpert1[1][8];
        row3 = xpert1[2][0] + xpert1[2][1] + xpert1[2][2] + xpert1[2][3] + xpert1[2][4] + xpert1[2][5] + xpert1[2][6] + xpert1[2][7] + xpert1[2][8];
        row4 = xpert1[3][0] + xpert1[3][1] + xpert1[3][2] + xpert1[3][3] + xpert1[3][4] + xpert1[3][5] + xpert1[3][6] + xpert1[3][7] + xpert1[3][8];
        row5 = xpert1[4][0] + xpert1[4][1] + xpert1[4][2] + xpert1[4][3] + xpert1[4][4] + xpert1[4][5] + xpert1[4][6] + xpert1[4][7] + xpert1[4][8];
        row6 = xpert1[5][0] + xpert1[5][1] + xpert1[5][2] + xpert1[5][3] + xpert1[5][4] + xpert1[5][5] + xpert1[5][6] + xpert1[5][7] + xpert1[5][8];
        row7 = xpert1[6][0] + xpert1[6][1] + xpert1[6][2] + xpert1[6][3] + xpert1[6][4] + xpert1[6][5] + xpert1[6][6] + xpert1[6][7] + xpert1[6][8];
        row8 = xpert1[7][0] + xpert1[7][1] + xpert1[7][2] + xpert1[7][3] + xpert1[7][4] + xpert1[7][5] + xpert1[7][6] + xpert1[7][7] + xpert1[7][8];
        row9 = xpert1[8][0] + xpert1[8][1] + xpert1[8][2] + xpert1[8][3] + xpert1[8][4] + xpert1[8][5] + xpert1[8][6] + xpert1[8][7] + xpert1[8][8];

        column1 = xpert1[0][0] + xpert1[1][0] + xpert1[2][0] + xpert1[3][0] + xpert1[4][0] + xpert1[5][0] + xpert1[6][0] + xpert1[7][0] + xpert1[8][0];
        column2 = xpert1[0][1] + xpert1[1][1] + xpert1[2][1] + xpert1[3][1] + xpert1[4][1] + xpert1[5][1] + xpert1[6][1] + xpert1[7][1] + xpert1[8][1];
        column3 = xpert1[0][2] + xpert1[1][2] + xpert1[2][2] + xpert1[3][2] + xpert1[4][2] + xpert1[5][2] + xpert1[6][2] + xpert1[7][2] + xpert1[8][2];
        column4 = xpert1[0][3] + xpert1[1][3] + xpert1[2][3] + xpert1[3][3] + xpert1[4][3] + xpert1[5][3] + xpert1[6][3] + xpert1[7][3] + xpert1[8][3];
        column5 = xpert1[0][4] + xpert1[1][4] + xpert1[2][4] + xpert1[3][4] + xpert1[4][4] + xpert1[5][4] + xpert1[6][4] + xpert1[7][4] + xpert1[8][4];
        column6 = xpert1[0][5] + xpert1[1][5] + xpert1[2][5] + xpert1[3][5] + xpert1[4][5] + xpert1[5][5] + xpert1[6][5] + xpert1[7][5] + xpert1[8][5];
        column7 = xpert1[0][6] + xpert1[1][6] + xpert1[2][6] + xpert1[3][6] + xpert1[4][6] + xpert1[5][6] + xpert1[6][6] + xpert1[7][6] + xpert1[8][6];
        column8 = xpert1[0][7] + xpert1[1][7] + xpert1[2][7] + xpert1[3][7] + xpert1[4][7] + xpert1[5][7] + xpert1[6][7] + xpert1[7][7] + xpert1[8][7];
        column9 = xpert1[0][8] + xpert1[1][8] + xpert1[2][8] + xpert1[3][8] + xpert1[4][8] + xpert1[5][8] + xpert1[6][8] + xpert1[7][8] + xpert1[8][8];

        block1 = xpert1[0][0] + xpert1[0][1] + xpert1[0][2] + xpert1[1][0] + xpert1[1][1] + xpert1[1][2] + xpert1[2][0] + xpert1[2][1] + xpert1[2][2];
        block2 = xpert1[0][3] + xpert1[0][4] + xpert1[0][5] + xpert1[1][3] + xpert1[1][4] + xpert1[1][5] + xpert1[2][3] + xpert1[2][4] + xpert1[2][5];
        block3 = xpert1[0][6] + xpert1[0][7] + xpert1[0][8] + xpert1[1][6] + xpert1[1][7] + xpert1[1][8] + xpert1[2][6] + xpert1[2][7] + xpert1[2][8];
        block4 = xpert1[3][0] + xpert1[3][1] + xpert1[3][2] + xpert1[4][0] + xpert1[4][1] + xpert1[4][2] + xpert1[5][0] + xpert1[5][1] + xpert1[5][2];
        block5 = xpert1[3][3] + xpert1[3][4] + xpert1[3][5] + xpert1[4][3] + xpert1[4][4] + xpert1[4][5] + xpert1[5][3] + xpert1[5][4] + xpert1[5][5];
        block6 = xpert1[3][6] + xpert1[3][7] + xpert1[3][8] + xpert1[4][6] + xpert1[4][7] + xpert1[4][8] + xpert1[5][6] + xpert1[5][7] + xpert1[5][8];
        block7 = xpert1[6][0] + xpert1[6][1] + xpert1[6][2] + xpert1[7][0] + xpert1[7][1] + xpert1[7][2] + xpert1[8][0] + xpert1[8][1] + xpert1[8][2];
        block8 = xpert1[6][3] + xpert1[6][4] + xpert1[6][5] + xpert1[7][3] + xpert1[7][4] + xpert1[7][5] + xpert1[8][3] + xpert1[8][4] + xpert1[8][5];
        block9 = xpert1[6][6] + xpert1[6][7] + xpert1[6][8] + xpert1[7][6] + xpert1[7][7] + xpert1[7][8] + xpert1[8][6] + xpert1[8][7] + xpert1[8][8];

        rowTotal = row1 + row2 + row3 + row4 + row5 + row6 + row7 + row8 + row9;
        columnTotal = column1 + column2 + column3 + column4 + column5 + column6 + column7 + column8 + column9;
        blockTotal = block1 + block2 + block3 + block4 + block5 + block6 + block7 + block8 + block9;

        if(rowTotal==4293 && columnTotal==4293 && blockTotal==4293)
            printf("\n\n\n\t\t\tYou Win!!\n\n\n");
        else
            printf("\n\n\n\t\t\tYou Lost :(\n\n\n");
    }


void xpertworl2()
    {
        int row1, row2, row3, row4, row5, row6, row7, row8, row9, rowTotal;
        int column1, column2, column3, column4, column5, column6, column7, column8, column9, columnTotal;
        int block1, block2, block3, block4, block5, block6, block7, block8, block9, blockTotal;

        row1 = xpert2[0][0] + xpert2[0][1] + xpert2[0][2] + xpert2[0][3] + xpert2[0][4] + xpert2[0][5] + xpert2[0][6] + xpert2[0][7] + xpert2[0][8];
        row2 = xpert2[1][0] + xpert2[1][1] + xpert2[1][2] + xpert2[1][3] + xpert2[1][4] + xpert2[1][5] + xpert2[1][6] + xpert2[1][7] + xpert2[1][8];
        row3 = xpert2[2][0] + xpert2[2][1] + xpert2[2][2] + xpert2[2][3] + xpert2[2][4] + xpert2[2][5] + xpert2[2][6] + xpert2[2][7] + xpert2[2][8];
        row4 = xpert2[3][0] + xpert2[3][1] + xpert2[3][2] + xpert2[3][3] + xpert2[3][4] + xpert2[3][5] + xpert2[3][6] + xpert2[3][7] + xpert2[3][8];
        row5 = xpert2[4][0] + xpert2[4][1] + xpert2[4][2] + xpert2[4][3] + xpert2[4][4] + xpert2[4][5] + xpert2[4][6] + xpert2[4][7] + xpert2[4][8];
        row6 = xpert2[5][0] + xpert2[5][1] + xpert2[5][2] + xpert2[5][3] + xpert2[5][4] + xpert2[5][5] + xpert2[5][6] + xpert2[5][7] + xpert2[5][8];
        row7 = xpert2[6][0] + xpert2[6][1] + xpert2[6][2] + xpert2[6][3] + xpert2[6][4] + xpert2[6][5] + xpert2[6][6] + xpert2[6][7] + xpert2[6][8];
        row8 = xpert2[7][0] + xpert2[7][1] + xpert2[7][2] + xpert2[7][3] + xpert2[7][4] + xpert2[7][5] + xpert2[7][6] + xpert2[7][7] + xpert2[7][8];
        row9 = xpert2[8][0] + xpert2[8][1] + xpert2[8][2] + xpert2[8][3] + xpert2[8][4] + xpert2[8][5] + xpert2[8][6] + xpert2[8][7] + xpert2[8][8];

        column1 = xpert2[0][0] + xpert2[1][0] + xpert2[2][0] + xpert2[3][0] + xpert2[4][0] + xpert2[5][0] + xpert2[6][0] + xpert2[7][0] + xpert2[8][0];
        column2 = xpert2[0][1] + xpert2[1][1] + xpert2[2][1] + xpert2[3][1] + xpert2[4][1] + xpert2[5][1] + xpert2[6][1] + xpert2[7][1] + xpert2[8][1];
        column3 = xpert2[0][2] + xpert2[1][2] + xpert2[2][2] + xpert2[3][2] + xpert2[4][2] + xpert2[5][2] + xpert2[6][2] + xpert2[7][2] + xpert2[8][2];
        column4 = xpert2[0][3] + xpert2[1][3] + xpert2[2][3] + xpert2[3][3] + xpert2[4][3] + xpert2[5][3] + xpert2[6][3] + xpert2[7][3] + xpert2[8][3];
        column5 = xpert2[0][4] + xpert2[1][4] + xpert2[2][4] + xpert2[3][4] + xpert2[4][4] + xpert2[5][4] + xpert2[6][4] + xpert2[7][4] + xpert2[8][4];
        column6 = xpert2[0][5] + xpert2[1][5] + xpert2[2][5] + xpert2[3][5] + xpert2[4][5] + xpert2[5][5] + xpert2[6][5] + xpert2[7][5] + xpert2[8][5];
        column7 = xpert2[0][6] + xpert2[1][6] + xpert2[2][6] + xpert2[3][6] + xpert2[4][6] + xpert2[5][6] + xpert2[6][6] + xpert2[7][6] + xpert2[8][6];
        column8 = xpert2[0][7] + xpert2[1][7] + xpert2[2][7] + xpert2[3][7] + xpert2[4][7] + xpert2[5][7] + xpert2[6][7] + xpert2[7][7] + xpert2[8][7];
        column9 = xpert2[0][8] + xpert2[1][8] + xpert2[2][8] + xpert2[3][8] + xpert2[4][8] + xpert2[5][8] + xpert2[6][8] + xpert2[7][8] + xpert2[8][8];

        block1 = xpert2[0][0] + xpert2[0][1] + xpert2[0][2] + xpert2[1][0] + xpert2[1][1] + xpert2[1][2] + xpert2[2][0] + xpert2[2][1] + xpert2[2][2];
        block2 = xpert2[0][3] + xpert2[0][4] + xpert2[0][5] + xpert2[1][3] + xpert2[1][4] + xpert2[1][5] + xpert2[2][3] + xpert2[2][4] + xpert2[2][5];
        block3 = xpert2[0][6] + xpert2[0][7] + xpert2[0][8] + xpert2[1][6] + xpert2[1][7] + xpert2[1][8] + xpert2[2][6] + xpert2[2][7] + xpert2[2][8];
        block4 = xpert2[3][0] + xpert2[3][1] + xpert2[3][2] + xpert2[4][0] + xpert2[4][1] + xpert2[4][2] + xpert2[5][0] + xpert2[5][1] + xpert2[5][2];
        block5 = xpert2[3][3] + xpert2[3][4] + xpert2[3][5] + xpert2[4][3] + xpert2[4][4] + xpert2[4][5] + xpert2[5][3] + xpert2[5][4] + xpert2[5][5];
        block6 = xpert2[3][6] + xpert2[3][7] + xpert2[3][8] + xpert2[4][6] + xpert2[4][7] + xpert2[4][8] + xpert2[5][6] + xpert2[5][7] + xpert2[5][8];
        block7 = xpert2[6][0] + xpert2[6][1] + xpert2[6][2] + xpert2[7][0] + xpert2[7][1] + xpert2[7][2] + xpert2[8][0] + xpert2[8][1] + xpert2[8][2];
        block8 = xpert2[6][3] + xpert2[6][4] + xpert2[6][5] + xpert2[7][3] + xpert2[7][4] + xpert2[7][5] + xpert2[8][3] + xpert2[8][4] + xpert2[8][5];
        block9 = xpert2[6][6] + xpert2[6][7] + xpert2[6][8] + xpert2[7][6] + xpert2[7][7] + xpert2[7][8] + xpert2[8][6] + xpert2[8][7] + xpert2[8][8];

        rowTotal = row1 + row2 + row3 + row4 + row5 + row6 + row7 + row8 + row9;
        columnTotal = column1 + column2 + column3 + column4 + column5 + column6 + column7 + column8 + column9;
        blockTotal = block1 + block2 + block3 + block4 + block5 + block6 + block7 + block8 + block9;

        if(rowTotal==4293 && columnTotal==4293 && blockTotal==4293)
            printf("\n\n\n\t\t\tYou Win!!\n\n\n");
        else
            printf("\n\n\n\t\t\tYou Lost :(\n\n\n");
    }




void xpertworl3()
    {
        int row1, row2, row3, row4, row5, row6, row7, row8, row9, rowTotal;
        int column1, column2, column3, column4, column5, column6, column7, column8, column9, columnTotal;
        int block1, block2, block3, block4, block5, block6, block7, block8, block9, blockTotal;

        row1 = xpert3[0][0] + xpert3[0][1] + xpert3[0][2] + xpert3[0][3] + xpert3[0][4] + xpert3[0][5] + xpert3[0][6] + xpert3[0][7] + xpert3[0][8];
        row2 = xpert3[1][0] + xpert3[1][1] + xpert3[1][2] + xpert3[1][3] + xpert3[1][4] + xpert3[1][5] + xpert3[1][6] + xpert3[1][7] + xpert3[1][8];
        row3 = xpert3[2][0] + xpert3[2][1] + xpert3[2][2] + xpert3[2][3] + xpert3[2][4] + xpert3[2][5] + xpert3[2][6] + xpert3[2][7] + xpert3[2][8];
        row4 = xpert3[3][0] + xpert3[3][1] + xpert3[3][2] + xpert3[3][3] + xpert3[3][4] + xpert3[3][5] + xpert3[3][6] + xpert3[3][7] + xpert3[3][8];
        row5 = xpert3[4][0] + xpert3[4][1] + xpert3[4][2] + xpert3[4][3] + xpert3[4][4] + xpert3[4][5] + xpert3[4][6] + xpert3[4][7] + xpert3[4][8];
        row6 = xpert3[5][0] + xpert3[5][1] + xpert3[5][2] + xpert3[5][3] + xpert3[5][4] + xpert3[5][5] + xpert3[5][6] + xpert3[5][7] + xpert3[5][8];
        row7 = xpert3[6][0] + xpert3[6][1] + xpert3[6][2] + xpert3[6][3] + xpert3[6][4] + xpert3[6][5] + xpert3[6][6] + xpert3[6][7] + xpert3[6][8];
        row8 = xpert3[7][0] + xpert3[7][1] + xpert3[7][2] + xpert3[7][3] + xpert3[7][4] + xpert3[7][5] + xpert3[7][6] + xpert3[7][7] + xpert3[7][8];
        row9 = xpert3[8][0] + xpert3[8][1] + xpert3[8][2] + xpert3[8][3] + xpert3[8][4] + xpert3[8][5] + xpert3[8][6] + xpert3[8][7] + xpert3[8][8];

        column1 = xpert3[0][0] + xpert3[1][0] + xpert3[2][0] + xpert3[3][0] + xpert3[4][0] + xpert3[5][0] + xpert3[6][0] + xpert3[7][0] + xpert3[8][0];
        column2 = xpert3[0][1] + xpert3[1][1] + xpert3[2][1] + xpert3[3][1] + xpert3[4][1] + xpert3[5][1] + xpert3[6][1] + xpert3[7][1] + xpert3[8][1];
        column3 = xpert3[0][2] + xpert3[1][2] + xpert3[2][2] + xpert3[3][2] + xpert3[4][2] + xpert3[5][2] + xpert3[6][2] + xpert3[7][2] + xpert3[8][2];
        column4 = xpert3[0][3] + xpert3[1][3] + xpert3[2][3] + xpert3[3][3] + xpert3[4][3] + xpert3[5][3] + xpert3[6][3] + xpert3[7][3] + xpert3[8][3];
        column5 = xpert3[0][4] + xpert3[1][4] + xpert3[2][4] + xpert3[3][4] + xpert3[4][4] + xpert3[5][4] + xpert3[6][4] + xpert3[7][4] + xpert3[8][4];
        column6 = xpert3[0][5] + xpert3[1][5] + xpert3[2][5] + xpert3[3][5] + xpert3[4][5] + xpert3[5][5] + xpert3[6][5] + xpert3[7][5] + xpert3[8][5];
        column7 = xpert3[0][6] + xpert3[1][6] + xpert3[2][6] + xpert3[3][6] + xpert3[4][6] + xpert3[5][6] + xpert3[6][6] + xpert3[7][6] + xpert3[8][6];
        column8 = xpert3[0][7] + xpert3[1][7] + xpert3[2][7] + xpert3[3][7] + xpert3[4][7] + xpert3[5][7] + xpert3[6][7] + xpert3[7][7] + xpert3[8][7];
        column9 = xpert3[0][8] + xpert3[1][8] + xpert3[2][8] + xpert3[3][8] + xpert3[4][8] + xpert3[5][8] + xpert3[6][8] + xpert3[7][8] + xpert3[8][8];

        block1 = xpert3[0][0] + xpert3[0][1] + xpert3[0][2] + xpert3[1][0] + xpert3[1][1] + xpert3[1][2] + xpert3[2][0] + xpert3[2][1] + xpert3[2][2];
        block2 = xpert3[0][3] + xpert3[0][4] + xpert3[0][5] + xpert3[1][3] + xpert3[1][4] + xpert3[1][5] + xpert3[2][3] + xpert3[2][4] + xpert3[2][5];
        block3 = xpert3[0][6] + xpert3[0][7] + xpert3[0][8] + xpert3[1][6] + xpert3[1][7] + xpert3[1][8] + xpert3[2][6] + xpert3[2][7] + xpert3[2][8];
        block4 = xpert3[3][0] + xpert3[3][1] + xpert3[3][2] + xpert3[4][0] + xpert3[4][1] + xpert3[4][2] + xpert3[5][0] + xpert3[5][1] + xpert3[5][2];
        block5 = xpert3[3][3] + xpert3[3][4] + xpert3[3][5] + xpert3[4][3] + xpert3[4][4] + xpert3[4][5] + xpert3[5][3] + xpert3[5][4] + xpert3[5][5];
        block6 = xpert3[3][6] + xpert3[3][7] + xpert3[3][8] + xpert3[4][6] + xpert3[4][7] + xpert3[4][8] + xpert3[5][6] + xpert3[5][7] + xpert3[5][8];
        block7 = xpert3[6][0] + xpert3[6][1] + xpert3[6][2] + xpert3[7][0] + xpert3[7][1] + xpert3[7][2] + xpert3[8][0] + xpert3[8][1] + xpert3[8][2];
        block8 = xpert3[6][3] + xpert3[6][4] + xpert3[6][5] + xpert3[7][3] + xpert3[7][4] + xpert3[7][5] + xpert3[8][3] + xpert3[8][4] + xpert3[8][5];
        block9 = xpert3[6][6] + xpert3[6][7] + xpert3[6][8] + xpert3[7][6] + xpert3[7][7] + xpert3[7][8] + xpert3[8][6] + xpert3[8][7] + xpert3[8][8];

        rowTotal = row1 + row2 + row3 + row4 + row5 + row6 + row7 + row8 + row9;
        columnTotal = column1 + column2 + column3 + column4 + column5 + column6 + column7 + column8 + column9;
        blockTotal = block1 + block2 + block3 + block4 + block5 + block6 + block7 + block8 + block9;

        if(rowTotal==4293 && columnTotal==4293 && blockTotal==4293)
            printf("\n\n\n\t\t\tYou Win!!\n\n\n");
        else
            printf("\n\n\n\t\t\tYou Lost :(\n\n\n");
    }



void xpertworl4()
    {
        int row1, row2, row3, row4, row5, row6, row7, row8, row9, rowTotal;
        int column1, column2, column3, column4, column5, column6, column7, column8, column9, columnTotal;
        int block1, block2, block3, block4, block5, block6, block7, block8, block9, blockTotal;

        row1 = xpert4[0][0] + xpert4[0][1] + xpert4[0][2] + xpert4[0][3] + xpert4[0][4] + xpert4[0][5] + xpert4[0][6] + xpert4[0][7] + xpert4[0][8];
        row2 = xpert4[1][0] + xpert4[1][1] + xpert4[1][2] + xpert4[1][3] + xpert4[1][4] + xpert4[1][5] + xpert4[1][6] + xpert4[1][7] + xpert4[1][8];
        row3 = xpert4[2][0] + xpert4[2][1] + xpert4[2][2] + xpert4[2][3] + xpert4[2][4] + xpert4[2][5] + xpert4[2][6] + xpert4[2][7] + xpert4[2][8];
        row4 = xpert4[3][0] + xpert4[3][1] + xpert4[3][2] + xpert4[3][3] + xpert4[3][4] + xpert4[3][5] + xpert4[3][6] + xpert4[3][7] + xpert4[3][8];
        row5 = xpert4[4][0] + xpert4[4][1] + xpert4[4][2] + xpert4[4][3] + xpert4[4][4] + xpert4[4][5] + xpert4[4][6] + xpert4[4][7] + xpert4[4][8];
        row6 = xpert4[5][0] + xpert4[5][1] + xpert4[5][2] + xpert4[5][3] + xpert4[5][4] + xpert4[5][5] + xpert4[5][6] + xpert4[5][7] + xpert4[5][8];
        row7 = xpert4[6][0] + xpert4[6][1] + xpert4[6][2] + xpert4[6][3] + xpert4[6][4] + xpert4[6][5] + xpert4[6][6] + xpert4[6][7] + xpert4[6][8];
        row8 = xpert4[7][0] + xpert4[7][1] + xpert4[7][2] + xpert4[7][3] + xpert4[7][4] + xpert4[7][5] + xpert4[7][6] + xpert4[7][7] + xpert4[7][8];
        row9 = xpert4[8][0] + xpert4[8][1] + xpert4[8][2] + xpert4[8][3] + xpert4[8][4] + xpert4[8][5] + xpert4[8][6] + xpert4[8][7] + xpert4[8][8];

        column1 = xpert4[0][0] + xpert4[1][0] + xpert4[2][0] + xpert4[3][0] + xpert4[4][0] + xpert4[5][0] + xpert4[6][0] + xpert4[7][0] + xpert4[8][0];
        column2 = xpert4[0][1] + xpert4[1][1] + xpert4[2][1] + xpert4[3][1] + xpert4[4][1] + xpert4[5][1] + xpert4[6][1] + xpert4[7][1] + xpert4[8][1];
        column3 = xpert4[0][2] + xpert4[1][2] + xpert4[2][2] + xpert4[3][2] + xpert4[4][2] + xpert4[5][2] + xpert4[6][2] + xpert4[7][2] + xpert4[8][2];
        column4 = xpert4[0][3] + xpert4[1][3] + xpert4[2][3] + xpert4[3][3] + xpert4[4][3] + xpert4[5][3] + xpert4[6][3] + xpert4[7][3] + xpert4[8][3];
        column5 = xpert4[0][4] + xpert4[1][4] + xpert4[2][4] + xpert4[3][4] + xpert4[4][4] + xpert4[5][4] + xpert4[6][4] + xpert4[7][4] + xpert4[8][4];
        column6 = xpert4[0][5] + xpert4[1][5] + xpert4[2][5] + xpert4[3][5] + xpert4[4][5] + xpert4[5][5] + xpert4[6][5] + xpert4[7][5] + xpert4[8][5];
        column7 = xpert4[0][6] + xpert4[1][6] + xpert4[2][6] + xpert4[3][6] + xpert4[4][6] + xpert4[5][6] + xpert4[6][6] + xpert4[7][6] + xpert4[8][6];
        column8 = xpert4[0][7] + xpert4[1][7] + xpert4[2][7] + xpert4[3][7] + xpert4[4][7] + xpert4[5][7] + xpert4[6][7] + xpert4[7][7] + xpert4[8][7];
        column9 = xpert4[0][8] + xpert4[1][8] + xpert4[2][8] + xpert4[3][8] + xpert4[4][8] + xpert4[5][8] + xpert4[6][8] + xpert4[7][8] + xpert4[8][8];

        block1 = xpert4[0][0] + xpert4[0][1] + xpert4[0][2] + xpert4[1][0] + xpert4[1][1] + xpert4[1][2] + xpert4[2][0] + xpert4[2][1] + xpert4[2][2];
        block2 = xpert4[0][3] + xpert4[0][4] + xpert4[0][5] + xpert4[1][3] + xpert4[1][4] + xpert4[1][5] + xpert4[2][3] + xpert4[2][4] + xpert4[2][5];
        block3 = xpert4[0][6] + xpert4[0][7] + xpert4[0][8] + xpert4[1][6] + xpert4[1][7] + xpert4[1][8] + xpert4[2][6] + xpert4[2][7] + xpert4[2][8];
        block4 = xpert4[3][0] + xpert4[3][1] + xpert4[3][2] + xpert4[4][0] + xpert4[4][1] + xpert4[4][2] + xpert4[5][0] + xpert4[5][1] + xpert4[5][2];
        block5 = xpert4[3][3] + xpert4[3][4] + xpert4[3][5] + xpert4[4][3] + xpert4[4][4] + xpert4[4][5] + xpert4[5][3] + xpert4[5][4] + xpert4[5][5];
        block6 = xpert4[3][6] + xpert4[3][7] + xpert4[3][8] + xpert4[4][6] + xpert4[4][7] + xpert4[4][8] + xpert4[5][6] + xpert4[5][7] + xpert4[5][8];
        block7 = xpert4[6][0] + xpert4[6][1] + xpert4[6][2] + xpert4[7][0] + xpert4[7][1] + xpert4[7][2] + xpert4[8][0] + xpert4[8][1] + xpert4[8][2];
        block8 = xpert4[6][3] + xpert4[6][4] + xpert4[6][5] + xpert4[7][3] + xpert4[7][4] + xpert4[7][5] + xpert4[8][3] + xpert4[8][4] + xpert4[8][5];
        block9 = xpert4[6][6] + xpert4[6][7] + xpert4[6][8] + xpert4[7][6] + xpert4[7][7] + xpert4[7][8] + xpert4[8][6] + xpert4[8][7] + xpert4[8][8];

        rowTotal = row1 + row2 + row3 + row4 + row5 + row6 + row7 + row8 + row9;
        columnTotal = column1 + column2 + column3 + column4 + column5 + column6 + column7 + column8 + column9;
        blockTotal = block1 + block2 + block3 + block4 + block5 + block6 + block7 + block8 + block9;

        if(rowTotal==4293 && columnTotal==4293 && blockTotal==4293)
            printf("\n\n\n\t\t\tYou Win!!\n\n\n");
        else
            printf("\n\n\n\t\t\tYou Lost :(\n\n\n");
    }




void xpertworl5()
    {
        int row1, row2, row3, row4, row5, row6, row7, row8, row9, rowTotal;
        int column1, column2, column3, column4, column5, column6, column7, column8, column9, columnTotal;
        int block1, block2, block3, block4, block5, block6, block7, block8, block9, blockTotal;

        row1 = xpert5[0][0] + xpert5[0][1] + xpert5[0][2] + xpert5[0][3] + xpert5[0][4] + xpert5[0][5] + xpert5[0][6] + xpert5[0][7] + xpert5[0][8];
        row2 = xpert5[1][0] + xpert5[1][1] + xpert5[1][2] + xpert5[1][3] + xpert5[1][4] + xpert5[1][5] + xpert5[1][6] + xpert5[1][7] + xpert5[1][8];
        row3 = xpert5[2][0] + xpert5[2][1] + xpert5[2][2] + xpert5[2][3] + xpert5[2][4] + xpert5[2][5] + xpert5[2][6] + xpert5[2][7] + xpert5[2][8];
        row4 = xpert5[3][0] + xpert5[3][1] + xpert5[3][2] + xpert5[3][3] + xpert5[3][4] + xpert5[3][5] + xpert5[3][6] + xpert5[3][7] + xpert5[3][8];
        row5 = xpert5[4][0] + xpert5[4][1] + xpert5[4][2] + xpert5[4][3] + xpert5[4][4] + xpert5[4][5] + xpert5[4][6] + xpert5[4][7] + xpert5[4][8];
        row6 = xpert5[5][0] + xpert5[5][1] + xpert5[5][2] + xpert5[5][3] + xpert5[5][4] + xpert5[5][5] + xpert5[5][6] + xpert5[5][7] + xpert5[5][8];
        row7 = xpert5[6][0] + xpert5[6][1] + xpert5[6][2] + xpert5[6][3] + xpert5[6][4] + xpert5[6][5] + xpert5[6][6] + xpert5[6][7] + xpert5[6][8];
        row8 = xpert5[7][0] + xpert5[7][1] + xpert5[7][2] + xpert5[7][3] + xpert5[7][4] + xpert5[7][5] + xpert5[7][6] + xpert5[7][7] + xpert5[7][8];
        row9 = xpert5[8][0] + xpert5[8][1] + xpert5[8][2] + xpert5[8][3] + xpert5[8][4] + xpert5[8][5] + xpert5[8][6] + xpert5[8][7] + xpert5[8][8];

        column1 = xpert5[0][0] + xpert5[1][0] + xpert5[2][0] + xpert5[3][0] + xpert5[4][0] + xpert5[5][0] + xpert5[6][0] + xpert5[7][0] + xpert5[8][0];
        column2 = xpert5[0][1] + xpert5[1][1] + xpert5[2][1] + xpert5[3][1] + xpert5[4][1] + xpert5[5][1] + xpert5[6][1] + xpert5[7][1] + xpert5[8][1];
        column3 = xpert5[0][2] + xpert5[1][2] + xpert5[2][2] + xpert5[3][2] + xpert5[4][2] + xpert5[5][2] + xpert5[6][2] + xpert5[7][2] + xpert5[8][2];
        column4 = xpert5[0][3] + xpert5[1][3] + xpert5[2][3] + xpert5[3][3] + xpert5[4][3] + xpert5[5][3] + xpert5[6][3] + xpert5[7][3] + xpert5[8][3];
        column5 = xpert5[0][4] + xpert5[1][4] + xpert5[2][4] + xpert5[3][4] + xpert5[4][4] + xpert5[5][4] + xpert5[6][4] + xpert5[7][4] + xpert5[8][4];
        column6 = xpert5[0][5] + xpert5[1][5] + xpert5[2][5] + xpert5[3][5] + xpert5[4][5] + xpert5[5][5] + xpert5[6][5] + xpert5[7][5] + xpert5[8][5];
        column7 = xpert5[0][6] + xpert5[1][6] + xpert5[2][6] + xpert5[3][6] + xpert5[4][6] + xpert5[5][6] + xpert5[6][6] + xpert5[7][6] + xpert5[8][6];
        column8 = xpert5[0][7] + xpert5[1][7] + xpert5[2][7] + xpert5[3][7] + xpert5[4][7] + xpert5[5][7] + xpert5[6][7] + xpert5[7][7] + xpert5[8][7];
        column9 = xpert5[0][8] + xpert5[1][8] + xpert5[2][8] + xpert5[3][8] + xpert5[4][8] + xpert5[5][8] + xpert5[6][8] + xpert5[7][8] + xpert5[8][8];

        block1 = xpert5[0][0] + xpert5[0][1] + xpert5[0][2] + xpert5[1][0] + xpert5[1][1] + xpert5[1][2] + xpert5[2][0] + xpert5[2][1] + xpert5[2][2];
        block2 = xpert5[0][3] + xpert5[0][4] + xpert5[0][5] + xpert5[1][3] + xpert5[1][4] + xpert5[1][5] + xpert5[2][3] + xpert5[2][4] + xpert5[2][5];
        block3 = xpert5[0][6] + xpert5[0][7] + xpert5[0][8] + xpert5[1][6] + xpert5[1][7] + xpert5[1][8] + xpert5[2][6] + xpert5[2][7] + xpert5[2][8];
        block4 = xpert5[3][0] + xpert5[3][1] + xpert5[3][2] + xpert5[4][0] + xpert5[4][1] + xpert5[4][2] + xpert5[5][0] + xpert5[5][1] + xpert5[5][2];
        block5 = xpert5[3][3] + xpert5[3][4] + xpert5[3][5] + xpert5[4][3] + xpert5[4][4] + xpert5[4][5] + xpert5[5][3] + xpert5[5][4] + xpert5[5][5];
        block6 = xpert5[3][6] + xpert5[3][7] + xpert5[3][8] + xpert5[4][6] + xpert5[4][7] + xpert5[4][8] + xpert5[5][6] + xpert5[5][7] + xpert5[5][8];
        block7 = xpert5[6][0] + xpert5[6][1] + xpert5[6][2] + xpert5[7][0] + xpert5[7][1] + xpert5[7][2] + xpert5[8][0] + xpert5[8][1] + xpert5[8][2];
        block8 = xpert5[6][3] + xpert5[6][4] + xpert5[6][5] + xpert5[7][3] + xpert5[7][4] + xpert5[7][5] + xpert5[8][3] + xpert5[8][4] + xpert5[8][5];
        block9 = xpert5[6][6] + xpert5[6][7] + xpert5[6][8] + xpert5[7][6] + xpert5[7][7] + xpert5[7][8] + xpert5[8][6] + xpert5[8][7] + xpert5[8][8];

        rowTotal = row1 + row2 + row3 + row4 + row5 + row6 + row7 + row8 + row9;
        columnTotal = column1 + column2 + column3 + column4 + column5 + column6 + column7 + column8 + column9;
        blockTotal = block1 + block2 + block3 + block4 + block5 + block6 + block7 + block8 + block9;

        if(rowTotal==4293 && columnTotal==4293 && blockTotal==4293)
            printf("\n\n\n\t\t\tYou Win!!\n\n\n");
        else
            printf("\n\n\n\t\t\tYou Lost :(\n\n\n");
    }


