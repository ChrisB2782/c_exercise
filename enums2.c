#include <stdio.h>

enum ErrorCode {SUCCESS = 0, FILE_NOT_FOUND = 1, PERMISSION_DENIED = 2};
enum ErrorCode simulateOperation(int opType) {
	switch(opType) {
        	case 0:
            		return SUCCESS;
        	case 1:
            		return FILE_NOT_FOUND;
        	case 2:
            		return PERMISSION_DENIED;
	}
}

int main() {
    	int op;
    	printf("Enter operation type (0: success, 1: file not found, 2: permission denied): ");
    	scanf("%d", &op);
    	enum ErrorCode result = simulateOperation(op);
    	switch(result) {
        	case SUCCESS:
            		printf("Operation completed successfully.\n");
            		break;
        	case FILE_NOT_FOUND:
            		printf("Error: File not found.\n");
            		break;
        	case PERMISSION_DENIED:
            		printf("Error: Permission denied.\n");
            		break;
    	}
    	return 0;
}
