#include <iostream>
using namespace std;
# include<string>
#include<cmath>
#include<vector>
/*  
0 0 0 0 0
0 0 0 0 0 
0 0 0 0 0 
0 0 0 0 0
*/

void minWaysMatrix(vector<vector<int> > &a ){
    int min , x , y;
    for(int i = 0 ; i < a.size() ; i++){
        for(int j = 0 ; j < a[i].size() ; j++){
            if(a[i][j] == 1){
                x = i ;
                y = j;
            } 
        }
    }
    min = abs(x-2)+abs(y-2);
    cout<<min<<"\n";
}

int main() {
    int rows = 5, cols = 5;
    vector<vector<int> > matrix(rows, vector<int>(cols));
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> matrix[i][j];
        }
    }
    minWaysMatrix(matrix);
    return 0;
}