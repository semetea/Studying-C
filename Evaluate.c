// Evaluate.c
/***************************************************************************************************************************
���� ��Ī: Evaluate.c
���: �Է��ϴ� ��ŭ ����� ����� ���� ������ �Է¹ް�, ������ ����� ����ϰ�, ����� �������� ���ϰ�,
�л� ������ ����Ѵ�

�Լ���Ī: main
��	  ��: �������
��	  ��: ����, ��������, ��������
�� �� ��: ���¿�
�ۼ�����: 2021/12/31
***************************************************************************************************************************/

// ��ó���� �ܶ�
#include <stdio.h> // �ܺ� ���� ���� ���

#define SUBJECTCOUNT 2.0F
#define PASSINGAVERAGE 70.0F

// �Լ� ����
int main(int argc, char* argv[]);
// �Լ� ����
int main(int argc, char* argv[]) {
	//�ڵ����� ���� �� ����
	char(*isPassed); // ���� �迭 ������
	char name[11]; // ���� �迭
	int koreanScore;
	int englishScore;
	int sum;
	float average;
	int number = 0; // �ʱ�ȭ

	//		1.1 ����, ��������, ���������� �Է¹޴´�
	scanf("%s %d %d", name, &koreanScore, &englishScore); // �Է¹�
	while (!feof(stdin)) { // 1. ������ ���� �ƴ� ���� �ݺ��Ѵ�	
		//	1.2 ��ȣ�� �ű��
		// number = number + 1;
		// number += 1;
		number++;
		//	1.3 ������ ���Ѵ�
		sum = koreanScore + englishScore;
		//	1.4 ����� ���Ѵ�
		average = sum / SUBJECTCOUNT;
		//	1.5 �򰡸� �ϴ�
		/ if (average >= PASSINGAVERAGE) {
			isPassed = "PASS";
		}
		else {
			isPassed = "FAIL";
		}
		//	1.6 ����, ��������, ��������, ����, ��� �׸��� �򰡸� ����Ѵ�
		printf("%d %s %d %d %d %.1f %s\n", number, koreanScore, englishScore, sum, average, isPassed);

		//	1.1 ����, ��������, ���������� �Է¹޴´�
		scanf("%s %d %d", name, &koreanScore, &englishScore);
	}
	// 2. ������	
	return 0;
}