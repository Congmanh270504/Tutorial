//#include<conio.h>
//#include<stdio.h>
//#include<stdlib.h>
//#include<time.h>
//typedef int Itemtype;
//struct TNode
//{
//	Itemtype data;
//	TNode* Left;
//	TNode* Right;
//};
//struct Tree
//{
//	TNode* Root;
//};
//
//TNode* createTNode(int x);
//int isEmty(Tree bst);
//void NhapsoNguyenduong(int& n);
//void initTree(Tree& bst);
//void ShowBSTree_NLR(TNode* root);
//void ShowBSTree_LNR(TNode* root);
//int insertBSTnode(TNode*& root, TNode* p);
//void createBTree_Array(Tree& bst, Itemtype a[], int n);
//TNode* findBSTNode(TNode* root, Itemtype x);
//int countBSTNode(TNode* root, Itemtype x);
//int sumBSTNode(TNode* root, Itemtype x);
//int sumBSTNode_LevelK(TNode* root, Itemtype k);
//void Menu(Tree bst);
//int main()
//{
//	Tree bst;
//	int n = 7;
//	Itemtype x;
//	Itemtype a[] = { 10, 2, 20, 4, 70, 16, 54 };
//	initTree(bst);
//
//	createBTree_Array(bst, a, n);
//	Menu(bst);
//
//	
//}
//void NhapsoNguyenduong(int& n)
//{
//	do
//	{
//		printf("Nhap so muon quy doi(He 10): ");
//		scanf("%d", &n);
//		if (n < 0)
//		{
//			printf("Nhap lai n!! ");
//		}
//	} while (n < 0);
//}
//void initTree(Tree& bst)
//{
//	bst.Root = NULL;
//}
//TNode* createTNode(int x)
//{
//	TNode* p = new TNode;
//	if (p == NULL)
//	{
//		printf("Khong the cap phat node");
//		return NULL;
//	}
//	else
//	{
//		p->data = x;
//		p->Left = NULL;
//		p->Right = NULL;
//	}
//	return p;
//}
//int isEmty(Tree bt)
//{
//	return !bt.Root;// bt.Root=NULL
//}
//void createBTree_Array(Tree& bst, Itemtype a[], int n)
//{
//	
//	initTree(bst);
//	for (int i = 0; i < n; i++)
//	{
//		
//		TNode* p = createTNode(a[i]);
//		insertBSTnode(bst.Root, p);
//	}
//}
//void ShowBSTree_NLR(TNode* root)
//{
//	if (root == NULL) return;
//	printf("%4d", root->data);
//	ShowBSTree_NLR(root->Left);
//	ShowBSTree_NLR(root->Right);
//}
//void ShowBSTree_LNR(TNode* root)
//{
//	if (root == NULL) return;
//	ShowBSTree_LNR(root->Left);
//	printf("%4d", root->data);
//	ShowBSTree_LNR(root->Right);
//}
//int insertBSTnode(TNode*& root, TNode* p)
//{
//
//	if (p == NULL)
//	{
//		return 0;
//	}
//	if (root == NULL)
//	{
//		root = p;
//		return 1;
//	}
//	else
//	{
//		if (root->data == p->data)
//		{
//			return 0; // trùng giá trị nên không thêm đc 
//		}
//		if (root->data > p->data)
//		{
//			insertBSTnode(root->Left, p);// thêm p vào nhánh trái
//		}
//		else
//		{
//			insertBSTnode(root->Right, p);// thêm p vào nhánh phải 
//		}
//
//	}
//	return 1;
//
//}
//void Menu(Tree bst)
//{
//	Itemtype g, x, k;
//	do
//	{
//		printf("\n\t========================Menu========================");
//		printf("\n\t\t1.Xuat cay nhi phan\n\t\t2.Dem so nut lon hon nut X tren cay\n\t\t3.Tinh tong so nut len hon X\n\t\t4.Tinh tong cua node tai level k\n\t\t5.Tim nut X tren cay nhi phan");
//		printf("\n\t====================================================");
//		printf("\nNhap bai muon lam: ");
//		scanf("%d", &g);
//
//		switch (g)
//		{
//		case 1:
//			printf("\nCay NPTK vua tao: ");
//			ShowBSTree_LNR(bst.Root);
//			printf("\n");
//			break;
//		case 2:
//			printf("Nhap nut x: ");
//			scanf("%d", &x);
//			printf("\nSo nut tren cay NPTK la : %d", countBSTNode(bst.Root, x));
//			break;
//		case 3:
//			printf("Nhap nut x: ");
//			scanf("%d", &x);
//			printf("Tong gia tri cua cac nut tren cay len hon %d la: %d ", x, sumBSTNode(bst.Root, x));
//			break;
//		case 4:
//			printf("Nhap muc muon tinh : ");
//			scanf("%d", &k);
//			printf("Tong cua gia tri cua cac node tai level %d la : ", k, sumBSTNode_LevelK(bst.Root, k));
//			break;
//		case 5:
//			printf("Nhap nut x can tim : ");
//			scanf("%d", &x);
//			if (findBSTNode(bst.Root, x) == NULL)
//			{
//				printf("Khong tim thay nut %d tren cay!! ", x);
//			}
//			else
//			{
//				printf("Tim thay nut %d tren cay!! ", x);
//			}
//			break;
//		case 0:
//
//			break;
//		default:
//			printf("Khong co bai vua chon!! ");
//			break;
//		}
//	} while (g != 0);
//}
//TNode* findBSTNode(TNode* root, Itemtype x)
//{
//	if (root == NULL)
//	{
//		return NULL;
//	}
//	if (root->data == x)
//	{
//		return root; // tìm đc thì dừng
//	}
//	else if (root->data > x)
//	{
//		findBSTNode(root->Left, x);
//	}
//	else
//	{
//		findBSTNode(root->Right, x);
//	}
//}
//int countBSTNode(TNode* root, Itemtype x)
//{
//	if (!root) return 0;
//	int cln = countBSTNode(root->Left, x);
//	int crn = countBSTNode(root->Right, x);
//	if (root->data > x)
//		return 1 + cln + crn;
//	else
//		return cln + crn;
//
//}
//int sumBSTNode(TNode* root, Itemtype x)
//{
//	if (!root) return 0;
//	int sln = countBSTNode(root->Left, x);
//	int srn = countBSTNode(root->Right, x);
//	if (root->data > x)
//		return root->data + sln + srn;
//	else
//		return sln + srn;
//
//}
//int sumBSTNode_LevelK(TNode* root, Itemtype k)
//{
//	if (!root) return 0;
//	if (k == 0)	return root->data;
//	k--;
//	int sln = countBSTNode(root->Left, k);
//	int srn = countBSTNode(root->Right, k);
//	return sln + srn;
//}
