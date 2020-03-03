# CODE_DFS
**1.  HEADER**
---
```C++
#include <iostream> //COUT
#include <vector> //VECTOR
using namespace std; ///STD::VECTOR, STD::COUT
```

**2. DECLARATION**
---
```C++
vector<vector<int>> adj; //ADJACENT LIST
vector<bool> visited; //IS THE VERTEX VISITED
```
**3.FUNCTION_`void dfs(int from){..}`**
---
깊이 우선 탐색을 수행하는 함수이다. (정점from과 인접해있는 정점들만 탐색이 가능하다.)

여기서의 cout 출력코드는 결과창에서 함수의 진행과정을 출력하기 위한 목적으로 작성되었으며 따라서 생략가능하다.
```C++
void dfs(int from) {
	cout << endl << "--dfs(" << from << ") is called--" << endl; //CAN BE OMITTED
	cout << "   so visited " << from <<" will be 'true'" << endl; //CAN BE OMITTED
	visited[from] = true; //MAKE visited[from] 'true' BECAUSE dfs(from) IS CALLED 
	for (size_t i = 0; i < adj[from].size(); ++i) { //REPEAT AS MANY VERTICES ADJACENT TO THE VERTEX 'from'
		int to = adj[from][i]; //'to' IS THE VERTEX ADJACENT TO THE VERTEX 'from'
		cout << "   from : "<<from<<"/ to : " << to << endl; //CAN BE OMITTED
		if (!visited[to]) { //IF THE VERTEX 'to' WASN'T VISITED YET
			cout << "   dfs(" << to << ") is called" << endl; //CAN BE OMITTED
			dfs(to); //VISIT THE VERTEX('to')
		}
	}
}
```

**FLOW**

- 노드 from을 매개변수로 하여 dfs(from)이 호출된다.

- dfs(from)이 호출되었으므로 노드의 방문여부를 저장하는 visited[from]의 값을 'true'(방문했다)로 설정한다.

- 노드 'from'에 인접한 노드의 개수만큼 다음을 반복한다.

  *주의: vector.size()는 unsigned int형이므로 i를 int형이 아닌 size_t형으로 선언해준다.(C++에서만 지원)*
  
  - 'from'에 인접한 노드를 **to**로 선언한다.

  - 만약 노드 'to'가 방문되지 않았다면, dfs(to)를 호출하여 노드 'to'를 방문한다.

**4. FUNCTION_`void dfsAll() {..}`**
---
main함수에서 호출되는 함수이며, 서로 인접하지 않은 다수의 그래프에 대한 깊이우선탐색을 가능하게 한다.

여기서의 cout 출력코드는 결과창에서 함수의 진행과정을 출력하기 위한 목적으로 작성되었으며 따라서 생략가능하다.
```C++
void dfsAll() {
	visited = vector<bool>(adj.size(), false); //INITIALIZE visited TO false
	for (size_t i = 0; i < adj.size(); ++i) { //REPEAT AS MANY VERTICE OF ADJACENT LIST
		if (!visited[i]) { //IF VERTEX 'i' IS NOT VISITED YET
			cout << "-dfsAll(" << i << ") is called-" << endl; //CAN BE OMITTED
			dfs(i); //VISIT!
		}
		else {
			cout << endl << "node " << i << " is already visited" << endl; //CAN BE OMITTED
		}
	}
}
```
**FLOW**

- visited의 값을 false로 초기화한다.(이전에 호출에서의 방문여부기록에 영향 받지 않기 위해)

- 정점의 개수만큼 만약 정점이 방문되지 않은 경우 dfs(i)를 호출하여 해당 정점을 방문한다.

  - dfs(i)에서는 정점 i에 인접한 정점만을 방문하게 되고 이미 방문한 정점에 대해서는 visited<bool>의 값이 true일 것이다. 
  
  - dfs(i)가 종료되었는데도 visited<bool>이 false인 것은 정점 i와 인접하지 않은 정점일 것이고 이것에 대해 다시 dfs()를 호출한다.
  
  - 결과적으로 dfsAll()을 호출하여 서로 인접하는 정점이 없는 다수의 그래프에 대해 깊이우선탐색을 수행할 수 있다.
  
**5. FUNCTION_`showAdj(vector<vector<int>> adjacent) {..} `**
---
깊이우선탐색에 필수적인 함수는 아니지만, 실행창에서 인접한 정점들, 그리고 인접해있는 방향을 확인하기 위한 함수이다. 
```C++
void showAdj(vector<vector<int>> adjacent) {
	for (size_t i = 0; i < adjacent.size(); ++i) {
		for (size_t j = 0; j < adj[i].size(); ++j) {
			if (adjacent[i][j] != NULL) //IF THE EDGE FROM VERTEX'i' TO VERTEX 'j' EXISTS
				cout << i << " -> " << adjacent[i][j] << endl; //SHOW IT (EX. i -> j)
}
```
만약 정점 i에서 정점 j로의 간선이 존재한다면, 'i -> j'의 형태로 출력한다.

**MAIN FUNCTION**
---
main함수이다.
```C++
int main() {
  adj.resize(7); //adj.resize(N) *N is the number of vertices
  visited.resize(7); //visited.resize(N) *N is the number of vertices
  adj[0].push_back(1); //ADD THE EDGE(FROM VERTEX i TO VERTEX j) IF EXIST.  
  adj[0].push_back(2); //LIKE THIS: adj[i].push_back[j];  
  adj[1].push_back(3);
  adj[1].push_back(4);
  adj[3].push_back(5);
  adj[5].push_back(6);
  showAdj(adj);
  cout << endl;
  dfsAll(); //DO DFS
  return 0;
}
```

- `adj.resize(N)`, `visited.resize(N)`
   :인접리스트 adj와 정점방문여부를 저장하는 visited의 크기를 정점의 개수로 설정한다. 
- `adj[i].push_back[j]` :i에서 j로의 간선이 있다면 추가해준다.
- `showAdj(adj)` :인접리스트에 간선이 맞게 추가되었는지 확인하는 함수이다.(옵션)
- `dfsAll()` :입력된 인접리스트에 대해 깊이우선탐색을 수행한다.
