/*
This program is a simple simulator of the board game Chutes and Ladders, the program will test 5 cases to see if the assumption and outcome are matched
*/

#include <iostream>
using namespace std;

//move simulator function, set board array, start point, and roll numbers as parameters
int move(int board[], int at, int roll) {
    int temp = at + roll; //expected ending position
    if (temp > 10) return at; //if ending positon exceed 10, dont move
    return board[temp]; //return array element
}

int main()
{
    int board[10] = { 7, 1, 2, 5, 4, 5, 1, 7, 8, 9 }; //according to the rule, set up game array like this
    int at1, roll1, at2, roll2, at3, roll3, at4, roll4, at5, roll5; //5 starting points and roll numbers
    int end1, end2, end3, end4, end5; //5 ending position
    int pass = 0, fail = 0; //pass/fail tracker

    //case 1, expect ending at 7
    at1 = -1;
    roll1 = 1;
    end1 = move(board, at1, roll1);
    if (end1 == 7) {
        pass++;
    }
    else {
        fail++;
    }

    //case 2, expect ending at 5
    at2 = -1;
    roll2 = 4;
    end2 = move(board, at2, roll2);
    if (end2 == 5) {
        pass++;
    }
    else {
        fail++;
    }

    //case 3, expect ending at 1
    at3 = 5;
    roll3 = 1;
    end3 = move(board, at3, roll3);
    if (end3 == 1) {
        pass++;
    }
    else {
        fail++;
    }

    //case 4, expect ending at 1
    at4 = 0;
    roll4 = 1;
    end4 = move(board, at4, roll4);
    if (end4 == 1) {
        pass++;
    }
    else {
        fail++;
    }

    //case 5, expect ending at 8
    at5 = 8;
    roll5 = 3;
    end5 = move(board, at5, roll5);
    if (end5 == 8) {
        pass++;
    }
    else {
        fail++;
    }

    //testing
    cout << "Testing Chutesand Ladders moves" << endl;
    cout << "Passes = " << pass << endl;
    cout << "Fails = " << fail << endl;

    return 0;
}
