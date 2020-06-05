#include<iostream>
#include<iomanip>
#include<conio.h>
#include<string>

using namespace std;

//int i, len;
//char tab[40], lr, temp;
//
//void print() {
//
//	for (i = 0; i < len; i++) {
//		cout << setw(2) << tab[i];
//	}
//	cout << endl;
//}
//
//void input() {
//	cout << "문자열을 입력하세요 : ";
//	cin >> tab;
//}
//
//
//void right() {
//
//	temp = tab[len - 1];
//	for (i = len - 1; i >= 0; i--) {
//		tab[i] = tab[i - 1];
//	}
//	tab[0] = temp;
//	print();
//	
//}
//
//void left() {
//	temp = tab[0];
//	for (i = 0; i < len; i++) {
//		tab[i] = tab[i + 1];
//	}
//	tab[len - 1] = temp;
//	print();
//}
//
//void main() {
//	
//	input();
//	len = strlen(tab);
//	print();
//	while (1) {
//		lr = _getch();
//		if (lr == 'R' || lr == 'r')
//			right();
//		else if (lr == 'L' || lr == 'l')
//			left();
//		else
//			break;
//	}
//
//
//}


// 달팽이 배열

void main() {

	int A[5][5], N = 0, i = 0, S = 1, J = -1,K=5;

	while (1) {
		// 행 중심으로 열을 찍음
		for (int P = 0; P < K; P++) {
			N += 1;
			J = J + S; // s는 스위치. 찍는 방향을 바꾸어 줌.
			A[i][J] = N;
		}

		K = K - 1;
		// 열을 중심으로 행을 찍음
		if (K > 0) {
			for (int P = 0; P < K; P++) {
				N += 1;
				i = i + S;
				A[i][J] = N;
			}
			S = S * -1;
		}
		else
			break;
	}

	// 출력
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++) {
			cout << setw(3) << A[i][j];
		}
		cout << endl;
	}

}