#include <stdio.h>
#include<stdlib.h>
#include<iostream>
#include<string>
#include<time.h>
#include<sstream>
using namespace std;
int main() {
	FILE* fp;
	const char* ch[10] = { "����","�Ϻ�","�ɶ�","����","����","����","���","����","����","����" };
	const char* bh[10] = { "JD","FM","EU","BY","PN","ZH","HK","KY","GJ","MF" };
	int cnt = 100;
	string date;
	cin >> date;
	srand(time(0));
	fp = fopen("����.txt"/*(date + ".txt").c_str()*/, "wt+");
	fprintf(fp, "        �� �� վ        �� �� վ        �� �� �� ��        �� �� ��        �� �� ��        �� �� ��        �� Ʊ ��\n");
	for (int i=0;i<30;i++) {
		stringstream ss;
		for (int i = 0; i < 10; i++) {
			for (int j = 0; j < 10; j++) {
				if (i != j) {
					fprintf(fp, "%16s  --->  %8s        %11s          %s%04d           P%04d        %8s        %8s\n", ch[i], ch[j], date.c_str(), bh[i], rand() % 10000, rand() % 1000, "100", "100");
					cnt++;
				}
			}
		}
		
		ss << atoi(date.c_str()) + 1;
		ss >> date;
	}
	fclose(fp);
}