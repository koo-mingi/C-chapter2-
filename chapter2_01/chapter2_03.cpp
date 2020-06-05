#include<iostream>
#include<iomanip>
#include<conio.h>
#include<string>

using namespace std;

char tab[100], a;
int i, l, n;

int main() {
	//char tab[] = "abcde";
	//int l;

	//l = strlen(tab); // 문자열 길이

	//cout << "문자열 : " << tab << " 의 길이 : " << l << endl;

	// 문자열의 복사
	/*char tab[] = "abcde";
	cout << "strcopy 명령이 수행 전 문자열 tab의 내용은 " << tab << " 입니다." << endl;

	strcpy_s(tab, "XYZ");
	cout << "strcopy 명령이 수행 후 문자열 tab의 내용은 " << tab << " 입니다." << endl;*/

	//문자열 이어주기
	/*char tab[7] = "abc";
	cout << "strcat 명령이 수행되기 전 문자열의 내용은 : " << tab << endl;

	strcat_s(tab, "XYZ");
	cout << "strcat 명령이 수행된 후 문자열의 내용은 : " << tab << endl;*/
	
	//문자열 비교

	/*char tab[] = "abc", tab1[] = "xyz", tab2[] = "abc";
	int n;
	n = strcmp(tab, tab1);
	cout << "문자열 tab 의 내용은 : " << tab << " 입니다." << endl;
	cout << "문자열 tab1의 내용은 : " << tab1 << " 입니다. " << endl;
	cout << "비교 결과 값은 : " << n << endl << " tab과 tab1은 같지 않다. " << endl;
	n = strcmp(tab, tab2);
	cout << "문자열 tab 의 내용은 : " << tab << " 입니다." << endl;
	cout << "문자열 tab2의 내용은 : " << tab2 << " 입니다. " << endl;
	cout << "비교 결과 값은 : " << n << endl << " tab과 tab2은 같다. " << endl;*/

	// 문자열 거꾸로 출력하기
	//cout << "문자열을 입력하세요 : ";
	//cin.getline(tab, 100);  // 스페이스를 문자열로 인식하고 엔터를 버퍼에 안남김
	//l = strlen(tab);

	//for (i = 0; i < l; i++) {
	//	cout << setw(3) << tab[i];
	//}
	//cout << endl;

	//for (i = l-1; i >=0; i--) { // null문자를 제외하기 위해서 l-1을 해줌
	//	cout << setw(3) << tab[i];
	//}
	//cout << endl;

	//// 문자열 삽입하기
	//cout << "문자열을 입력하세요 : ";
	//cin.getline(tab, 100);
	//cout << "삽입 위치와 문자를 입력하세요 : ";
	//cin >> n >> a;

	//l = strlen(tab);

	//// null문자부터 넣을 자리까지 뒤로 한 칸씩 밀어넣기
	//for (i = l; i >= n - 1; i--) {
	//	tab[i + 1] = tab[i];
	//}

	//// 삽입 위치에 문자를 넣어주기
	//tab[n - 1] = a;

	//// 출력 하기
	//for (i = 0; i < l+1; i++) { // 길이가 1 늘어나서 l+1함
	//	cout << setw(3) << tab[i];
	//}

	//// 문자열 삽입하기
	//cout << "문자열을 입력하세요 : ";
	//cin.getline(tab, 100);
	//cout << "삽입 위치와 문자를 입력하세요 : ";
	//cin >> n >> a;

	//l = strlen(tab);

	//// null문자부터 넣을 자리까지 뒤로 한 칸씩 밀어넣기
	//for (i = l; i >= n - 1; i--) {
	//	tab[i + 1] = tab[i];
	//}

	//// 삽입 위치에 문자를 넣어주기
	//tab[n - 1] = a;

	//// 출력 하기
	//for (i = 0; i < l+1; i++) { // 길이가 1 늘어나서 l+1함
	//	cout << setw(3) << tab[i];
	//}


	//// 문자열 치환하기
	//cout << "문자열을 입력하세요 : ";
	//cin.getline(tab, 100);
	//cout << "치환 위치와 문자를 입력하세요 : ";
	//cin >> n >> a;

	//l = strlen(tab);

	//// 치환 위치에 문자를 넣어주기
	//tab[n - 1] = a;

	//// 출력 하기
	//for (i = 0; i < l; i++) { 
	//	cout << setw(3) << tab[i];
	//}

	// 문자열 삭제하기
	cout << "문자열을 입력하세요 : ";
	cin.getline(tab, 100);
	cout << "삭제할 위치를 입력하세요 : ";
	cin >> n;
    l = strlen(tab);

	for (i = n; i <= l; i++) { // 삭제위치 다음부터 시작 ~ null까지
		tab[i - 1] = tab[i];
	}

	// 출력 하기
	for (i = 0; i < l-1; i++) { 
		cout << setw(3) << tab[i];
	}


}