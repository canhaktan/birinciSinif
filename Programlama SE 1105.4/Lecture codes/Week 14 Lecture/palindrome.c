#include<stdio.h>
#include<string.h>
int palindrom(char *a);
int main()
{
    char str[50];
    int chk=0;
    
    printf("Enter any String (word): ");
    gets(str);
    
    chk = palindrom (str);

    if(chk==1)
        printf("\nIt's not a Palindrome String");
    else
        printf("\nIt's a Palindrome String");
    return 0;
}
//.................................
int palindrom(char *a){
	
	int len;
	int chk = 0;
	
	len = strlen(a);
	
    for(int i=0, j=(len-1); i<=(len-1); i++, j--)
    {
        if(a[i] != *(a+j))
        {
            chk=1;
            break;
        }
    }
	
	return chk;
}
