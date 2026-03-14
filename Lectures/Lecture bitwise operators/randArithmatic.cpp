#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main() {
	srand(time(0));
	int n1, n2, op, cAns, uAns, score = 0;
	n1 = rand() % 10;
	n2 = rand() % 10;
	op = rand() % 4;
	cout << "\t\t" << n1 << '\n';
	if (op == 0){
		cout << "\t+\t" << n2 << '\n';
		cAns = n1 + n2;
	}
	else if (op == 1){
		cout << "\t-\t" << n2 << '\n';
		cAns = n1 - n2;
	}
	else if (op == 2){
		cout << "\t*\t" << n2 << '\n';
		cAns = n1 * n2;
	}
	else {
		cout << "\t/\t" << n2 << '\n';
		cAns = n1 / n2;
	}
	cout << "\t----------\n\t\t";
	cin >> uAns;
	cout << "\t----------\n";	
	if (cAns == uAns){
		cout << "Correct\n";
		score++;
	}
	else{
		cout << "Incorrect\n";
		cout << "Correct Answer: " << cAns << '\n';
	}
	n1 = rand() % 10;
	n2 = rand() % 10;
	op = rand() % 4;
	cout << "\t\t" << n1 << '\n';
	if (op == 0){
		cout << "\t+\t" << n2 << '\n';
		cAns = n1 + n2;
	}
	else if (op == 1){
		cout << "\t-\t" << n2 << '\n';
		cAns = n1 - n2;
	}
	else if (op == 2){
		cout << "\t*\t" << n2 << '\n';
		cAns = n1 * n2;
	}
	else {
		cout << "\t/\t" << n2 << '\n';
		cAns = n1 / n2;
	}
	cout << "\t----------\n\t\t";
	cin >> uAns;
	cout << "\t----------\n";
	if (cAns == uAns){
		cout << "Correct\n";
		score++;
	}
	else{
		cout << "Incorrect\n";
		cout << "Correct Answer: " << cAns << '\n';
	}
	n1 = rand() % 10;
	n2 = rand() % 10;
	op = rand() % 4;
	cout << "\t\t" << n1 << '\n';
	if (op == 0){
		cout << "\t+\t" << n2 << '\n';
		cAns = n1 + n2;
	}
	else if (op == 1){
		cout << "\t-\t" << n2 << '\n';
		cAns = n1 - n2;
	}
	else if (op == 2){
		cout << "\t*\t" << n2 << '\n';
		cAns = n1 * n2;
	}
	else {
		cout << "\t/\t" << n2 << '\n';
		cAns = n1 / n2;
	}
	cout << "\t----------\n\t\t";
	cin >> uAns;
	cout << "\t----------\n";
	if (cAns == uAns){
		cout << "Correct\n";
		score++;
	}
	else{
		cout << "Incorrect\n";
		cout << "Correct Answer: " << cAns << '\n';
	}
	n1 = rand() % 10;
	n2 = rand() % 10;
	op = rand() % 4;
	cout << "\t\t" << n1 << '\n';
	if (op == 0){
		cout << "\t+\t" << n2 << '\n';
		cAns = n1 + n2;
	}
	else if (op == 1){
		cout << "\t-\t" << n2 << '\n';
		cAns = n1 - n2;
	}
	else if (op == 2){
		cout << "\t*\t" << n2 << '\n';
		cAns = n1 * n2;
	}
	else {
		cout << "\t/\t" << n2 << '\n';
		cAns = n1 / n2;
	}
	cout << "\t----------\n\t\t";
	cin >> uAns;
	cout << "\t----------\n";
	if (cAns == uAns){
		cout << "Correct\n";
		score++;
	}
	else{
		cout << "Incorrect\n";
		cout << "Correct Answer: " << cAns << '\n';
	}
	n1 = rand() % 10;
	n2 = rand() % 10;
	op = rand() % 4;
	cout << "\t\t" << n1 << '\n';
	if (op == 0){
		cout << "\t+\t" << n2 << '\n';
		cAns = n1 + n2;
	}
	else if (op == 1){
		cout << "\t-\t" << n2 << '\n';
		cAns = n1 - n2;
	}
	else if (op == 2){
		cout << "\t*\t" << n2 << '\n';
		cAns = n1 * n2;
	}
	else {
		cout << "\t/\t" << n2 << '\n';
		cAns = n1 / n2;
	}
	cout << "\t----------\n\t\t";
	cin >> uAns;
	cout << "\t----------\n";
	if (cAns == uAns){
		cout << "Correct\n";
		score++;
	}
	else{
		cout << "Incorrect\n";
		cout << "Correct Answer: " << cAns << '\n';
	}
	cout << "\n\n\tScore: \t" << score;
	return 0;
}