#include"linkedList_noHead.h"
// ��̬����һ���ڵ�
Node* BuyNode(int x) {
	return new Node(x);
}
// �������ӡ
void SListPrint(Node* plist) {
}
// ������β��
void SListPushBack(Node** pplist, int x);
// �������ͷ��
void SListPushFront(Node** pplist, int x);
// �������βɾ
void SListPopBack(Node** pplist);
// ������ͷɾ
void SListPopFront(Node** pplist);
// ���������
Node* SListFind(Node* plist, int x);
// ��������posλ��֮�����x
// ����˼��Ϊʲô����posλ��֮ǰ���룿
void SListInsertAfter(Node* pos, int x);
// ������ɾ��posλ��֮���ֵ
// ����˼��Ϊʲô��ɾ��posλ�ã�
void SListEraseAfter(Node* pos);