#include <stdio.h>

int main() {
    int arr[100];
	int size = 0;
	int choice;
	int value;
	int position;
	int sum;
	int max;
	int min;

    do {
        printf("\*************Meunu************\n");
        printf("1. Nhap so phan tu va gia tri cac phan tu\n");
        printf("2. In ra gia tri cac phan tu\n");
        printf("3. In ra gia tri lon nhat va nho nhat\n");
        printf("4. Tinh tong cac phan tu\n");
		printf("5. Them mot phan tu vao cuoi mang\n");
        printf("6. Xoa phan tu mang\n");
        printf("7. Sap xep phan tu giam gian\n");
        printf("8. Tim kiem phan tu\n");
		printf("9. Tim so nguyen to trong mang\n");
		printf("10. Sap sep theo thu thu tang dan\n");
        printf("11. Thoat\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Nhap so phan tu cua mang: ");
                scanf("%d", &size);
                for (int i = 0; i < size; i++) {
                    printf("Phan tu thu %d: ", i + 1);
                    scanf("%d", &arr[i]);
                }
                break;
            case 2:
                for (int i = 0; i < size; i++) {
                    printf(" arr[%d]=%d",i, arr[i]);
                }
                printf("\n");
                break;
            case 3:
                max = arr[0];
                min = arr[0];
                for (int i = 1; i < size; i++) {
                    if (arr[i] > max) max = arr[i];
                    if (arr[i] < min) min = arr[i];
                }
                printf("Max: %d, Min: %d\n", max, min);
                break;
            case 4:
            	for(int i =0 ; i <size ; i ++){
            		sum += arr[i];
				}
				printf("Tong so phan tu mang la %d\n" ,sum);
				break;
			case 5:
                printf("Nhap vi tri can them: ");
                scanf("%d", &position);
                if (position >= 0 && position <= size) {
                    printf("Nhap gia tri can them: ");
                    scanf("%d", &value);
                    for (int i = size; i > position; i--) {
                        arr[i] = arr[i - 1];
                    }
                    arr[position] = value;
                    size++;
                }
                break;
            case 6:
            	printf("Nhap vi tri can xoa: ");
       			scanf("%d", &position);
    			if (position >= 0 && position < size) {
        		for (int i = position; i < size - 1; i++) {
            				arr[i] = arr[i + 1];
        				}
        		size--;
    			} else {
        		printf("Vi tri khong hop le\n");
        		return 1;
    			}
                break;
            case 7:
            	
            	break;
            case 8:
            	
            	break;
            case 9:
                printf("So nguyen to: ");
                for (int i = 0; i < size; i++) {
                    if (arr[i] <= 1) continue;
                    int isPrime = 1;
                    for (int j = 2; j * j <= arr[i]; j++) {
                        if (arr[i] % j == 0) {
                            isPrime = 0;
                            break;
                        }
                    }
                    if (isPrime) {
                        printf("%d ", arr[i]);
                    }
                }
                printf("\n");
                break;
            case 10:
            	
            	break;
            case 11:
                printf("Thoat chuong trinh.\n");
                break;
            default:
                printf("Lua chon khong hop le\n");
        }
    } while (choice != 11);

    return 0;
}

