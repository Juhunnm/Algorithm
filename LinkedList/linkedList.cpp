//#include <stdio.h>
//#include <time.h>
//
//struct Node {
//	int v;  // ���� ���� �����ϴ� ����� ��� ����
//	struct Node* next;  // ���� ��带 ����Ű�� ������
//};
//
//struct Node buf[1000000];  // �޸� Ǯ�� ����� ��� �迭
//int bufCnt;  // ���� ������ ���� ����
//
//struct Node* head;  // ���� ����Ʈ�� ���� ��带 ����Ű�� ������
//struct Node* last;  // ���� ����Ʈ�� ������ ��带 ����Ű�� ������
//
//struct Node* myAlloc(int value, struct Node* next) {
//	buf[bufCnt].v = value;  // �޸� Ǯ���� ��带 �Ҵ��ϰ� ���� ����
//	buf[bufCnt].next = next;  // ���� ��带 ����
//	return &buf[bufCnt++];  // �Ҵ�� ����� �����͸� ��ȯ�ϰ� ���� ī��Ʈ ����
//}
//
//void addNode(int value) {
//	if (head == NULL) {  // ���� ���� ����Ʈ�� ���������
//		head = myAlloc(value, NULL);  // ���ο� ��带 �Ҵ��ϰ� ���� ����
//		last = head;  // ��尡 ������ ����̹Ƿ� ������ ��嵵 ���� ����
//	}
//	else {
//		last->next = myAlloc(value, NULL);  // ������ ����� ������ ���ο� ��带 �Ҵ��Ͽ� �߰�
//		last = last->next;  // ������ ��带 ���� �߰��� ���� ������Ʈ
//	}
//}
//
//void min() {
//	// ���� �������� ���� �Լ���, ���� ����Ʈ�� �ּڰ��� ã�� ����� �߰��� �� ����
//}
//
//int main() {
//	time_t start = clock();  // ���� �ð��� ����Ͽ� ���α׷� ���� �ð� ���� ����
//	bufCnt = 0;  // ���� ī��Ʈ �ʱ�ȭ
//	head = NULL;  // ��� �ʱ�ȭ
//	last = NULL;  // ������ ��� �ʱ�ȭ
//
//	for (int i = 0; i < 1000000; i++) {
//		addNode(i);  // 0���� 999999������ ���� ������ ��带 ���� ����Ʈ�� �߰�
//	}
//
//	printf("%d ms ", clock() - start);  // ���α׷� ���� �ð� ���
//	return 0;  // ���α׷� ����
//}
