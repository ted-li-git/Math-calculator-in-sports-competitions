#include <bits/stdc++.h>
using namespace std;
void welcome(void) {
	cout << "欢迎来到“体育比赛中的数学计算器”请根据需求输入执行的操作" << endl;
	cout << "1.输入p：计算平局数量 2.输入z：计算总场数 3.输入m：计算每人场数 4.输入a：计算最高总分 5.输入j：待开发" << endl;
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
	cout << "请输入询问次数：";
	cin >> q;
	for (int i = 0; i < q; i++) {
		char ch;
		cout << "请输入询问内容：";
		cin >> ch;
		if (ch == 'p') {
			int n,a;
			cout << "请输入几个人比：";
			cin >> n;
			cout << "请输入实际比赛结果：";
			cin >> a;
			cout << count_the_number_of_draws(n, a) << endl;
		}
		else if (ch == 'z') {
			int n;
			cout << "请输入几个人比：";
			cin >> n;
			cout << calculate_the_total_number_of_games(n) << endl;
		}
		else if (ch == 'm') {
			int n;
			cout << "请输入几个人比：";
			cin >> n;
			cout << calculate_the_number_of_games_per_person(n) << endl;
		}
		else if (ch == 'a') {
			int n;
			cout << "请输入几个人比：";
			cin >> n;
			cout << the_highest_total_score_is_calculated(n) << endl;
		}
	}
}