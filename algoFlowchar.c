#include <stdio.h>
#include <unistd.h>

int main(){

	double pay;

	double bill;
	printf("Enter the bill:");
	scanf("%lf", &bill);

	double tax;
	tax = bill*0.05;

	double totalBill;
	totalBill = tax + bill;

	if (totalBill >= 1000){
		printf("Congratulation! 10% Discount Applied.\n");
		pay = totalBill - totalBill*0.1;
	}
	else{
		printf(":-( Better Luck Next Time.\n");
		pay = totalBill;
	}
	usleep(2000000);  // show results after 2 sec or 2000000 milliseconds
	printf("You have to pay: %.2lf", pay);

	return 0;
}
