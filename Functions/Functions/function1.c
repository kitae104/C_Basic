#include <stdio.h>

double calcAvg(int kor, int eng, int com);	// �Լ� ���� 

int main_1() {
	int k, e, c;
	k = 80;
	e = 95; 
	c = 100;

	double avg = 0.0;
	avg = calcAvg(k, e, c);

	printf("��� : %f\n", avg);

	k = 80;
	e = 90;
	c = 100;
	
	avg = calcAvg(k, e, c);   // �� �Ű����� 

	printf("��� : %f\n", avg);

	return 0;
}

double calcAvg(int kor, int eng, int com) {	// �Լ� ����  //���� �Ű� ���� 
	double avg = 0.0;
	avg = (kor + eng + com) / 3.0;
	return avg;
}