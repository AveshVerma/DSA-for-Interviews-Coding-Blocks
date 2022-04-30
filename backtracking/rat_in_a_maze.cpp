#include<bits/stdc++.h>
using namespace std;

bool ratInAMaze(vector<string> &maze, char sol[][10], int i, int j, int m, int n){
    if(i==m && j==n){
        sol[m][n] = 1;
        return true;
    }

    if(i>m || j > n){
        return false;
    }
    if(maze[i][j] == 'X'){
        return false;
    }
    sol[i][j] = 1;
    bool right = ratInAMaze(maze, sol, i, j+1, m-1, n-1);
    bool down = ratInAMaze(maze, sol, i+1, j, m-1, n-1);
    if( right || down){
        return true;
    }
    return false;
}

int main(){
    int n;
    vector<string> maze;
    for(int i = 0; i < n;i++){
        string s;
        cin >> s;
        maze.push_back(s);
    }
    char sol[10][10];
    bool ans = ratInAMaze(maze,sol, 0,0,n-1, n-1);
    cout << ans << endl;
}