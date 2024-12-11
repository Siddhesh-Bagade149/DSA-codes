#include <iostream>
#include <vector>

using namespace std;

void mazePath(string p, vector<vector<bool>>& maze, int row, int col,vector<vector<int>>& path,int step) {

    if (row == maze.size() - 1 && col == maze[0].size() - 1) {
        path[row][col]=step;
        for (int i = 0; i < maze.size(); ++i) {
            for (int j = 0; j < maze[0].size(); ++j) {
                cout<<path[i][j] <<" ";
            }
            cout<<endl;
    }
        cout<<endl;
        return;
    }

    if(maze[row][col]==false){
        return;
    }
    
    maze[row][col]=false;
    path[row][col]=step;

    if (row < maze.size() - 1) {
        mazePath(p + 'D', maze, row + 1, col,path,step+1);
    }

    if (col < maze[0].size() - 1) {
        mazePath(p + 'R', maze, row, col + 1,path,step+1);
    }

    if (row > 0) {
        mazePath(p + 'U', maze, row - 1, col,path,step+1);
    }

    if (col > 0) {
        mazePath(p + 'L', maze, row, col - 1,path,step+1);
    }
    maze[row][col]=true;
    path[row][col]=0;
}

int main() {
    vector<vector<bool>> maze = {
        {true, true, true},
        {true, true, true},
        {true, true, true}
    };
    vector<vector<int>> path(3, vector<int>(3));
    mazePath("", maze, 0, 0,path,1);

    return 0;
}

