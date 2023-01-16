#include <stdio.h>

double calcAvg(int kor, int eng, int com);	// 함수 원형 

int main_1() {
	int k, e, c;
	k = 80;
	e = 95; 
	c = 100;

	double avg = 0.0;
	avg = calcAvg(k, e, c);

	printf("평균 : %f\n", avg);

	k = 80;
	e = 90;
	c = 100;
	
	avg = calcAvg(k, e, c);   // 실 매개변수 

	printf("평균 : %f\n", avg);

	return 0;
}

double calcAvg(int kor, int eng, int com) {	// 함수 정의  //형식 매개 변수 
	double avg = 0.0;
	avg = (kor + eng + com) / 3.0;
	return avg;
}