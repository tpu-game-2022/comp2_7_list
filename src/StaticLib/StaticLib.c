#include "Windows.h"                    // Windows API の機能定義
#include "../include/lib_func.h"
// ノードを初期化
void initialize_node(node* p, int val)
{
	p->pNext = NULL;
	p->data = val;
}
// リストを初期化
void initialize_list(list* l)
{
	l->header = NULL;
}
// 先頭にデータを追加
void push_front(list* l, node* p)
{
	// ToDo: リストにノードを追加するソースコードを実装する
	if (l == NULL || p == NULL)
	{
		return;
	}
	p->pNext = l->header;
	l->header = p;
}

// pの次のノードを削除
void remove_next(list* l, node* p)
{
	// ToDo: リストからpで指定したノードの次のノードを削除する
	if (l == NULL || p == NULL || p->pNext == NULL)
	{
		return;
	}
	node* x = p->pNext;
	p->pNext = x->pNext;
	x->pNext = NULL;
}

