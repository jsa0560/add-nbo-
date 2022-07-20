#include <stdio.h>
#include <stdint.h>
#include <netinet/in.h>

int main(int argc, char* argv[]) {
	
	uint32_t a;
	uint32_t b;
	
	
	FILE *fp1 = fopen(argv[1], "rb");
	FILE *fp2 = fopen(argv[2], "rb");
	
	if(fread(&a, sizeof(uint32_t), 1, fp1) != 0){
		a = ntohl(a);
	}
	
	if(fread(&b, sizeof(uint32_t), 1, fp2) != 0){
		b = ntohl(b);
	}
	
	printf("%d(%X) + %d(%X) = %d(%X)\n", a, a, b, b, a+b, a+b); 

	fclose(fp1);   
    	fclose(fp2);  
    	return 0;

}
