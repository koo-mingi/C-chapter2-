#include<iostream>
#include<iomanip>
#include<conio.h>
#include<string>

using namespace std;


//int arr[10][10], x = -1, y = 0, su = 0, i, c = 0; // su는 합하는 수
//char ox;
//
//void dal(int k, int num) // num : 스위치 역할
//{
//	// 행 기준으로 열 찍기
//	while (1) {
//		for (i = 0; i < k; i++) {
//			su += 1;
//			x = x + num;
//			arr[y][x] = su;
//		}
//
//		k = k - 1;
//		if (k > 0) {
//			for (i = 0; i < k; i++) {
//				su += 1;
//				y = y + num;
//				arr[y][x] = su;
//			}
//			num = num * -1;
//		}
//		else
//			break;
//	}
//}
//
//void dal2(int k, int num) // num : 스위치 역할, 재귀함수로 구성하기
//{
//	
//	if (k > 0) {
//		for (i = 0; i < k; i++) {
//			su += 1;
//			if (c == 0) { // 행 기준으로 열 찍기
//				x = x + num; 
//			}
//			else if(c ==1) // 열 기준으로 행 찍기
//			{
//				y = y + num;
//			}
//			arr[y][x] = su;
//		}
//		if (c == 0) { // 행 기준 열 찍기가 끝나면 찍는 수를 하나 줄임
//			k = k - 1;
//			c = 1;
//		} 
//		else {  // 열 기준 행 찍기가 끝나면 스위치를 바꾸어 줌
//			c = 0;
//			num = num * -1;
//		}
//		dal2(k, num);
//	}
//}
//
//void dal3(int k, int num) {
//	if (k == 0)
//		return;
//	for (i = 0; i < 2 * k - 1; i++) {
//		if (i < k)
//			x += num;
//		else
//			y += num;
//		arr[y][x] = ++su;
//	}
//	dal(k - 1, num*(-1)); // 재귀 함수
//}
//
//void clear() {
//	x = -1;
//	y = 0;
//	su = 0;
//	c = 0;
//}
//
//void print(int n) {
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < n; j++) {
//			cout << setw(3) << arr[i][j];
//		}
//		cout << endl;
//	}
//}
//
//void main()
//{
//	int n;
//	while (1) {
//		cout << "1~10까지의 수를 입력하세요 : ";
//		cin >> n;
//
//		if (n > 10) {
//			cout << "다시 입력하세요 ";
//			cout << endl<<endl;
//			continue;
//		}
//		else {
//			dal2(n,1);
//			print(n);
//			clear();
//			cout << "계속 하시겠습니까?(Y/N) : ";
//			cin >> ox;
//
//			if (ox == 'y' || ox == 'Y')
//			{
//				cout << endl;
//				continue;
//			}
//			else 
//				break;
//		}
//	}
//}

int tab[100][100], i, j, x, y, n;

void print() {
	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			cout << setw(4) << tab[i][j];
		}
		cout << endl;
	}
}

void main() {
	cout << "홀수를 입력하세요 : ";
	cin >> n;
	x = 0;//행
	y = n / 2; // 열 가운데

	tab[x][y] = 1;

	for (i = 2; i <= n * n; i++) {
		if (i%n == 1) {
			x = x + 1;
		}
		else {
			x--;
			y++;
		}
		if (x < 0) x = n-1;
		if (y == n) y = 0;
		tab[x][y] = i;
	}
	print();
}