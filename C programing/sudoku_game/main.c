#include <stdio.h>
#include <stdlib.h>
#include<windows.h>

//=================sudoku_game=================================================================

#define TRUE  1
#define False 0
#define WRONG -1


int sudoku_matrix[9][9]= {{0,0,0,3,9,0,0,7,2},
                          {0,0,0,2,0,0,4,0,0},
                          {0,4,6,1,5,0,0,3,0},
                          {4,0,1,0,6,0,7,9,3},
                          {0,0,0,0,0,0,0,0,0},
                          {6,7,3,0,1,0,5,0,4},
                          {0,9,0,0,2,5,1,6,0},
                          {0,0,5,0,0,1,0,0,0},
                          {1,2,0,0,4,9,0,0,0}
};

int sudoku_matrix_2[9][9]= {{0,0,0,3,9,0,0,7,2},
                          {0,0,0,2,0,0,4,0,0},
                          {0,4,6,1,5,0,0,3,0},
                          {4,0,1,0,6,0,7,9,3},
                          {0,0,0,0,0,0,0,0,0},
                          {6,7,3,0,1,0,5,0,4},
                          {0,9,0,0,2,5,1,6,0},
                          {0,0,5,0,0,1,0,0,0},
                          {1,2,0,0,4,9,0,0,0}
};


void sudoku_print(void)
{
    HANDLE console_color;
    console_color = GetStdHandle(STD_OUTPUT_HANDLE);
    int i = 0;
    SetConsoleTextAttribute(console_color, 14);
//    printf("-     0   -1-2-3-4-5-7--8--9--------------------------------------------------------------->Y-axis\n");
    printf("-     0   -   1    -    2   -    3   -    4   -    5   -    6   -    7   -    8   ->Y-axis\n");
    SetConsoleTextAttribute(console_color, 15);
    for(i =0 ; i<9 ; i++)
    {

        for(int j =0 ; j<9 ; j++)
        {
            SetConsoleTextAttribute(console_color, 14);
            printf(" %d ",i);
            SetConsoleTextAttribute(console_color, 15);
            if(sudoku_matrix[i][j] != 0)
            {
                SetConsoleTextAttribute(console_color, 121);
                printf("  %3d ",sudoku_matrix[i][j]);
                SetConsoleTextAttribute(console_color, 15);
            }
            else
            {
                SetConsoleTextAttribute(console_color, 204);
                printf("      ",sudoku_matrix[i][j]);
                SetConsoleTextAttribute(console_color, 15);

            }
        }
        printf("\n");

        SetConsoleTextAttribute(console_color, 14);
        printf("-----------------------------------------------------------------------------------\n");
        SetConsoleTextAttribute(console_color, 15);

    }
    SetConsoleTextAttribute(console_color, 14);
    printf(" |\n v\n X-axis\n");
    SetConsoleTextAttribute(console_color, 15);

}

void sudoku_num_set(int x,int y, int num )
{
    HANDLE console_color;
    console_color = GetStdHandle(STD_OUTPUT_HANDLE);
    int i = 0, check_1 = 0, check_2 = 0 ;
    check_1 = sudoku_check_row_col(num,x,y);
    check_2 = sudoku_check_Grid(num,x,y);
    if((check_1 == TRUE)&&(check_2 == TRUE)&&(num>=1)&&(num<=9)&&(sudoku_matrix_2[x][y] == 0))
    {
        sudoku_matrix[x][y] = num;
    }
    else
    {
        SetConsoleTextAttribute(console_color, 74);
        printf("WRONG INPUT, CHECK GAME RULES\n");
        SetConsoleTextAttribute(console_color, 15);
    }

}

int sudoku_check_finish(void){
    int i = 0,j=0,counter = 0;
    for(i = 0 ; i< 9 ; i++){
        for(j=0 ; j<9 ; j++){
            if(sudoku_matrix[i][j] == 0){
                counter++;
            }
        }
    }
    return counter;
}

int sudoku_check_row_col(int num,int x, int y)
{
    int i = 0, j = 0 ;
    //col
    for(i = 0 ; i<9; i++)
    {
        if(sudoku_matrix[x][i] == num)
        {
            return False;
        }
    }
    //row
    for(i = 0 ; i<9; i++)
    {
        if(sudoku_matrix[i][y] == num)
        {
            return False;
        }
    }
    return TRUE;
}

int sudoku_check_Grid(int num,int x, int y)
{
    int i = 0, j = 0 ;
    //-----------> x
    if((x>=0)&&(x<=2))
        x = 0;
    if((x>=3)&&(x<=5))
        x = 3;
    if((x>=6)&&(x<=8))
        x = 6;
    //-----------> y
    if((y>=0)&&(y<=2))
        y = 0;
    if((y>=3)&&(y<=5))
        y = 3;
    if((y>=6)&&(y<=8))
        y = 6;

    for(i=x ; i<x+3 ; i++){
        for(j = y ; j<y+3 ; j++){
            if(sudoku_matrix[i][j] == num){
                return False;
            }
        }
    }

    return TRUE;
}

int main()
{
    HANDLE console_color;
    console_color = GetStdHandle(STD_OUTPUT_HANDLE);
    int x =0,y =0,num = 0,counter =0;
    sudoku_print();
    while(1)
    {

        printf("Enter Num to Set : \n");
        scanf("%d",&num);
        printf("Enter X-axis : \n");
        scanf("%d",&x);
        printf("Enter Y-axis : \n");
        scanf("%d",&y);
        sudoku_num_set(x,y,num);
        sudoku_print();
        counter = sudoku_check_finish();
        if(counter != 0){
            SetConsoleTextAttribute(console_color, 46);
            printf("Everything is OK, still %d to go!\n",counter);
            SetConsoleTextAttribute(console_color, 15);
        }
        else{
            SetConsoleTextAttribute(console_color, 223);
            printf("Congratulation,you finish the Sudoku Game \n",counter);
            SetConsoleTextAttribute(console_color, 15);
            break;
        }
    }

    return 0;


}
