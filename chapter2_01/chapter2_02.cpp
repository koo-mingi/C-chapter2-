#include<iostream>
#include<conio.h>
#include<iomanip>
#include<stdio.h>
using namespace std;
// matrix show �װ��� ����

//void print(int temp[5][5]) {
//
//	for (int i = 0; i < 5; i++) {
//		for (int j = 0; j < 5; j++) {
//			cout << setw(4) << temp[i][j];
//		}
//		cout << endl;
//	}
//	cout << endl;
//}
//
//void matrix1()
//{
//	int tab[5][5];
//	int cnt = 1;
//	for (int i = 0; i < 5; i++) {
//		for (int j = 0; j < 5; j++) {
//			tab[i][j] = cnt++;
//		}
//	}
//	print(tab);
//}
//
//void matrix2() {
//	int tab[5][5];
//	int cnt = 1;
//	for (int i = 4; i >=0; i--) {
//		for (int j = 0; j < 5; j++) {
//			tab[j][i] = cnt++;
//		}
//	}
//	print(tab);
//}
//
//void matrix3() {
//	int tab[5][5];
//	int cnt = 1;
//	for (int i = 4; i >= 0; i--) {
//		for (int j = 0; j < 5; j++) {
//			tab[i][j] = cnt++;
//		}
//	}
//	print(tab);
//}
//
//void matrix4() {
//	int tab[5][5];
//	int cnt = 1;
//	for (int i = 0; i <5; i++) {
//		for (int j = 4; j >=0; j--) {
//			tab[j][i] = cnt++;
//		}
//	}
//	print(tab);
//}
//
//void matrix5() {
//	int tab[5][5];
//	int cnt = 1;
//	for (int i = 0; i < 5; i++) {
//		if ((i % 2) == 0) {
//			for (int j = 0; j < 5; j++) {
//				tab[i][j] = cnt++;
//			}
//		}
//		else {
//			for (int j = 4; j >=0; j--) {
//				tab[i][j] = cnt++;
//			}
//		}
//	}
//	print(tab);
//}
//
//void matrix6() {
//
//	int size;
//	cout << "���ڸ� �Է��ϼ��� : ";
//	cin >> size;
//
//
//	int tab[100][100];
//	int cnt = 1;
//	for (int i = 0; i < size; i++) {
//		if ((i % 2) == 0) {
//			for (int j = 0; j < size; j++) {
//				tab[i][j] = cnt++;
//			}
//		}
//		else {
//			for (int j = (size-1); j >= 0; j--) {
//				tab[i][j] = cnt++;
//			}
//		}
//	}
//
//	for (int i = 0; i < size; i++) {
//		for (int j = 0; j <size; j++) {
//			cout << setw(6) << tab[i][j];
//		}
//		cout << endl;
//	}
//	cout << endl;
//}
//
//int main() {
//
//	int num;
//	while (true) {
//		cout << "The Four Type of Matrix <1> <2> <3> <4> <5> <6>" << endl;
//		cout << "���α׷� ���� �Ͻ÷��� 0�� �������� : ";
//		cin >> num;
//		 /* 
//			1. _getch();�� ����� ���,
//		    2. num = _getch();
//		    3. num�� ��� ���ڴ� �ƽ�Ű�ڵ�
//			4. if(num == '0') �̷��� ���� �������� ��
//		*/
//		if(num==0) return 0;
//
//		switch (num)
//		{
//		case 1:
//			matrix1();
//			break;
//		case 2:
//			matrix2();
//			break;
//		case 3:
//			matrix3();
//			break;
//		case 4:
//			matrix4();
//			break;
//		case 5:
//			matrix5();
//			break;
//		case 6:
//			matrix6();
//			break;
//		default:
//			break;
//		}
//	}
//
//}


// ����
// 1. �������� : ���� ���� ����
// 2. �������� : ū ���� ����
// 3. �������� : key���� �̿��ؼ� ����

// 1. ���� ����

