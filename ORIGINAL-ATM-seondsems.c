#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void clea(){
	system("cls");
	
}   int s=1;///goback while of gotoback after deposition of money....
     int r=1;
     char ban;
     int x=1;
     char as; ///atm yes or no
     int atmdraw;
     int y=1;
     char dy;
     char dn;
	char yes[]="yes";
	char no[]="no";
	int deposit; ///Deposited Account 
	int value; //value after drawn
int bank;
int draw;
  	int chance=0; //ATM CHances of accessing the ATM PIN
	
	int pin; ///ATM Pin;
	int digit=6664;//ATM PIN Checker
  int o; //first loop
int main(){


char home;
	int attempt=5; //pin attempted
	//int value; //VAlue after drawn;
//	Local variable or identifier
	

//  int deposit; ///Deposited Account 
int n;	
int i=1;


	do{
		ktm:
	system("cls");
	printf("\t \t Press:1 Go to your Bank");
	printf("\n \t \t Press:2 Go to ATM");
    printf("\n \t \t Press:3 Exit");
printf("\n \t \t Choose a Number between 1 and 2 for an entry:\n \t \t ");
scanf("%d",&n);

for(o=4;o<=100;o++){
	
	if(n==o|| n==0){
		goto ktm;

	}
else{
	printf("");
}	
	
}

switch(n){
	
	case 1:
	      backed:
		system("cls");
printf("\nWelcome to Sanima Bank");

	printf("\nPress:1 to Show my Bank account details.");
	printf("\nPress:2 to Deposit a money in your account.");
	printf("\nPress:3 to go back.\n");
	scanf("%d",&bank);



if(bank==1){
do{
	
	clea();// it is system("cls");

	printf("\t \t Bank Name:Sanima Bank Ltd");
	printf("\n \t \t  Bank account :02939023638731");
	printf("\n \t \t Payout Account: Yes");
	printf("\n \t \t MICR Code:08932129");
	printf("\n \t \t demate Account:Active(open)");
	printf("\n \t \t ATM Card:Active");
	printf("\n \t \t ATM Pin Number:6664");
	printf("\n \t \t Bank Account money is %d",deposit);
	
    printf("\n \n \t \t PLEASE INPUT y TO GO BACK.");
	printf("\n \n \n \t \t Do you want to go back:y/n \n \t \t");
	scanf("%s",&dy);

	if(dy=='y'){
		goto backed;
	}
	else{
//		i dont want message.
	}
	y++;
}while(y<100);
 
} 
else if(bank==2){
	
	goto label1;
}
else if(bank==3){
	goto ktm;
}
else{
	goto backed;
}
label1:
	system("cls");
	printf("\nAccountant:How much money do you want to deposit?");
	printf("\nUser \t  :");
	scanf("%d",&deposit);
	printf("\nAccountant:You have deposited %d money,Thank you!!\n",deposit);
    printf("\n \n \n \n  NOTE: y to clear and other character to not do clear.\n");
	printf("\n Now do you want to clear above message: \n");
    printf("User :");
    scanf("%s",&ban);
    if(ban=='y'){
    	clea();
	}
	else{
//		printf("");
	}
//printf("\n How much money do you want to draw?\n \t");
//scanf("%d",&draw);
//
//if(deposit>draw){
//	
//value=deposit-draw;
//}
//
//printf("\nNow your bank balance is %d ,Thank you!!\n",value);

do{

printf("\n Do you want to go back: y/n");
printf("\n User : ");
scanf("%s",&home);


//printf("\n\t home value is %s",home);
//
//	printf("\n \t Yes variable value is %s",yes);


if(home=='y'){
//	printf("\nCongratulations!");

goto ktm;
}else{
	printf("\n \tPlease input value y....\n");
}
s++;
//BELOW This code is not executing
//printf("\n\t home value is %s",home);
//
//	printf("\n \t Yes variable value is %s",yes);
} while(s<100);
break;





case 2:
system("cls");
printf("\n \t \t Welcome to Sanima Bank ATM.\n");
do{

printf("\n \t \t Enter your 4 digit pin number.\n \t \t ");
scanf(" %d",&pin);
//printf("\n \t \t pin is %d",pin);
//printf("\n \t \t digit is %d",digit);
if(pin==digit){
	
	
//printf("How are you?");	
goto ups;

}
else{
	printf("\n \n \t \t Pin Code is invalid.");

}
//
chance++;
//printf("\n \t \t \tYour chance is %d",chance);

attempt--;
printf("\n \t \t [You have now  %d attempt left]\n",attempt);
}while(chance<=4);

if(attempt==0){
	printf("\n \n \n \t \t Sorry,Your ACCOUNT is BLOCKED FOR 24 hours.");
}
break;


ups:
	clea();
   do{
   
	printf("\t \t \t 20,000");
	printf("\t 30,000");
	printf("\t 50,000");
    printf("\n \t \t \t 1,000");
    printf("\t 2,000 ");
    printf("\t 4,000");
    printf("\n \t \t \t 5,000");
    printf("\t 8,000");
    printf("\t 10,000");
    
    printf("\t \t \t Note:Amount should be multiple of 500");
    printf("\n \n \t \t \t \t \t [Maximum amount should not be greater than 50,000 and less than 1000]");
    printf("\n \n \n \t \t \t Enter a AMOUNT you want to withdraw:\n \t \t \t ");
	scanf("%d",&atmdraw);
 
 
 if(deposit>atmdraw){
 	
    if((atmdraw>=1000)&& (atmdraw%500==0)&&(atmdraw<=50000)){
    	clea();
    	
		printf("\n \t \t \t  %d money is drawn from your accout",atmdraw);
    	
    	printf("\n \t \t \t  Please collect your Cash.");
    	printf("\n \t \t \t  Thank you ");
value=deposit-atmdraw-10;

}
else{
	
	printf("\n \t \t PLEASE READ THE NOTE.INPUT AS PER NOTE.......");
	value=deposit-10;
}
		//if(deposit>atmdraw){	
////value=deposit-atmdraw-10;
//}
}
else{
	printf("\n \t \t \t Your Bank balance is low.PLEASE Go TO BANK...");
    printf("\n \t \t \t Thank you");
}

do{ 	
    printf("\n \n \n \nNOTE: y to clear and other character to not do clear.\n");
	printf("\n[Note: Other Character would be assume as (NO) as an answer.]");
	printf("\nNow do you want to clear above message: \n");
    printf("User :");
    scanf("%s",&ban);
    if(ban=='y'){
    	clea();
	}
	else{
//		printf("");
	}
	
printf("\n \n \n \n \n  \t \t \t \t [Please input y]");
printf("\n \n \n \n  \t \t \t \t [Note: Other Character would be assume as (NO) as an answer.]\n \n");
printf("\n \t \t \t \t  Do you want to check your Account balance :y/n ");
printf("\n \t \t \t \t  User :");
scanf("%s",&as);
if(as=='y'){
//	goto free;
//system("cls");	

printf("\n \t \t \t \t Your Current bank balance is %d ,Thank you!!\n",value);
if(value>0){
printf("\n \t \t \t ATM Charge:10");
break;
}
break;

}
else{
	printf("\n \t \t \t Thank you ");
	break;
    
}
x++;
}while(x<5);

//	}else{
//		printf("\n \t \t \t Please enter a amount that is multiple of 500");
//	}

 ///Hi I am do-while loop increamenter...
r++;
}while(r<2);


case 3:
	goto last;
	break;
	

default:
	last:
	printf("\n \t \t \t RESTART TO COME BACK.");	


}	
i++; //I want one time to enter in do statement
}while(i>2);

return 0;



}
