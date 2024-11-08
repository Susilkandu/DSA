/* given matrix is :-
                8   7   6
                5   4   3
                2   1   0
            now this matrix is row wise and column wise sorted in ascending order
            do binary search on this
it's time complexity is O(rows+column);
and space complexity is O(1)
*/

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void binarySearch(vector<vector<int>>& matrix,int target);
int main(){
    int rows=3,columns=3;
    vector<vector<int>>matrix(rows,vector<int>(columns));
    // first initializing the ascending values
    int vl=(rows*columns)-1,target=0;
        for(int i=0;i<rows;i++){
        for(int j=0;j<columns;j++){
            matrix[i][j]=vl;
            vl--;
        }
    }
    // printing the matrix
    for(int i=0;i<rows;i++){
        for(int j=0;j<columns;j++){
            cout<<matrix[i][j]<<"\t";
        }
        cout<<endl;
    }
    
    cout<<"What you want to find out from the "<<((rows*columns)-1)<<" to "<<"0 \t";
    cin>>target;
    binarySearch(matrix,target);
}
void binarySearch(vector<vector<int>> & matrix,int target){
//   binar search algo implemented below
int rows=matrix.size();
int columns = matrix[0].size();
int startC = columns-1;
int startR = 0;
while (startC>=0 && startR<=rows-1)
{
    if(matrix[startR][startC]==target){
        cout<<"founded on "<<startR<<" row'th and "<<startC<<" column'th index"<<endl;
        return;
    }else if(target<matrix[startR][startC]){
        startR++;
    }else{
        startC--;
    }
}


    cout<<"Not exist";
    return ;
}