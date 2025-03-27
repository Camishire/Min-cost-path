# Min-cost-path
In an N*M grid (where each cell contains a number), a player starts the game from the top-left cell. In each move, the player can go either right or down by one cell. Passing through a cell requires paying the amount written in it.  
The goal is to find the minimum total cost required for the player to reach the bottom-right corner.  

### Example  
Given the grid: 
| 1 | 1 | 1 | 1 |  
| 5 | 2 | 2 | 100 |  
| 9 | 4 | 2 | 1 |  

The minimum cost path is:  
1 → 1 → 1 → 2 → 2 → 1
Total cost = 8  

Input :
- The first line contains two natural numbers N, M ((1 ≤ N ≤ 20), (1 ≤ M ≤ 20)).  
- The following N lines represent the grid, each containing M integers A_ij (0 ≤ A_ij ≤ 100).  

Output : print the minimum total cost required to reach the bottom-right corner.
