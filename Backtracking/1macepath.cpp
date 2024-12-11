#include <iostream>

using namespace std;

void mazePath(string p,int row,int col,int[][3]maze,int count){
    if(row==1 && col==1){
        cout<<p<<endl;
        return;
    }
    if(row>1){
        maze[row][col]=count++;
        mazePath(p+'D',row-1,col,count);
    }
    if(col>1){
        maze[row][col]=count++;
        mazePath(p+'R',row,col-1,count);
    }
    count--;
}

int main()
{
    int maze[][3]={0};
    mazePath("",3,3,1);

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