#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
struct TNode
{
	int data;
	TNode* Left;
	TNode* Right;
};
struct BSTree
{
	TNode* Root; // cây có cái gốc 
};
void initTree(BSTree& bst);// khởi tạo cây 
int isEmty(BSTree bst);// kiểm tra cây rỗng
//===================================================== Duyệt(Xuất) Cây	=========================================================
int tranverseLNR(TNode* root);// Duyệt cây Left-Node-Right có thể coi là đây là phần xuất ra của cây
int tranverseLRN(TNode* root);// Duyệt cây Left-Right-Node có thể coi là đây là phần xuất ra của cây
//===================================================== Tạo =========================================================

TNode* createTNode(int x);// tạo node cho cây
void createTreefromArray(BSTree& bst, int a[], int n); // Tạo Cây
//===================================================== Thêm Node vào cây =========================================================

int insertTNode(TNode*& root, TNode* p);// Khác với cái createTNode thì cái này là thêm vào cây cái kia chỉ có là tạo thôi 

//===================================================== CÁC HÀM BÀI TẬP	=========================================================
TNode* findBTNode(BSTree bst, TNode* root, int x);
int countBSTree_GreaterX(BSTree bst, TNode* root, int x);// Đếm số nút lớn hơn nút X 
int sumBSTree_GreaterX(BSTree bst, TNode* root, int x);// Tính tổng các node lớn hơn node X
int sumBSTree_levelK(BSTree bst, TNode* root, int k);// Tính tổng các node tại mức k

//======================================================Quest===========================================================
//								Là khi nào xài bst.Root và khi nào xài TNode ???
int main()
{
	BSTree bst;
	int n = 8, x;
	int a[] = { 44,60,50,46,12,97,11,55 };
	
	printf("Cay vua khoi tao la (LNR): ");
	createTreefromArray(bst, a, n);
	tranverseLNR(bst.Root);// xài bst.Root là để cho nó có cái gốc là cái Root 
	printf("\nNhap phan tu : ");
	scanf("%d", &x);
	if (findBTNode(bst,bst.Root,x)==NULL)
	{
		printf("Deo co !! " );
	}
	else
	{
		printf("Tim thay phan tu %d tren cay ", x);
	}


	_getch();
}
void initTree(BSTree& bst)
{
	bst.Root = NULL;
}
int isEmty(BSTree bst)
{
	if (bst.Root == NULL)
		return 1;
	else
		return 0;
}
TNode* createTNode(int x)
{
	TNode* p = new TNode;
	if (p == NULL)
	{
		return 0;
	}
	p->data = x;
	p->Left = NULL;
	p->Right = NULL;
}
void createTreefromArray(BSTree& bst, int a[], int n)
{
	initTree(bst);
	for (int i = 0; i < n; i++)
	{

		TNode* p = createTNode(a[i]);
		insertTNode(bst.Root, p);
	}

}
int tranverseLNR(TNode* root)// Duyệt cây Left-Node-Right có thể coi là đây là phần xuất ra của cây (cái này là duyệt cây từ nhỏ đến lớn)
{

	if (root == NULL)return 0;
	tranverseLNR(root->Left);
	printf("%4d", root->data);
	tranverseLNR(root->Right);
}
int tranverseLRN(TNode* root)// Duyệt cây Left-Right-Node có thể coi là đây là phần xuất ra của cây
{
	if (root == NULL)return 0;
	tranverseLNR(root->Left);
	tranverseLNR(root->Right);
	printf("%4d", root->data);
}
int insertTNode(TNode*& root, TNode* p)// Khác với cái createTNode thì cái này là thêm vào cây cái kia chỉ có là tạo thôi 
{
	if (p == NULL)
	{
		return 0;
	}
	if (root == NULL) // nếu cây đang rỗng 
	{
		root = p; // cái node p là cái node gốc luôn 
		return 1;
	}
	else
	{
		if (root->data == p->data)// nếu là mà trùng data thì return
		{
			printf("Trung du lieu!! ");
			return 0;
		}
		else if (root->data > p->data)// nếu bé hơn thì về bên trái
			insertTNode(root->Left, p);// gọi hàm đệ quy
		else// lớn hơn thì về bên pải 
			insertTNode(root->Right, p);
		// Đệ quy ứng với mỗi cái root->Right nó sẽ thay đổi cái node đó
		// rồi nó cứ chạy tiếp cho đến chỗ cần thêm
	}
	return 1;
}
TNode* findBTNode(BSTree bst, TNode* root, int x)
{
	if (isEmty(bst) == 1)
	{
		return 0;
	}
	if (root->data == x)
	{
		return root;// Nếu tìm thấy cái data thì thì trả về cái node đó 
	}
	else
	{
		if (root->data > x)
			findBTNode(bst, root->Left, x);// Nếu chưa tìm thấy mà cái x nhỏ hơn cái data thì về bên trái tìm chạy lại đệ quy vô cái dòng 106 nếu tìm thấy thì trả về 
		else
		{
			findBTNode(bst, root->Right, x);// Tương tự nhưng mà về bên pải 
		}
	}

}
int countBSTree_GreaterX(BSTree bst, TNode* root, int x)// maybe đệ quy vs cái số lần lặp lại thì nó sẽ lm cái node cuối của cái cây
{
	if (isEmty(bst) == 1)
	{
		return 0;
	}
	int cln = countBSTree_GreaterX(bst, root->Left, x);// Mình tạo cái kiểu dữ liệu để nó lưu cái số lượng phần bên trái
	int crn = countBSTree_GreaterX(bst, root->Right, x);//
	if (root->data > x)
	{
		return 1 + cln + crn;// Cần tìm hiều thêm
	}
	else
	{
		return cln + crn;
	}
}
int sumBSTree_GreaterX(BSTree bst, TNode* root, int x)
{
	if (isEmty(bst) == 1)
	{
		return 0;
	}
	if (root->data > x)
		return root->data + sumBSTree_GreaterX(bst, root->Left, x) + sumBSTree_GreaterX(bst, root->Right, x); // thay vì tạo kiểu int thì trả nó về theo kiểu vầy luôn
	else
		return sumBSTree_GreaterX(bst, root->Left, x) + sumBSTree_GreaterX(bst, root->Right, x);
}
int sumBSTree_levelK(BSTree bst, TNode* root, int k)
{
	if (isEmty(bst) == 1)
	{
		return 0;
	}
	if (k == 0)
	{
		return root->data;
	}
	k--;
	return sumBSTree_levelK(bst, root->Left, k) + sumBSTree_levelK(bst, root->Left, k);
}