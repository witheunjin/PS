#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

//힙에 새 원소를 삽입하는 함수 
void push_heap(vector<int>& heap, int newValue) {
	heap.push_back(newValue); //새로운 원소를 맨 뒤에 일단 넣어서 모양규칙을 만족시킨다
	int idx = heap.size() - 1; //현재 새로운 원소의 위치는 힙의 제일 마지막
	//모양규칙을 만족했으니 이제 대소관계규칙을 만족시켜볼까~
	//새 원소의 위치가 루트가 아니고 부모의 원소 값이 현재 노드의 값보다 작을 때 반복
	while (idx > 0 && heap[(idx - 1) / 2] < heap[idx]) {
		//여기 들어왔다는 건 원소가 루트가 아니고(루트인 경우엔 newValue값이 제일 컸다는 의미. 이제 비교할 원소 없음)
		//부모원소 값보다 자식원소 값이 크다는 건데 이 경우에는 힙의 대소관계규칙을 이용해 둘을 바꿔준다.
		swap(heap[(idx - 1) / 2], heap[idx]);//부모의 원소와 현재 원소를 바꾼다.(원소 스왑)
		idx = (idx - 1) / 2;//그리고는 현재 원소의 위치를 부모위치로 바꿔준다.(주소이전)
	}
}

//우선순위 힙에서 가장 우선순위 높은 원소(=루트) 빼고 나머지 원소 정렬하는 함수
void pop_heap(vector<int>& heap) {
	//루트 원소 빼는 건 여기서 안하고 여기서는 나머지 원소로 다시 힙 정리하는 거 
	heap[0] = heap.back(); //일단 힙의 마지막 원소(이하 문제원소)를 비어있는 루트자리에 넣는다.
	heap.pop_back(); //힙의 마지막 원소(루트랑 값이 같음)를 팝해준다.
	int here = 0; //이건 뭐? //현재 문제 원소의 위치를 변수 here에 저장
	while (1) { //무한반복. 예외는 반복문 안에서 조건문으로 처리함
		int left = here * 2 + 1; //문제원소의 왼쪽 자식의 인덱스
		int right = here * 2 + 2; //문제원소의 오른쪽 자식의 인덱스
		//만약 왼쪽 자식의 인덱스가 힙 크기와 같거나 크면 반복문 종료
		//왜? 모르겠음 일단 패스
		if (left >= heap.size()) break;
		int next = here; //문제원소의 인덱스를 일단 변수 next에 저장하고 
		//만약 문제원소의 값이 왼쪽 자식의 값보다 작으면 부모값이 자식값보다 커야하는 힙의 대소관계에 어긋나므로
		//왼쪽 자식의 인덱스를 next에 저장한다.
		if (heap[next] < heap[left]) next = left;
		//만약 오른쪽 자식의 인덱스가 힙의 크기보다 작고
		//문제원소의 값이 오른쪽 자식의 값보다 작은 경우 힙의 대소관계규칙에 어긋나므로 
		//오른쪽 자식의 인덱스를 next에 저장한다.
		if (right < heap.size() && heap[next] < heap[right]) next = right;
		if (next == here) break; //만약 그렇게 저장된 next가 원래 문제원소의 위치였던 here 즉, 루트위치라면 종료
		swap(heap[here], heap[next]); //루트아니라면 임시변수 next와 here의 원소를 서로 바꾼다.
		here = next; //그리고 임시변수는 here에 저-장
	}
}
void push_heap(vector<int>& heap, int newValue) {
	heap.push_back(newValue); //새로운 원소를 맨 뒤에 일단 넣어서 모양규칙을 만족시킨다
	int idx = heap.size() - 1; //현재 새로운 원소의 위치는 힙의 제일 마지막
	//모양규칙을 만족했으니 이제 대소관계규칙을 만족시켜볼까~
	//새 원소의 위치가 루트가 아니고 부모의 원소 값이 현재 노드의 값보다 작을 때 반복
	while (idx > 0 && heap[(idx - 1) / 2] < heap[idx]) {
		//여기 들어왔다는 건 원소가 루트가 아니고(루트인 경우엔 newValue값이 제일 컸다는 의미. 이제 비교할 원소 없음)
		//부모원소 값보다 자식원소 값이 크다는 건데 이 경우에는 힙의 대소관계규칙을 이용해 둘을 바꿔준다.
		swap(heap[(idx - 1) / 2], heap[idx]);//부모의 원소와 현재 원소를 바꾼다.(원소 스왑)
		idx = (idx - 1) / 2;//그리고는 현재 원소의 위치를 부모위치로 바꿔준다.(주소이전)
	}
}

//우선순위 힙에서 가장 우선순위 높은 원소(=루트) 빼고 나머지 원소 정렬하는 함수
void pop_heap(vector<int>& heap) {
	//루트 원소 빼는 건 여기서 안하고 여기서는 나머지 원소로 다시 힙 정리하는 거 
	heap[0] = heap.back(); //일단 힙의 마지막 원소(이하 문제원소)를 비어있는 루트자리에 넣는다.
	heap.pop_back(); //힙의 마지막 원소(루트랑 값이 같음)를 팝해준다.
	int here = 0; //이건 뭐? //현재 문제 원소의 위치를 변수 here에 저장
	while (1) { //무한반복. 예외는 반복문 안에서 조건문으로 처리함
		int left = here * 2 + 1; //문제원소의 왼쪽 자식의 인덱스
		int right = here * 2 + 2; //문제원소의 오른쪽 자식의 인덱스
		//만약 왼쪽 자식의 인덱스가 힙 크기와 같거나 크면 반복문 종료
		//왜? 모르겠음 일단 패스
		if (left >= heap.size()) break;
		int next = here; //문제원소의 인덱스를 일단 변수 next에 저장하고 
		//만약 문제원소의 값이 왼쪽 자식의 값보다 작으면 부모값이 자식값보다 커야하는 힙의 대소관계에 어긋나므로
		//왼쪽 자식의 인덱스를 next에 저장한다.
		if (heap[next] < heap[left]) next = left;
		//만약 오른쪽 자식의 인덱스가 힙의 크기보다 작고
		//문제원소의 값이 오른쪽 자식의 값보다 작은 경우 힙의 대소관계규칙에 어긋나므로 
		//오른쪽 자식의 인덱스를 next에 저장한다.
		if (right < heap.size() && heap[next] < heap[right]) next = right;
		if (next == here) break; //만약 그렇게 저장된 next가 원래 문제원소의 위치였던 here 즉, 루트위치라면 종료
		swap(heap[here], heap[next]); //루트아니라면 임시변수 next와 here의 원소를 서로 바꾼다.
		here = next; //그리고 임시변수는 here에 저-장
	}
}