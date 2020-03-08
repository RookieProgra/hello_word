#include "a.h"

/********************************************************************** 
 ***************************���Ա���*********************************/

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


 
#define LIST_INIT_SIZE 100 // ���Ա�洢�ռ�ĳ�ʼ������ 
#define LISTINCREMENT 	10 // ���Ա�洢�ռ�ķ������� 

typedef struct LinearList {
	ElemType* elem; // �洢�ռ��ַ 
	int length;		// ��ǰ���� 
	int listSize;	// ��ǰ����Ĵ洢��������sizeof(ElemType)Ϊ��λ�� 
} SqList;

typedef Status (*CompareFun)(const ElemType, const ElemType);
typedef Status (*VisitFun)(const SqList sqList);
/**********************************************************************/

/*************************���Ա����***********************************************/
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
