#include"linkedList_noHead.h"
// 动态申请一个节点
Node* BuyNode(int x) {
	return new Node(x);
}
// 单链表打印
void SListPrint(Node* plist) {
}
// 单链表尾插
void SListPushBack(Node** pplist, int x);
// 单链表的头插
void SListPushFront(Node** pplist, int x);
// 单链表的尾删
void SListPopBack(Node** pplist);
// 单链表头删
void SListPopFront(Node** pplist);
// 单链表查找
Node* SListFind(Node* plist, int x);
// 单链表在pos位置之后插入x
// 分析思考为什么不在pos位置之前插入？
void SListInsertAfter(Node* pos, int x);
// 单链表删除pos位置之后的值
// 分析思考为什么不删除pos位置？
void SListEraseAfter(Node* pos);