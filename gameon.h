void gameon(int level, int sublevel){

    char row, column;

    if(level == 1 && sublevel == 1){

            do{
            system("cls");
            easyboard1();

            printf("\n\n\t\t\tPress 0 in row and 0 in column to stop the gameplay.\n");

            printf("\n\t\t\tEnter the row (A/ B/ C/ D/ E/ F/ G/ H/ I): ");
            scanf(" %c", &row);
            printf("\n\t\t\tEnter the column (1/ 2/ 3/ 4/ 5/ 6/ 7/ 8/ 9): ");
            scanf(" %c", &column);
            row = toupper(row);
            column = toupper(column);
            easygameplay1(row, column);
        }

        while(row!='0' && column!='0');

        easyworl1();
    }

     else if(level == 1 && sublevel == 2){

            do{
            system("cls");
            easyboard2();

            printf("\n\n\t\t\tPress 0 in row and 0 in column to stop the gameplay.\n");

            printf("\n\t\t\tEnter the row (A/ B/ C/ D/ E/ F/ G/ H/ I): ");
            scanf(" %c", &row);
            printf("\n\t\t\tEnter the column (1/ 2/ 3/ 4/ 5/ 6/ 7/ 8/ 9): ");
            scanf(" %c", &column);
            row = toupper(row);
            column = toupper(column);
            easygameplay2(row, column);
        }

        while(row!='0' && column!='0');

        easyworl2();
    }

         else if(level == 1 && sublevel == 3){

            do{
            system("cls");
            easyboard3();

            printf("\n\n\t\t\tPress 0 in row and 0 in column to stop the gameplay.\n");

            printf("\n\t\t\tEnter the row (A/ B/ C/ D/ E/ F/ G/ H/ I): ");
            scanf(" %c", &row);
            printf("\n\t\t\tEnter the column (1/ 2/ 3/ 4/ 5/ 6/ 7/ 8/ 9): ");
            scanf(" %c", &column);
            row = toupper(row);
            column = toupper(column);
            easygameplay3(row, column);
        }

        while(row!='0' && column!='0');

        easyworl3();
    }

         else if(level == 1 && sublevel == 4){

            do{
            system("cls");
            easyboard4();

            printf("\n\n\t\t\tPress 0 in row and 0 in column to stop the gameplay.\n");

            printf("\n\t\t\tEnter the row (A/ B/ C/ D/ E/ F/ G/ H/ I): ");
            scanf(" %c", &row);
            printf("\n\t\t\tEnter the column (1/ 2/ 3/ 4/ 5/ 6/ 7/ 8/ 9): ");
            scanf(" %c", &column);
            row = toupper(row);
            column = toupper(column);
            easygameplay4(row, column);
        }

        while(row!='0' && column!='0');

        easyworl4();
    }

         else if(level == 1 && sublevel == 5){

            do{
            system("cls");
            easyboard5();

            printf("\n\n\t\t\tPress 0 in row and 0 in column to stop the gameplay.\n");

            printf("\n\t\t\tEnter the row (A/ B/ C/ D/ E/ F/ G/ H/ I): ");
            scanf(" %c", &row);
            printf("\n\t\t\tEnter the column (1/ 2/ 3/ 4/ 5/ 6/ 7/ 8/ 9): ");
            scanf(" %c", &column);
            row = toupper(row);
            column = toupper(column);
            easygameplay5(row, column);
        }

        while(row!='0' && column!='0');

        easyworl5();
    }


         else if(level == 2 && sublevel == 1){

            do{
            system("cls");
            mediumboard1();

            printf("\n\n\t\t\tPress 0 in row and 0 in column to stop the gameplay.\n");

            printf("\n\t\t\tEnter the row (A/ B/ C/ D/ E/ F/ G/ H/ I): ");
            scanf(" %c", &row);
            printf("\n\t\t\tEnter the column (1/ 2/ 3/ 4/ 5/ 6/ 7/ 8/ 9): ");
            scanf(" %c", &column);
            row = toupper(row);
            column = toupper(column);
            mediumgameplay1(row, column);
        }

        while(row!='0' && column!='0');

        mediumworl1();
    }

        else if(level == 2 && sublevel == 2){

            do{
            system("cls");
            mediumboard2();

            printf("\n\n\t\t\tPress 0 in row and 0 in column to stop the gameplay.\n");

            printf("\n\t\t\tEnter the row (A/ B/ C/ D/ E/ F/ G/ H/ I): ");
            scanf(" %c", &row);
            printf("\n\t\t\tEnter the column (1/ 2/ 3/ 4/ 5/ 6/ 7/ 8/ 9): ");
            scanf(" %c", &column);
            row = toupper(row);
            column = toupper(column);
            mediumgameplay2(row, column);
        }

        while(row!='0' && column!='0');

        mediumworl2();
    }


         else if(level == 2 && sublevel == 3){

            do{
            system("cls");
            mediumboard3();

            printf("\n\n\t\t\tPress 0 in row and 0 in column to stop the gameplay.\n");

            printf("\n\t\t\tEnter the row (A/ B/ C/ D/ E/ F/ G/ H/ I): ");
            scanf(" %c", &row);
            printf("\n\t\t\tEnter the column (1/ 2/ 3/ 4/ 5/ 6/ 7/ 8/ 9): ");
            scanf(" %c", &column);
            row = toupper(row);
            column = toupper(column);
            mediumgameplay3(row, column);
        }

        while(row!='0' && column!='0');

        mediumworl3();
    }


         else if(level == 2 && sublevel == 4){

            do{
            system("cls");
            mediumboard4();

            printf("\n\n\t\t\tPress 0 in row and 0 in column to stop the gameplay.\n");

            printf("\n\t\t\tEnter the row (A/ B/ C/ D/ E/ F/ G/ H/ I): ");
            scanf(" %c", &row);
            printf("\n\t\t\tEnter the column (1/ 2/ 3/ 4/ 5/ 6/ 7/ 8/ 9): ");
            scanf(" %c", &column);
            row = toupper(row);
            column = toupper(column);
            mediumgameplay4(row, column);
        }

        while(row!='0' && column!='0');

        mediumworl4();
    }


         else if(level == 2 && sublevel == 5){

            do{
            system("cls");
            mediumboard5();

            printf("\n\n\t\t\tPress 0 in row and 0 in column to stop the gameplay.\n");

            printf("\n\t\t\tEnter the row (A/ B/ C/ D/ E/ F/ G/ H/ I): ");
            scanf(" %c", &row);
            printf("\n\t\t\tEnter the column (1/ 2/ 3/ 4/ 5/ 6/ 7/ 8/ 9): ");
            scanf(" %c", &column);
            row = toupper(row);
            column = toupper(column);
            mediumgameplay5(row, column);
        }

        while(row!='0' && column!='0');

        mediumworl5();
    }

         else if(level == 3 && sublevel == 1){

            do{
            system("cls");
            hardboard1();

            printf("\n\n\t\t\tPress 0 in row and 0 in column to stop the gameplay.\n");

            printf("\n\t\t\tEnter the row (A/ B/ C/ D/ E/ F/ G/ H/ I): ");
            scanf(" %c", &row);
            printf("\n\t\t\tEnter the column (1/ 2/ 3/ 4/ 5/ 6/ 7/ 8/ 9): ");
            scanf(" %c", &column);
            row = toupper(row);
            column = toupper(column);
            hardgameplay1(row, column);
        }

        while(row!='0' && column!='0');

        hardworl1();
    }

         else if(level == 3 && sublevel == 2){

            do{
            system("cls");
            hardboard2();

            printf("\n\n\t\t\tPress 0 in row and 0 in column to stop the gameplay.\n");

            printf("\n\t\t\tEnter the row (A/ B/ C/ D/ E/ F/ G/ H/ I): ");
            scanf(" %c", &row);
            printf("\n\t\t\tEnter the column (1/ 2/ 3/ 4/ 5/ 6/ 7/ 8/ 9): ");
            scanf(" %c", &column);
            row = toupper(row);
            column = toupper(column);
            hardgameplay2(row, column);
        }

        while(row!='0' && column!='0');

        hardworl2();
    }


         else if(level == 3 && sublevel == 3){

            do{
            system("cls");
            hardboard3();

            printf("\n\n\t\t\tPress 0 in row and 0 in column to stop the gameplay.\n");

            printf("\n\t\t\tEnter the row (A/ B/ C/ D/ E/ F/ G/ H/ I): ");
            scanf(" %c", &row);
            printf("\n\t\t\tEnter the column (1/ 2/ 3/ 4/ 5/ 6/ 7/ 8/ 9): ");
            scanf(" %c", &column);
            row = toupper(row);
            column = toupper(column);
            hardgameplay3(row, column);
        }

        while(row!='0' && column!='0');

        hardworl3();
    }

         else if(level == 3 && sublevel == 4){

            do{
            system("cls");
            hardboard4();

            printf("\n\n\t\t\tPress 0 in row and 0 in column to stop the gameplay.\n");

            printf("\n\t\t\tEnter the row (A/ B/ C/ D/ E/ F/ G/ H/ I): ");
            scanf(" %c", &row);
            printf("\n\t\t\tEnter the column (1/ 2/ 3/ 4/ 5/ 6/ 7/ 8/ 9): ");
            scanf(" %c", &column);
            row = toupper(row);
            column = toupper(column);
            hardgameplay4(row, column);
        }

        while(row!='0' && column!='0');

        hardworl4();
    }

         else if(level == 3 && sublevel == 5){

            do{
            system("cls");
            hardboard5();

            printf("\n\n\t\t\tPress 0 in row and 0 in column to stop the gameplay.\n");

            printf("\n\t\t\tEnter the row (A/ B/ C/ D/ E/ F/ G/ H/ I): ");
            scanf(" %c", &row);
            printf("\n\t\t\tEnter the column (1/ 2/ 3/ 4/ 5/ 6/ 7/ 8/ 9): ");
            scanf(" %c", &column);
            row = toupper(row);
            column = toupper(column);
            hardgameplay5(row, column);
        }

        while(row!='0' && column!='0');

        hardworl5();
    }


         else if(level == 4 && sublevel == 1){

            do{
            system("cls");
            xpertboard1();

            printf("\n\n\t\t\tPress 0 in row and 0 in column to stop the gameplay.\n");

            printf("\n\t\t\tEnter the row (A/ B/ C/ D/ E/ F/ G/ H/ I): ");
            scanf(" %c", &row);
            printf("\n\t\t\tEnter the column (1/ 2/ 3/ 4/ 5/ 6/ 7/ 8/ 9): ");
            scanf(" %c", &column);
            row = toupper(row);
            column = toupper(column);
            xpertgameplay1(row, column);
        }

        while(row!='0' && column!='0');

        xpertworl1();
    }


         else if(level == 4 && sublevel == 2){

            do{
            system("cls");
            xpertboard2();

            printf("\n\n\t\t\tPress 0 in row and 0 in column to stop the gameplay.\n");

            printf("\n\t\t\tEnter the row (A/ B/ C/ D/ E/ F/ G/ H/ I): ");
            scanf(" %c", &row);
            printf("\n\t\t\tEnter the column (1/ 2/ 3/ 4/ 5/ 6/ 7/ 8/ 9): ");
            scanf(" %c", &column);
            row = toupper(row);
            column = toupper(column);
            xpertgameplay2(row, column);
        }

        while(row!='0' && column!='0');

        xpertworl2();
    }

         else if(level == 4 && sublevel == 3){

            do{
            system("cls");
            xpertboard3();

            printf("\n\n\t\t\tPress 0 in row and 0 in column to stop the gameplay.\n");

            printf("\n\t\t\tEnter the row (A/ B/ C/ D/ E/ F/ G/ H/ I): ");
            scanf(" %c", &row);
            printf("\n\t\t\tEnter the column (1/ 2/ 3/ 4/ 5/ 6/ 7/ 8/ 9): ");
            scanf(" %c", &column);
            row = toupper(row);
            column = toupper(column);
            xpertgameplay3(row, column);
        }

        while(row!='0' && column!='0');

        xpertworl3();
    }

         else if(level == 4 && sublevel == 4){

            do{
            system("cls");
            xpertboard4();

            printf("\n\n\t\t\tPress 0 in row and 0 in column to stop the gameplay.\n");

            printf("\n\t\t\tEnter the row (A/ B/ C/ D/ E/ F/ G/ H/ I): ");
            scanf(" %c", &row);
            printf("\n\t\t\tEnter the column (1/ 2/ 3/ 4/ 5/ 6/ 7/ 8/ 9): ");
            scanf(" %c", &column);
            row = toupper(row);
            column = toupper(column);
            xpertgameplay4(row, column);
        }

        while(row!='0' && column!='0');

        xpertworl4();
    }

         else if(level == 4 && sublevel == 5){

            do{
            system("cls");
            xpertboard5();

            printf("\n\n\t\t\tPress 0 in row and 0 in column to stop the gameplay.\n");

            printf("\n\t\t\tEnter the row (A/ B/ C/ D/ E/ F/ G/ H/ I): ");
            scanf(" %c", &row);
            printf("\n\t\t\tEnter the column (1/ 2/ 3/ 4/ 5/ 6/ 7/ 8/ 9): ");
            scanf(" %c", &column);
            row = toupper(row);
            column = toupper(column);
            xpertgameplay5(row, column);
        }

        while(row!='0' && column!='0');

        xpertworl5();
    }

}
