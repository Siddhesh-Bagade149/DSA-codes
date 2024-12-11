#include <iostream>

using namespace std;

void mazePath(string p, bool maze[][3], int row, int col) {
    if (row == 2 && col == 2) {  // Check against specific indices, since length()-1 is 2 for a 3x3 maze.
        cout << p << endl;
        return;
    }
    if (row > 2 || col > 2 || !maze[row][col]) {
        return;
    }
    if (row < 2) {
        mazePath(p + 'D', maze, row + 1, col);
    }
    if (col < 2) {
        mazePath(p + 'R', maze, row, col + 1);
    }
}

int main() {
    bool maze[][3] = {
        {true, true, true},
        {true, false, true},
        {true, true, true}
    };
    mazePath("", maze, 0, 0);

    return 0;
}
/*
#include <iostream>

using namespace std;

void mazePath(string p,bool maze[][],int row,int col){
    if(row==maze.length()-1 && col==maze[0].length()-1){
        cout<<p<<endl;
        return;
    }
    if(maze[row][col]==false){
        return;
    }
    if(row<maze.length()-1){
        mazePath(p+'D',row-1,col);
    }
    if(col<maze[0].length()-1){
        mazePath(p+'R',row,col-1);
    }
}

int main()
{
    bool maze[][]={
        {true,true,true},
        {true,false,true},
        {true,true,true}
    };
    mazePath("",maze,3,3);

    return 0;
}
*/