#include<iostream>
#include<iomanip>
#include <array>
using namespace std;

//void main() {
//	char a[6]={ 'C','&','C','+','+','\0' };
//	char b[3][4]=
//	{
//		{'A','B','C','\0'}, //'\0'을 굳이 넣지 않아도 됨.
//		{'D','E','F','\0'},
//		{'G','H','I','\0'}
//	};
//
//	cout <<"1차원 배열 : "<< a << endl;
//	cout << "***** 2차원 배열(3행3열) *****" << endl;
//	cout << b[0] << endl;
//	cout << b[1] << endl;
//	cout << b[2] << endl;
//	
//}

// 배열 기본 실습2

//int a[5] = { 1,2,3,4,5 };
//
//void main() {
//	for (int i = 0; i < 5; i++) {
//		a[i] = i + 1;
//		cout << a[i] << ", ";
//	}
//}

// ============================================

//int b[3][3], i, j, cnt;
//
//void main() {
//	for (i = 0; i < 3; i++) {
//		for (j = 0; j < 3; j++) {
//			b[i][j] = ++cnt;
//			cout << b[i][j] << " ";
//		}
//		cout << endl;
//	}
//}

//int i, tab[10];
//void print()
//{
//	for (i = 0; i < 10; i++) {
//		cout << tab[i] << " ";
//		if ((i + 1) % 3 == 0) cout << endl;
//	}
//}
//
//
//
//void main() {
//	//입력
//	for (i = 0; i < 10; i++) {
//		tab[i] = i + 1;
//	}
//	//출력
//	print();
//}

//int i, j, cnt, tab[4][4];
//void sum() {
//
//
//	for (i = 0; i < 3; i++) {
//		for (j = 0; j < 3; j++) {
//			// 행의 합
//			tab[i][3] = tab[i][3] + tab[i][j];
//
//			// 열의 합
//			tab[3][i] = tab[3][i] + tab[j][i];
//
//			// 모든 합
//			tab[3][3] = tab[3][3] + tab[i][j];
//		}		
//	}
//}
//
//void print() {
//
//	for (i = 0; i < 4; i++) {
//		for (j = 0; j < 4; j++) {
//			cout <<setw(4)<< tab[i][j];
//		}
//		cout << endl;
//	}
//}
//
//void main() {
//	for (i = 0; i < 3; i++) {
//		for (j = 0; j < 3; j++) {
//			tab[i][j] = ++cnt;
//		}
//	}
//	sum();
//	print();
//
//}

// matrix show 네가지 유형