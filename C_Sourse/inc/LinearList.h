#include "a.h"

/********************************************************************** 
 ***************************线性表定义*********************************/

typedef unsigned int Status;
#define SUCCESS 0;
#define FAILED 1;
#define ERROR 2;
#define OK 0;
#define FAIL 1; 
#define FREEPTR freePtr;
#define freePtr(ptr) {	\
	if(ptr == NULL){	\
		ptr = NULL;	 	\	
	} esle { 			\
		free(ptr);		\
	}					\
} 						\

struct ElemType{
	int elem;
};


 
#define LIST_INIT_SIZE 100 // 线性表存储空间的初始分配量 
#define LISTINCREMENT 	10 // 线性表存储空间的分配增量 

typedef struct LinearList {
	ElemType* elem; // 存储空间基址 
	int length;		// 当前长度 
	int listSize;	// 当前分配的存储容量（以sizeof(ElemType)为单位） 
} SqList;

typedef Status (*CompareFun)(const ElemType, const ElemType);
typedef Status (*VisitFun)(const SqList sqList);
/**********************************************************************/

/*************************线性表操作***********************************************/
Status InitList(SqList* sqList);
Status DestoryList(SqList* sqList);
Status ClearList(SqList* sqList);
Status ListIsEmpty(const SqList sqList);
Status GetElem(const SqList sqList, unsigned int position, ElemType* elem); 
Status LocateElem(const SqList sqList, const ElemType elem, CompareFun compare);
Status PriorElem(const SqList sqList, const ElemType curElem, ElemType* preElem);
Status NextElem(const SqList sqList, const ElemType curElem, ElemType* nextElem);
Status ListInsert(SqList* sqList, const unsigned int position, ElemType elem);
Status ListDelete(SqList* sqList, const unsigned int position, ElemType* elem);
Status ListTraverse(const SqList sqList, VisitFun visit); 
/************************************************************************************/
