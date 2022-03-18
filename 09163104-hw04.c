砞璸祘Α弄8じ16秈计(安砞璣ゅダ糶┪糶)耞┮弄じ琌16秈计狦琌锣传10秈计狦陪ボ獶16秈计竚

祘Αゲ斗才璶―
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
