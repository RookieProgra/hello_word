#include "../inc/LineraList.h"

// 构造一个空的线性表 sqList,成功返回SUCCESS，失败返回 FAILED 
// 使用者在调用后需要释放内存 ,或调用DestoryList函数释放 
Status InitList(SqList* sqList)
{
	sqList->elem = (ElemType* )malloc(sizeof(Elemtype) * LIST_INIT_SIZE);
	if(sqList->elem == NULL){
		printf("error: malloc failed. -> %s, %s, %s, %s, %d",
			 __FILE__, __func__, __DATE__, __TIME__, __LINE__);
		return FAILED;
	} 
	sqList->length = 0;
	sqList->listSize = LIST_INIT_SIZE;
	
	return SUCCESS;
}

Status DestoryList(SqList* sqList)
{
	
} 
Status ClearList(SqList* sqList);
Status ListIsEmpty(const SqList sqList);
Status GetElem(const SqList sqList, unsigned int position, ElemType* elem); 
Status LocateElem(const SqList sqList, const ElemType elem, CompareFun compare);
Status PriorElem(const SqList sqList, const ElemType curElem, ElemType* preElem);
Status NextElem(const SqList sqList, const ElemType curElem, ElemType* nextElem);
Status ListInsert(SqList* sqList, const unsigned int position, ElemType elem);
Status ListDelete(SqList* sqList, const unsigned int position, ElemType* elem);
Status ListTraverse(const SqList sqList, VisitFun visit); 
