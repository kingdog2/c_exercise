�]�p�@�ӵ{��Ū�J�ܦh8�줸��16�i��Ʀr(���]�^��r���i���j�g�Τp�g)�A�P�_��Ū�J���r���O�_��16�i�쪺�Ʀr�A�p�G�O�A�ഫ��10�i�쪺�ƭȡF�p�G�_�A��ܫD16�i��Ʀr����m�C

�{�������ŦX�U�C�n�D�G
#include <stdio.h>
int main(){
	char s[];
	int bad=0;
	scanf("%s", s);
	char *p=s;
	for(;*p!=0;p++){
		if(!('0'<=*p&&*p<='9' || 'A'<=*p&&*p<='Z' || 'a'<=*p&&*p<='z')){
			bad=1;
		}
	}
	if(bad==0){
		for(p=s;*p!=0;p++){
			if('A'<=*p&&*p<='Z'){
				*p=*p-'A'+'9'+1;
			}
			if('a'<=*p&&*p<='z'){
				*p=*p-'a'+'9'+1;
			}
		}
	}
		
	}else{	
		
	}
	
} 
char* f16(char *p){
	if()
}
