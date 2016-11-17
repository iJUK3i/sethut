#include <stdio.h>

int		match(char *s1, char *s2);

int main(void)
{
	char *s1;
	char *s2;
	char *s3;
	char *s4;
	char *s5;
	char *s6;
	char *s7;
	char *s8;
	char *s9;
	char *s10;
	char *s11;
	char *s12;
	char *s13;

	s1 = "vlad";
	s2 = "";
	s3 = ".";
	s4 = "*";
	s5 = "7";
	s6 = "vlaad";
	s7 = "Vlad";
	s8 = "**vlad";
	s9 = "vlad**";
	s10 = "vl**id";
	s11 = "**vlad***";
	s12 = "***v**l**a**d***";
	s13 = "***vlad****k***";
	printf("2.(0) %d\n", match(s1, s2));
	printf("3.(0) %d\n", match(s1, s3));
	printf("4.(1) %d\n", match(s1, s4));
	printf("5.(0) %d\n", match(s1, s5));
	printf("6.(0) %d\n", match(s1, s6));
	printf("7.(0) %d\n", match(s1, s7));
	printf("8.(1) %d\n", match(s1, s8));
	printf("9.(1) %d\n", match(s1, s9));
	printf("10.(0) %d\n", match(s1, s10));
	printf("11.(1) %d\n", match(s1, s11));
	printf("12.(1) %d\n", match(s1, s12));
	printf("13.(0) %d\n", match(s1, s13));
}
