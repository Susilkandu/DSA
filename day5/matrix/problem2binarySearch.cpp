/* given matrix is :-
                0   1   2   3   4
                3   5   7   8   9
                9   10  12  13  14
                15  16  17  18  19
                20  21  22  23  24
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
    int rows=100,columns=100;
    vector<vector<int>>matrix(rows,vector<int>(columns));
    // first initializing the ascending values
    int vl=0,target=0;
        for(int i=0;i<rows;i++){
        for(int j=0;j<columns;j++){
            matrix[i][j]=vl;
            vl++;
        }
    }
    // printing the matrix
    for(int i=0;i<rows;i++){
        for(int j=0;j<columns;j++){
            cout<<matrix[i][j]<<"\t";
        }
        cout<<endl;
    }
    
    cout<<"What you want to find out from the 0 to 24 \t ";
    cin>>target;
    binarySearch(matrix,target);
}
void binarySearch(vector<vector<int>> & matrix,int target){
//   binar search algo implemented below
int rows=matrix.size();
int columns = matrix[0].size();
int last = columns-1;
int startR = 0;
while (last>=0 && startR<=rows-1)
{
    if(matrix[startR][last]==target){
        cout<<"founded on "<<startR<<" row'th and "<<last<<" column'th index"<<endl;
        return;
    }else if(target<matrix[startR][last]){
        last--;
    }else{
        startR++;
    }
}


    cout<<"Not exist";
    return ;
}