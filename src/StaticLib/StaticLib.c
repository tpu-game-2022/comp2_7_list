#define WIN32_LEAN_AND_MEAN             // Windows ヘッダーからほとんど使用されていない部分を除外する
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
// 先頭にデータを追加
void push_front(list* l, node* p)
{
    // 新しいノードの次のノードを現在の先頭ノードに設定します
    p->pNext = l->header;
    // リストの先頭ノードを新しいノードに設定します
    l->header = p;
}

// pの次のノードを削除
void remove_next(list* l, node* p)
{
    // pの次のノードが存在しない場合は処理を終了します
    if (!p || !p->pNext) return;

    // pの次のノードを一時的に保持
    node* temp = p->pNext;
    // pの次のノードを削除対象の次のノードに設定
    p->pNext = temp->pNext;
    // 削除対象のノードを解放
    free(temp);
}

// pの次のノードを取得
node* get_next(node* p)
{
    // pの次のノードを返します
    if (!p) return NULL;
    return p->pNext;
}