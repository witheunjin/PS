## INPUT

```
간선의 개수를 입력하세요 : 9
각 간선의 두 정점을 입력하세요(ex.a b)
0 1
0 2
0 3
1 2
1 4
1 5
2 6
5 6
6 7
```

## OUTPUT

```
discovered = {T, -, -, -, -, -, -, -, }
q = {0, }

here = q.front :0
q = {}
order = {0, }

there = 1
q = {1, }
discovered = {T, T, -, -, -, -, -, -, }

there = 2
q = {1, 2, }
discovered = {T, T, T, -, -, -, -, -, }

there = 3
q = {1, 2, 3, }
discovered = {T, T, T, T, -, -, -, -, }

here = q.front :1
q = {2, 3, }
order = {0, 1, }

there = 4
q = {2, 3, 4, }
discovered = {T, T, T, T, T, -, -, -, }

there = 5
q = {2, 3, 4, 5, }
discovered = {T, T, T, T, T, T, -, -, }

here = q.front :2
q = {3, 4, 5, }
order = {0, 1, 2, }

there = 6
q = {3, 4, 5, 6, }
discovered = {T, T, T, T, T, T, T, -, }

here = q.front :3
q = {4, 5, 6, }
order = {0, 1, 2, 3, }

here = q.front :4
q = {5, 6, }
order = {0, 1, 2, 3, 4, }

here = q.front :5
q = {6, }
order = {0, 1, 2, 3, 4, 5, }

here = q.front :6
q = {}
order = {0, 1, 2, 3, 4, 5, 6, }

there = 7
q = {7, }
discovered = {T, T, T, T, T, T, T, T, }

here = q.front :7
q = {}
order = {0, 1, 2, 3, 4, 5, 6, 7, }

order = {0, 1, 2, 3, 4, 5, 6, 7, }
```

마지막 줄(order = {0, 1, 2, 3, 4, 5, 6, 7, })을 제외한 모든 결과는 알고리즘의 진행과정을 확인하기 위한 것이므로 해당 코드를 생략해도 무방하다.