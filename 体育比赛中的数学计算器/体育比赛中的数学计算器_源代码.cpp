#include <bits/stdc++.h>
using namespace std;
void welcome(void) {
	cout << "��ӭ���������������е���ѧ���������������������ִ�еĲ���" << endl;
	cout << "1.����p������ƽ������ 2.����z�������ܳ��� 3.����m������ÿ�˳��� 4.����a����������ܷ� 5.����j��������" << endl;
	cout << endl;
}

int calculate_the_total_number_of_games(int n) {
	return n * (n - 1) / 2;
}

int calculate_the_number_of_games_per_person(int n) {
	return n - 1;
}

int the_highest_total_score_is_calculated(int n) {
	return calculate_the_total_number_of_games(n) * 3;
}

int count_the_number_of_draws(int n,int a) {
	return the_highest_total_score_is_calculated(n) - a;
}

int main() {
	system("color b");
	welcome();
	int q;
	cout << "������ѯ�ʴ�����";
	cin >> q;
	for (int i = 0; i < q; i++) {
		char ch;
		cout << "������ѯ�����ݣ�";
		cin >> ch;
		if (ch == 'p') {
			int n,a;
			cout << "�����뼸���˱ȣ�";
			cin >> n;
			cout << "������ʵ�ʱ��������";
			cin >> a;
			cout << count_the_number_of_draws(n, a) << endl;
		}
		else if (ch == 'z') {
			int n;
			cout << "�����뼸���˱ȣ�";
			cin >> n;
			cout << calculate_the_total_number_of_games(n) << endl;
		}
		else if (ch == 'm') {
			int n;
			cout << "�����뼸���˱ȣ�";
			cin >> n;
			cout << calculate_the_number_of_games_per_person(n) << endl;
		}
		else if (ch == 'a') {
			int n;
			cout << "�����뼸���˱ȣ�";
			cin >> n;
			cout << the_highest_total_score_is_calculated(n) << endl;
		}
	}
}