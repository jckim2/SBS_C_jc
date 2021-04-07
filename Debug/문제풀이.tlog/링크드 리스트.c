// 문제 : 아래와 같이 출력되도록 해주세요.
/* 조건 */
/*
- 사람을 3명 만들어주세요.
- 사람은 자신의 이름과 나이를 기억할 수 있습니다.
- 사람은 자신 말고도 사람한명의 위치를 기억할 수 있습니다.
- 즉 사람 구조체(Person)의 변수는 3개 입니다.
- 처음 사람은 두번째 사람의 위치를 알아야 합니다.
- 두번째 사람은 세번째사람의 위치를 알아야 합니다.
- 마지막 사람의 next 변수에는 NULL이 들어가야 합니다.
- 처음사람의 위치가 주어진 상황에서 반복문을 통해, 마지막 사람까지 접근하여주세요.
- 즉 모든 사람의 이름과 나이가 출력되어야 합니다.
- 배열을 사용할 수 없습니다.
*/
/* 출력양식 */
/*
== 출력시작 ==
1번째 사람 : aa, 11살
2번째 사람 : bb, 22살
3번째 사람 : cc, 33살
방금 출력한 사람이 마지막 사람이었습니다.
== 출력끝 ==
*/

#include <stdio.h>
#include <stdlib.h>

typedef struct person {
	char* name;
	int age;
	struct person* next;

}person;

int main(void) {
	struct person* head = malloc(sizeof(struct person));
	struct person* node1 = malloc(sizeof(person));
	struct person* node2 =  malloc(sizeof(struct person));
	struct person* node3 =  malloc(sizeof(struct person));


	node1->name = "jckim2";
	node1->age = 12;
	head->next = node1;

	node2->name = "wncks0303";
	node2->age = 32;
	node1->next = node2;

	node3->name = "sck0329";
	node3->age = 56;
	node2->next = node3;

	node3->next=NULL;

	struct person* curr = head->next;

	while(curr != NULL){
		int i = 1;

		printf("%d번째 사람의 이름:%s\n",i, curr->name);
		printf("%d번째 사람의 나이:%d\n",i, curr->age);

	

		i++;
		curr = curr->next;
		
	}

	printf("방금 출력한 사람이 마지막 사람이였습니다.\n");


	return 0;
}