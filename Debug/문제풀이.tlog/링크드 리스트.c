// ���� : �Ʒ��� ���� ��µǵ��� ���ּ���.
/* ���� */
/*
- ����� 3�� ������ּ���.
- ����� �ڽ��� �̸��� ���̸� ����� �� �ֽ��ϴ�.
- ����� �ڽ� ���� ����Ѹ��� ��ġ�� ����� �� �ֽ��ϴ�.
- �� ��� ����ü(Person)�� ������ 3�� �Դϴ�.
- ó�� ����� �ι�° ����� ��ġ�� �˾ƾ� �մϴ�.
- �ι�° ����� ����°����� ��ġ�� �˾ƾ� �մϴ�.
- ������ ����� next �������� NULL�� ���� �մϴ�.
- ó������� ��ġ�� �־��� ��Ȳ���� �ݺ����� ����, ������ ������� �����Ͽ��ּ���.
- �� ��� ����� �̸��� ���̰� ��µǾ�� �մϴ�.
- �迭�� ����� �� �����ϴ�.
*/
/* ��¾�� */
/*
== ��½��� ==
1��° ��� : aa, 11��
2��° ��� : bb, 22��
3��° ��� : cc, 33��
��� ����� ����� ������ ����̾����ϴ�.
== ��³� ==
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

		printf("%d��° ����� �̸�:%s\n",i, curr->name);
		printf("%d��° ����� ����:%d\n",i, curr->age);

	

		i++;
		curr = curr->next;
		
	}

	printf("��� ����� ����� ������ ����̿����ϴ�.\n");


	return 0;
}