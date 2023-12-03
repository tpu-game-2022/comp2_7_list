﻿#define WIN32_LEAN_AND_MEAN             // Windows ヘッダーからほとんど使用されていない部分を除外する
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
	if (p != NULL)
	{
		p->pNext = l->header;
		l->header = p;
	}

	else
	{
		return NULL;
	}
}

// pの次のノードを削除
void remove_next(list* l, node* p)
{
	// ToDo: リストからpで指定したノードの次のノードを削除する
	if (p->pNext != NULL)
	{
		p->pNext = p->pNext->pNext;
	}

	else
	{
		return NULL;
	}
}


// pの次のノードを取得
node* get_next(node* p)
{
	if (!p) return NULL;

	return p->pNext;
}
