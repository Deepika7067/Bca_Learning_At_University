//Write a C code to sort a string in alphabetical order
//input: Anitha
//output: Aahint 

{
	char string[100];
  printf("\n\t Enter the string : ");
	scanf(“%s”,string);
	char temp;
	int i, j;
	int n = strlen(string);
	for (i = 0; i < n-1; i++) {
		for (j = i+1; j < n; j++) {
			if (string[i] > string[j]) {
					temp = string[i];
					string[i] = string[j];
					string[j] = temp;
			}
		}
	}

	printf(“The sorted string is : %s”, string);
	return 0;
}
