#include <iostream>
#include <vector>

using namespace std;

void mazePath(string p, vector<vector<bool>>& maze, int row, int col) {

    if (row == maze.size() - 1 && col == maze[0].size() - 1) {
        cout << p << endl;
        return;
    }

    if(maze[row][col]==false){
        return;
    }
    
    maze[row][col]=false;

    if (row < maze.size() - 1) {
        mazePath(p + 'D', maze, row + 1, col);
    }

    if (col < maze[0].size() - 1) {
        mazePath(p + 'R', maze, row, col + 1);
    }

    if (row > 0) {
        mazePath(p + 'U', maze, row - 1, col);
    }

    if (col > 0) {
        mazePath(p + 'L', maze, row, col - 1);
    }
    maze[row][col]=true;
}

int main() {
    vector<vector<bool>> maze = {
        {true, true, true},
        {true, true, true},
        {true, true, true}
    };

    mazePath("", maze, 0, 0);

    return 0;
}

