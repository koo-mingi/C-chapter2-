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

	//l = strlen(tab); // ���ڿ� ����

	//cout << "���ڿ� : " << tab << " �� ���� : " << l << endl;

	// ���ڿ��� ����
	/*char tab[] = "abcde";
	cout << "strcopy ����� ���� �� ���ڿ� tab�� ������ " << tab << " �Դϴ�." << endl;

	strcpy_s(tab, "XYZ");
	cout << "strcopy ����� ���� �� ���ڿ� tab�� ������ " << tab << " �Դϴ�." << endl;*/

	//���ڿ� �̾��ֱ�
	/*char tab[7] = "abc";
	cout << "strcat ����� ����Ǳ� �� ���ڿ��� ������ : " << tab << endl;

	strcat_s(tab, "XYZ");
	cout << "strcat ����� ����� �� ���ڿ��� ������ : " << tab << endl;*/
	
	//���ڿ� ��

	/*char tab[] = "abc", tab1[] = "xyz", tab2[] = "abc";
	int n;
	n = strcmp(tab, tab1);
	cout << "���ڿ� tab �� ������ : " << tab << " �Դϴ�." << endl;
	cout << "���ڿ� tab1�� ������ : " << tab1 << " �Դϴ�. " << endl;
	cout << "�� ��� ���� : " << n << endl << " tab�� tab1�� ���� �ʴ�. " << endl;
	n = strcmp(tab, tab2);
	cout << "���ڿ� tab �� ������ : " << tab << " �Դϴ�." << endl;
	cout << "���ڿ� tab2�� ������ : " << tab2 << " �Դϴ�. " << endl;
	cout << "�� ��� ���� : " << n << endl << " tab�� tab2�� ����. " << endl;*/

	// ���ڿ� �Ųٷ� ����ϱ�
	//cout << "���ڿ��� �Է��ϼ��� : ";
	//cin.getline(tab, 100);  // �����̽��� ���ڿ��� �ν��ϰ� ���͸� ���ۿ� �ȳ���
	//l = strlen(tab);

	//for (i = 0; i < l; i++) {
	//	cout << setw(3) << tab[i];
	//}
	//cout << endl;

	//for (i = l-1; i >=0; i--) { // null���ڸ� �����ϱ� ���ؼ� l-1�� ����
	//	cout << setw(3) << tab[i];
	//}
	//cout << endl;

	//// ���ڿ� �����ϱ�
	//cout << "���ڿ��� �Է��ϼ��� : ";
	//cin.getline(tab, 100);
	//cout << "���� ��ġ�� ���ڸ� �Է��ϼ��� : ";
	//cin >> n >> a;

	//l = strlen(tab);

	//// null���ں��� ���� �ڸ����� �ڷ� �� ĭ�� �о�ֱ�
	//for (i = l; i >= n - 1; i--) {
	//	tab[i + 1] = tab[i];
	//}

	//// ���� ��ġ�� ���ڸ� �־��ֱ�
	//tab[n - 1] = a;

	//// ��� �ϱ�
	//for (i = 0; i < l+1; i++) { // ���̰� 1 �þ�� l+1��
	//	cout << setw(3) << tab[i];
	//}

	//// ���ڿ� �����ϱ�
	//cout << "���ڿ��� �Է��ϼ��� : ";
	//cin.getline(tab, 100);
	//cout << "���� ��ġ�� ���ڸ� �Է��ϼ��� : ";
	//cin >> n >> a;

	//l = strlen(tab);

	//// null���ں��� ���� �ڸ����� �ڷ� �� ĭ�� �о�ֱ�
	//for (i = l; i >= n - 1; i--) {
	//	tab[i + 1] = tab[i];
	//}

	//// ���� ��ġ�� ���ڸ� �־��ֱ�
	//tab[n - 1] = a;

	//// ��� �ϱ�
	//for (i = 0; i < l+1; i++) { // ���̰� 1 �þ�� l+1��
	//	cout << setw(3) << tab[i];
	//}


	//// ���ڿ� ġȯ�ϱ�
	//cout << "���ڿ��� �Է��ϼ��� : ";
	//cin.getline(tab, 100);
	//cout << "ġȯ ��ġ�� ���ڸ� �Է��ϼ��� : ";
	//cin >> n >> a;

	//l = strlen(tab);

	//// ġȯ ��ġ�� ���ڸ� �־��ֱ�
	//tab[n - 1] = a;

	//// ��� �ϱ�
	//for (i = 0; i < l; i++) { 
	//	cout << setw(3) << tab[i];
	//}

	// ���ڿ� �����ϱ�
	cout << "���ڿ��� �Է��ϼ��� : ";
	cin.getline(tab, 100);
	cout << "������ ��ġ�� �Է��ϼ��� : ";
	cin >> n;
    l = strlen(tab);

	for (i = n; i <= l; i++) { // ������ġ �������� ���� ~ null����
		tab[i - 1] = tab[i];
	}

	// ��� �ϱ�
	for (i = 0; i < l-1; i++) { 
		cout << setw(3) << tab[i];
	}


}