/*You live in Geek land. Geek land can be seen as a grid of shape N x M.There are K enemy at K positions. Each enemy blocks the row and column to which it belongs. You have to find the largest continuous area that is not blocked.No two enemies share the same row or the same column.

Example 1:

Input:
N = 2
M = 2
K = 1
enemy[]={{2,2}}
Output:
1
Explanation:
Since only (1,1) cell is free from the enemy hence answer is 1.
 

Example 2:

Input:
N = 3
M = 3
K = 1
enemy[]={{3,3}}
Output:
4
Explanation:
The cells (1,1),(1,2) ,(2,1) and (2,2) are free hence answer =4.
 

Your Task:  
You don't need to read input or print anything. Your task is to complete the function largestArea() which takes the size of geek land n,m and a 2-D matrix enemy of size k denoting the coordinates of the enemy's and need to return the largest area that is free.

Expected Time Complexity: O(KlogK)
Expected Auxiliary Space: O(K)

Constraints:
1 <= N,M <= 104
0<=K<=min(N,M)
1<=Xi<=N
1<=Yi<=M*/
//User function Template for C++

class Solution
{
    public:
        int largestArea(int n,int m,int k,vector<vector<int>> &enemy)
        {
            //  code here
            vector <int> x;
            vector <int> y;
            
            x.push_back(0);
            for (int i=0; i<k; i++) {
                x.push_back(enemy[i][0]);
            }
            x.push_back(n+1);
                
            int x_max=0;
                
            sort(x.begin(), x.end());
                
            for (int i=0; i<x.size()-1; i++) {
                    x_max=max(x_max,x[i+1]-x[i]-1);
            }
                
            y.push_back(0);
            for (int i=0; i<k; i++) {
                    y.push_back(enemy[i][1]);
            }
            y.push_back(m+1);
            sort(y.begin(),y.end());

    
            int y_max = 0;
            for(int i = 0; i < y.size()-1; i++) {
            y_max = max(y_max,y[i+1] - y[i]-1);
            }

            return x_max*y_max;
            }
            
        
};