//int i, j, temp;
//int tab[5] = { 9,5,10,3,2 };
//
//void print()
//{
//	for (i = 0; i < 5; i++) {
//		cout << setw(5) << tab[i];
//	}
//	cout << endl;
//}
//
//void main() {
//	for (i = 0; i < 5 - 1; i++) {  // ������ ���� ���� �ʿ䰡 ����.
//		for (j = i + 1; j < 5; j++)   // i�� ���� ����� ����.
//		{
//			if (tab[i] >= tab[j]) {
//				temp = tab[i];
//				tab[i] = tab[j];
//				tab[j] = temp;
//			}
//		}
//	}
//	print();
//}

// 2. ���� ����
//int i, j, temp;
//int tab[5] = { 9,5,10,3,2 };
//
//void print()
//{
//	for (i = 0; i < 5; i++) {
//		cout << setw(5) << tab[i];
//	}
//	cout << endl;
//}
//
//void main() {
//
//	// �Է¹ޱ�
//	for (i = 0; i < 5; i++) {
//		cout << "���ڸ� �Է��ϼ��� : ";
//		cin >> tab[i];
//	}
//	cout << endl;
//	cout << "���� ���� ����" << endl;
//	print();
//
//	// ����
//	for (i = 0; i < 5 - 1; i++) {  // ������ ���� ���� �ʿ䰡 ����.
//		for (j = 0; j <(4-i); j++)   //
//		{
//			if (tab[j] >= tab[j+1]) {
//				temp = tab[j];
//				tab[j] = tab[j+1];
//				tab[j+1] = temp;
//			}
//		}
//	}
//	cout << "���� ��" << endl;
//	print();
//}

// 3. ���� ����
/* 2�� ° ���� �ӽ� �濡�ٰ� �־���� �����Ѵ�.*/

//int i, j, temp;
//int tab[5] = { 9,5,10,3,2 };
//
//void print()
//{
//	for (i = 0; i < 5; i++) {
//		cout << setw(5) << tab[i];
//	}
//	cout << endl;
//}
//
//void main() {
//
//	// �Է¹ޱ�
//	for (i = 0; i < 5; i++) {
//		cout << "���ڸ� �Է��ϼ��� : ";
//		cin >> tab[i];
//	}
//	cout << endl;
//	cout << "���� ���� ����" << endl;
//	print();
//
//	// ����
//	for (i = 1; i < 5; i++) {  // 2��° ������ ������ ����. key �� ����
//		temp = tab[i]; // temp= tab[1]�� ����
//		j = i - 1;  //key���� �ٷ� �տ������� ��
//		while (j >= 0 && tab[j] > temp) {
//			tab[j + 1] = tab[j]; // ���� j = 0�̸� tab[1]�� tab[0]���� �־���
//				j--;             // j = -1;
//			tab[j + 1] = temp;   // tab[0]�� temp=key��=tab[1]�� �־���.
//		}
//	}
//	cout << "���� ��" << endl;
//	print();
//}


// ���� ����

//int i, j, key;
//int tab[5] = { 9,5,10,3,2 };
//
//void print()
//{
//	for (i = 0; i < 5; i++) {
//		cout << setw(5) << tab[i];
//	}
//	cout << endl;
//}
//
//void main() {
//
//	// �Է¹ޱ�
//	/*for (i = 0; i < 5; i++) {
//		cout << "���ڸ� �Է��ϼ��� : ";
//		cin >> tab[i];
//	}*/
//	cout << endl;
//	cout << "���� ���� ����" << endl;
//	print();
//
//	for (i = 1; i < 5; i++) {
//		
//		key = tab[i];
//	/*	for (j = i - 1; j >= 0; j--) {	
//			if (tab[j] <= key)
//				break;
//			tab[j + 1] = tab[j];
//		}*/
//
//		j = i - 1;
//		while (tab[j] > key) {
//			tab[j + 1] = tab[j];
//			j--;
//			if (j < 0)
//				break;
//		}
//		tab[j + 1] = key;
//	}
//		   
//	cout << "���� ��" << endl;
//	print();
//}


 // �̺� �˻�
 // ���� ������ �Ŀ� ������� ã�Ƴ���.

