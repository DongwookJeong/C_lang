#include <stdio.h>
/*
----------------���� �̽� �ڵ�------------
�ʿ��Ѱ� ����
�� �ݾ�
����� �� ���
Ŀ�� �� ���
����� ���� �� ���
[2]�� count
*/
//int x(int pay, int count);���ϱ� �Լ�

int main() {
	int score[3][2] = {
		{1500, 19},
		{4500, 6},
		{400, 30}
	};//�迭
	int i, j;//�� ��
	int kakao, encina, chicken;
	kakao = score[0][0] * score[0][1];
	encina = score[1][0] * score[1][1];
	chicken = score[2][0] * score[2][1];

			//printf("%d\n", score[i][j]);
		printf("\n");
		printf("%d\n", kakao);
		printf("%d\n", encina);
		printf("%d\n", chicken);
	/*
	for (i = 0; i < 3; i++) {
		for(j = 0; j < 2; j++){
		}
	}
	*/
	//int count;
	//pay = x(1500, 19);
	return 0;
}

/*for (i = 0; i < 3; i++) {
int x(int pay, int count) {
	int score[3][2];
	int i, j;
	int how;
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 2; j++) {
			scanf("%d", &score[i][j]);
		}
	}
	score[0][0]= 1500;
	score[0][1]= 19;
		for (j = 0; j < 2; j++) {
		scanf_s("%d", &score[i][j]);
		};
		printf("%d", pay);
		printf("%d", count);
		return how;
}
	}*/