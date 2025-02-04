class Solution {
    public boolean searchMatrix(int[][] matrix, int target) {
        /* 
        1. find floor of target in first column
        2. Perform binary search on the row
        */
        int s = 0, e = matrix.length -1;
        int row = 0;
        int column = 0;
        int m = 0;
        while(s<=e){
            m = s+(e-s)/2;
            if(matrix[m][0] == target) return true;
            else if(matrix[m][0]<target){
                row = m;
                s = m+1;
            }
            else{
                e = m-1;
            }
        }
        //performing binary search on row
        s = 0;e=matrix[row].length-1;
        while(s<=e){
            m = s+(e-s)/2;
            if(matrix[row][m] == target) return true;
            else if(matrix[row][m] < target) s = m+1;
            else e = m -1;
        }
        return false;

    }
}