//int i, j, key; // ���Ŀ�
//int tab[11] ;
//
//void print()
//{
//	for (i = 0; i < 11; i++) {
//		cout << setw(5) << tab[i];
//	}
//	cout << endl;
//}
//
//int BS(int E[], int L, int H, int k) {
//	int M;
//	while (L<=H) { // ����, L>H�� �Ǹ� -99�� ������
//		M = (L + H) / 2;
//		if (E[M] > k) {
//			H = M - 1;
//		}
//		else if(E[M] <k){
//			L = M + 1;
//		}
//		else if(E[M]==k){
//			return M+1;
//		}	
//	}
//	
//	return -99;
//}
//
//void main() {
//	int num;
//	int index;
//	// �Է¹ޱ�
//	for (i = 0; i < 11; i++) {
//		cout << "���ڸ� �Է��ϼ��� : ";
//		cin >> tab[i];
//	}
//	cout << endl;
//	cout << "���� ���� ����" << endl;
//	print();
//
//	// ����
//	for (i = 1; i < 11; i++) {  // 2��° ������ ������ ����. key �� ����
//		key = tab[i]; // temp= tab[1]�� ����
//		j = i - 1;  //key���� �ٷ� �տ������� ��
//		while (j >= 0 && tab[j] > key) {
//			tab[j + 1] = tab[j]; // ���� j = 0�̸� tab[1]�� tab[0]���� �־���
//				j--;             // j = -1;
//			tab[j + 1] = key;   // tab[0]�� temp=key��=tab[1]�� �־���.
//		}
//	}
//	cout << "���� ��" << endl;
//	print();
//		   
//	// �̺� �˻�
//	cout << "ã���� �ϴ� ���� �Է��ϼ���: ";
//	cin >> num;
//
//	index = BS(tab, 0, 10, num);
//	if (index == -99) cout << "ã���� �ϴ� ���ڰ� ���׿�" << endl;
//	else cout << "ã���� �ϴ� ���� " << num << " �� " << index << "�� °�� �ִ�"<<endl;
//}


void print(int tab[],int n)
{
	for (int i = 0; i < n; i++) {
		cout << setw(5) << tab[i];
	}
	cout << endl;
}

int BS(int E[], int L, int H, int k) {
	int M;
	while (L <= H) { // ����, L>H�� �Ǹ� -99�� ������
		M = (L + H) / 2;
		if (E[M] > k) {
			H = M - 1;
		}
		else if (E[M] < k) {
			L = M + 1;
		}
		else if (E[M] == k) {
			return M + 1;
		}
	}

	return -99;
}
void jung(int tab[], int n) {
	int key,j;

	for (int i = 1; i < n; i++) {  // 2��° ������ ������ ����. key �� ����
		key = tab[i]; // temp= tab[1]�� ����
		j = i - 1;  //key���� �ٷ� �տ������� ��
		while (j >= 0 && tab[j] > key) {
			tab[j + 1] = tab[j]; // ���� j = 0�̸� tab[1]�� tab[0]���� �־���
			j--;             // j = -1;
			tab[j + 1] = key;   // tab[0]�� temp=key��=tab[1]�� �־���.
		}
	}
}

void main() {

	int tab[50];
	int num,i=0;
	int index;
	
	cout << "���ڸ� �Է��ϼ��� (����� 0)"<<endl;
	while (1) {
		cin >> num;
		if (num == 0)
			break;

		tab[i] = num;
		i++;
	}

	print(tab, i);

	// ����
	jung(tab, i);
	cout << "���� ��" << endl;
	print(tab, i);

	// �̺� �˻�
	cout << "ã���� �ϴ� ���� �Է��ϼ��� : ";
	cin >> num;

	index = BS(tab, 0, i, num);

	if (index == -99) cout << "ã���� �ϴ� ���ڰ� ���׿�" << endl;
	else cout << "ã���� �ϴ� ���� " << num << " �� " << index << "�� °�� �ִ�"<<endl;
}