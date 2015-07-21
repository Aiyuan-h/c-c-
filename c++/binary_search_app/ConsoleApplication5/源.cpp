#include<iostream>
using namespace std;

struct NODE
{
	NODE* pLeft;            // ������
	NODE* pRight;          // ������
	int nMaxLeft;          // �������е������
	int nMaxRight;         // �������е������
	char chValue;        // �ýڵ��ֵ
};

int nMaxLen = 0;

struct NODE *root = new struct NODE;

struct NODE *Inseart(char x, struct NODE *t)
{
	if (t == NULL)
	{
		t = (struct NODE *)malloc(sizeof(struct NODE));
		if (t == NULL)
		{		
			t->chValue = x;
			cout << "out of space"<<endl;
		}
		else
		{
			t->pLeft = NULL;
			t->pRight = NULL;
		}
	}
	else
	{
		if (x < t->chValue)
			t->pLeft = Inseart(x, t->pLeft);
		else
		if (x>t->chValue)
			t->pRight = Inseart(x, t->pRight);
		return t;
	}
}


// Ѱ������������ξ���
void FindMaxLen(NODE* pRoot)
{
	// ������Ҷ�ӽڵ㣬����
	if (pRoot == NULL)
	{
		return;
	}

	// ���������Ϊ�գ���ô�ýڵ����������Ϊ0
	if (pRoot->pLeft == NULL)
	{
		pRoot->nMaxLeft = 0;
	}

	// ���������Ϊ�գ���ô�ýڵ���ұ������Ϊ0
	if (pRoot->pRight == NULL)
	{
		pRoot->nMaxRight = 0;
	}

	// �����������Ϊ�գ��ݹ�Ѱ�������������
	if (pRoot->pLeft != NULL)
	{
		FindMaxLen(pRoot->pLeft);
	}

	// �����������Ϊ�գ��ݹ�Ѱ�������������
	if (pRoot->pRight != NULL)
	{
		FindMaxLen(pRoot->pRight);
	}

	// ������������ڵ����
	if (pRoot->pLeft != NULL)
	{
		int nTempMax = 0;
		if (pRoot->pLeft->nMaxLeft > pRoot->pLeft->nMaxRight)
		{
			nTempMax = pRoot->pLeft->nMaxLeft;
		}
		else
		{
			nTempMax = pRoot->pLeft->nMaxRight;
		}
		pRoot->nMaxLeft = nTempMax + 1;
	}

	// ������������ڵ����
	if (pRoot->pRight != NULL)
	{
		int nTempMax = 0;
		if (pRoot->pRight->nMaxLeft > pRoot->pRight->nMaxRight)
		{
			nTempMax = pRoot->pRight->nMaxLeft;
		}
		else
		{
			nTempMax = pRoot->pRight->nMaxRight;
		}
		pRoot->nMaxRight = nTempMax + 1;
	}

	// ���������
	if (pRoot->nMaxLeft + pRoot->nMaxRight > nMaxLen)
	{
		nMaxLen = pRoot->nMaxLeft + pRoot->nMaxRight;
	}
}




int main()
{
	for (int i = 0; i < 10; i++)
	{
		Inseart(i, root);
	}

	void FindMaxLen(NODE* pRoot);
}