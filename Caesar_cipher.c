#include <stdio.h>

//int main(void) {
//	int ch;
//
//	printf("输入您的中文名字的拼音：");
//	while ((ch = getchar()) != EOF) {
//		if (ch == '\n')
//			break;
//
//		if (ch >= 'a' && ch <= 'z') {
//			ch += 21;
//			if (ch > 'z')
//				ch = ch - 'z' + 'a' - 1;
//			putchar(ch);
//		}
//		else if (ch >= 'A' && ch <= 'Z') {
//			ch += 21;
//			if (ch > 'Z')
//				ch = ch - 'Z' + 'A' - 1;
//			putchar(ch);
//		}
//	}
//
//	return 0;
//}

int main(void) {
	char name[20] = { 0 };
	int  ch, i = 1, j = 1, k = 1;

	printf("输入您的中文名字的拼音：");
	while ((ch = getchar()) != EOF) {
		if (ch == '\n')
			break;

		name[i] = ch;
		i++;
	}

	for (j = 1; j <= 26; j++) {
		printf("%d.", j);
		for (k = 1; k <= i - 1; k++) {
			if (name[k] >= 'a' && name[k] <= 'z') {
				ch = name[k] + j;
				if (ch > 'z')
					ch = ch - 'z' + 'a' - 1;
				putchar(ch);
			}
			else if (name[k] >= 'A' && name[k] <= 'Z') {
				ch = name[k] + j;
				if (ch > 'Z')
					ch = ch - 'Z' + 'A' - 1;
				putchar(ch);
			}
		}
		printf("\n");
	}

	return 0;
}