#include <stdio.h>

int main()
{
	int max, i;

	/* �\�߃f�[�^��p�ӂ��Ă����B*/
	int a[] = { 12, 34, 54, 53, 23, 89, 33 };

	/* �z��̐擪�̗v�f�����̍ő�l�Ƃ���B*/
	max = a[0];

	/* �z��𖖔��̗v�f�܂ŌJ��Ԃ��`�F�b�N����B*/
	for (i = 0; i < 7; i++)
	{
		/* ���̍ő�l���X�V����B*/
		if (a[i] > max)
		{
			max = a[i];
		}
	}

	printf("�ő�l�� %d\n", max);

	return 0;
}