# OUTPUT
output of `DFS.cpp`
```
0 -> 1
0 -> 2
1 -> 3
1 -> 4
5 -> 6

-dfsAll(0) is called-

--dfs(0) is called--
   so visited 0 will be 'true'
   from : 0/ to : 1
   dfs(1) is called

--dfs(1) is called--
   so visited 1 will be 'true'
   from : 1/ to : 3
   dfs(3) is called

--dfs(3) is called--
   so visited 3 will be 'true'
   from : 1/ to : 4
   dfs(4) is called

--dfs(4) is called--
   so visited 4 will be 'true'
   from : 0/ to : 2
   dfs(2) is called

--dfs(2) is called--
   so visited 2 will be 'true'
node 1 is already visited
node 2 is already visited
node 3 is already visited
node 4 is already visited

-dfsAll(5) is called-

--dfs(5) is called--
   so visited 5 will be 'true'
   from : 5/ to : 6
   dfs(6) is called

--dfs(6) is called--
   so visited 6 will be 'true'
node 6 is already visited
```
