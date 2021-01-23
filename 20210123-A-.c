/*
 * A - Slot
 */

#include <stdio.h>
#include <ctype.h>

char C[2];

int main(void){
	scanf("%s", C);
	//scanf("%s", C[1]);)
	//scanf("%s", C[2]);

	//C[0] = toupper(C[0]);
	//C[1] = toupper(C[1]);
	//C[2] = toupper(C[2]);

if (islower((int)C[0]) == 0 && islower((int)C[1]) == 0 && islower((int)C[2]) == 0){
	if (C[0] == C[1] && C[1] == C[2]){

		printf("Won\n");
		//}else{
			//printf("Lost\n");
        //}
    }else{
    	printf("Lost\n");
    }
}else{
	printf("Lost\n");
}
	return 0;
}
