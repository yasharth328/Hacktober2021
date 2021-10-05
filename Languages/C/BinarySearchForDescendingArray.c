//Searching value Using Binary Search 
//Array elements are in descending order

#include<stdio.h>
int main(){
	int lft=1,rt=10,md=(lft+rt)/2,arr[10],count,val;	
	//Taking Array as Input
	printf("Enter Values in Descending Order Only\n");
	for(count=0;count<10;++count){
		printf("a[%d] = ",count);
		scanf("%d",&arr[count]);	
	}
	
	//Taking Element to search
	printf("Enter element to search in array: ");
	scanf("%d",&val);
	
	while(lft<=rt){
		if(val > arr[md]){
			rt= md-1;
		}
		else if(val < arr[md]){
			lft = md+1;
		}
		else{
			printf("Search Completed!\nValue Found at location %d",md+1);
			break;
		}
	md = (lft+rt)/2;
	}
	if(lft>rt){
	printf("No such element exists in Array!");
	}
	return 0;
}
