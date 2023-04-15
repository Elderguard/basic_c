#include<iostream>
using namespace std;

//variaveis
float salary, monthlyLoanInstallment, loanValue, monthlyLoanInstallmentLimit;
int amountOfInstallments;

int main() {
	cout<<"Inform your salary \n";
	cin>>salary;
	
	monthlyLoanInstallmentLimit = 0.3*salary;
	cout<<"The maximum value for the loan installment is "<<monthlyLoanInstallmentLimit<<endl;
	
	cout<<"Inform the value of the loan \n";
	cin>>loanValue;
	
	cout<<"Inform the number of installments (6,12,18,24,36): \n";
	cin>>amountOfInstallments;
	
	monthlyLoanInstallment=loanValue/amountOfInstallments;
	
	cout<<"\n installment value: $"<<monthlyLoanInstallment;
	
	if (monthlyLoanInstallment<=monthlyLoanInstallmentLimit)
		cout<<"Loan available";
	else
		cout<<"Loan denied";
		
}
