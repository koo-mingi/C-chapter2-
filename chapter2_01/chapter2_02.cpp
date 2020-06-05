#include<iostream>
#include<conio.h>
#include<iomanip>
#include<stdio.h>
using namespace std;
// matrix show 네가지 유형

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
//	cout << "숫자를 입력하세요 : ";
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
//		cout << "프로그램 종료 하시려면 0을 누르세요 : ";
//		cin >> num;
//		 /* 
//			1. _getch();를 사용할 경우,
//		    2. num = _getch();
//		    3. num에 담긴 숫자는 아스키코드
//			4. if(num == '0') 이렇게 문자 형식으로 비교
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


// 정렬
// 1. 선택정렬 : 작은 값을 정렬
// 2. 버블정렬 : 큰 값을 정렬
// 3. 삽입정렬 : key값을 이용해서 정렬

// 1. 선택 정렬

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
//	for (i = 0; i < 5 - 1; i++) {  // 마지막 방은 돌릴 필요가 없다.
//		for (j = i + 1; j < 5; j++)   // i의 다음 방부터 비교함.
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

// 2. 버블 정렬
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
//	// 입력받기
//	for (i = 0; i < 5; i++) {
//		cout << "숫자를 입력하세요 : ";
//		cin >> tab[i];
//	}
//	cout << endl;
//	cout << "현재 정렬 상태" << endl;
//	print();
//
//	// 정렬
//	for (i = 0; i < 5 - 1; i++) {  // 마지막 방은 돌릴 필요가 없다.
//		for (j = 0; j <(4-i); j++)   //
//		{
//			if (tab[j] >= tab[j+1]) {
//				temp = tab[j];
//				tab[j] = tab[j+1];
//				tab[j+1] = temp;
//			}
//		}
//	}
//	cout << "정렬 후" << endl;
//	print();
//}

// 3. 삽입 정렬
/* 2번 째 값을 임시 방에다가 넣어놓고 시작한다.*/

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
//	// 입력받기
//	for (i = 0; i < 5; i++) {
//		cout << "숫자를 입력하세요 : ";
//		cin >> tab[i];
//	}
//	cout << endl;
//	cout << "현재 정렬 상태" << endl;
//	print();
//
//	// 정렬
//	for (i = 1; i < 5; i++) {  // 2번째 값부터 정렬을 시작. key 값 추출
//		temp = tab[i]; // temp= tab[1]로 시작
//		j = i - 1;  //key값의 바로 앞에서부터 비교
//		while (j >= 0 && tab[j] > temp) {
//			tab[j + 1] = tab[j]; // 만약 j = 0이면 tab[1]에 tab[0]값을 넣어줌
//				j--;             // j = -1;
//			tab[j + 1] = temp;   // tab[0]에 temp=key값=tab[1]을 넣어줌.
//		}
//	}
//	cout << "정렬 후" << endl;
//	print();
//}


// 삽입 정렬

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
//	// 입력받기
//	/*for (i = 0; i < 5; i++) {
//		cout << "숫자를 입력하세요 : ";
//		cin >> tab[i];
//	}*/
//	cout << endl;
//	cout << "현재 정렬 상태" << endl;
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
//	cout << "정렬 후" << endl;
//	print();
//}


 // 이분 검색
 // 값을 정렬한 후에 가운데부터 찾아나감.

//int i, j, key; // 정렬용
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
//	while (L<=H) { // 만약, L>H가 되면 -99를 리턴함
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
//	// 입력받기
//	for (i = 0; i < 11; i++) {
//		cout << "숫자를 입력하세요 : ";
//		cin >> tab[i];
//	}
//	cout << endl;
//	cout << "현재 정렬 상태" << endl;
//	print();
//
//	// 정렬
//	for (i = 1; i < 11; i++) {  // 2번째 값부터 정렬을 시작. key 값 추출
//		key = tab[i]; // temp= tab[1]로 시작
//		j = i - 1;  //key값의 바로 앞에서부터 비교
//		while (j >= 0 && tab[j] > key) {
//			tab[j + 1] = tab[j]; // 만약 j = 0이면 tab[1]에 tab[0]값을 넣어줌
//				j--;             // j = -1;
//			tab[j + 1] = key;   // tab[0]에 temp=key값=tab[1]을 넣어줌.
//		}
//	}
//	cout << "정렬 후" << endl;
//	print();
//		   
//	// 이분 검색
//	cout << "찾고자 하는 수를 입력하세요: ";
//	cin >> num;
//
//	index = BS(tab, 0, 10, num);
//	if (index == -99) cout << "찾고자 하는 숫자가 없네요" << endl;
//	else cout << "찾고자 하는 숫자 " << num << " 은 " << index << "번 째에 있다"<<endl;
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
	while (L <= H) { // 만약, L>H가 되면 -99를 리턴함
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

	for (int i = 1; i < n; i++) {  // 2번째 값부터 정렬을 시작. key 값 추출
		key = tab[i]; // temp= tab[1]로 시작
		j = i - 1;  //key값의 바로 앞에서부터 비교
		while (j >= 0 && tab[j] > key) {
			tab[j + 1] = tab[j]; // 만약 j = 0이면 tab[1]에 tab[0]값을 넣어줌
			j--;             // j = -1;
			tab[j + 1] = key;   // tab[0]에 temp=key값=tab[1]을 넣어줌.
		}
	}
}

void main() {

	int tab[50];
	int num,i=0;
	int index;
	
	cout << "숫자를 입력하세요 (종료는 0)"<<endl;
	while (1) {
		cin >> num;
		if (num == 0)
			break;

		tab[i] = num;
		i++;
	}

	print(tab, i);

	// 정렬
	jung(tab, i);
	cout << "정렬 후" << endl;
	print(tab, i);

	// 이분 검색
	cout << "찾고자 하는 값을 입력하세요 : ";
	cin >> num;

	index = BS(tab, 0, i, num);

	if (index == -99) cout << "찾고자 하는 숫자가 없네요" << endl;
	else cout << "찾고자 하는 숫자 " << num << " 은 " << index << "번 째에 있다"<<endl;
}