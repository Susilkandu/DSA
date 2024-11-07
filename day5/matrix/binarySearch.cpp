/*
given matrix is :-
                0   1   2   3   4
                5   6   7   8   9   
                10  11  12  13  14
                15  16  17  18  19
                20  21  22  23  24
do binary search on this
*/
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void binarySearch(vector<vector<int>>& matrix,int target);
int main(){
    int rows=1000,columns=1000;
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
int i=0;
while(i<rows){
    int start = 0 , end = columns-1;
    if(target>=matrix[i][start] && target<=matrix[i][end]){
     while(start<=end){
         int mid= (start+end)/2;
         if(target==matrix[i][mid]){
             cout<<"Founded on "<<i<<"'th row"<<"and "<<mid<<"'th column";
             return;
         }else if(target>matrix[i][mid]){
             start=mid+1;
         }else{
             end=mid-1;
         }
     }
    }
    i++;
    }
    cout<<"Not exist";
    return ;
}