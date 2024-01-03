#include<iostream>
#include<string>
#include<vector>
using namespace std;

bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int trow = matrix.size();
        int tcol = matrix[0].size();

        int row=0;
        int col=tcol-1;
        int element{0};

        while(row<trow && col>=0)
        {
            element = matrix[row][col];
            if(element==target)
            {
                matrix.clear();
                return 1;
            }
            if(element>target)
            col--;

            else
            row++;
        }

        matrix.clear();
        return 0;

    }

int main()
{
    vector<vector<int>> matrix={{1,2,3},{4,5,6},{7,8,9}};
    int target=15;
    cout<<searchMatrix(matrix,target);
}