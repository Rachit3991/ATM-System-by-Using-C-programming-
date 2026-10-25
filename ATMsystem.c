#include <stdio.h>
void process(){
    printf("Plz wait We Are in Processing..... ");
}
void main(){
int pin=2008,ch,gpin,pin_try=3,amt,bal=1000;
printf("\n\t Welcome in programming Rachit's ATM\n");
printf("\t---------------------------------------\n");
start:
printf("\t\tEnter the pin:");
scanf("%d",&gpin);
if(pin==gpin){
    process();
    pin_try=3;
printf("\n1:Cash Withdral\n2:Cash Deposit\n3:Check Balance\n4:Change Pin\n5:Exit\n");
printf("\n\tENTER YOUR CHOICE:\n");
scanf("%d",&ch);
switch(ch){
    case 1:
    printf("\nEnter Withdraw Amount:");
    scanf("%d",&amt);
    if(amt%100==0){
        if(amt<bal){
    if(amt<=10000){
        process();
    bal=bal-amt;
    printf("\nWithdraw Completed...Collect your cash and update Balance:%d",bal);
}
else
printf("\n max limit of withdraw is 10k");
}
else
printf("\n insufficent balance in your account");
}
else
printf("\n enter amount with the multiple of 100 ");

    break;
    
    case 2:
    printf("\n Enter deposit amount : ");
    scanf("%d",&amt);
    if(amt<=20000){
        process();
        bal+=amt;
        printf("\n Deposite is completed.....updated balance is:%d",bal);
    }
    else
    printf("\n max limit is 20k");
    goto End;
    break;
    
    case 3:
    process();
    printf("\n Your understanding Account balance is :%d",bal);
    goto End;
    break;
    
    case 4:
    printf("\n Enter New pin:");
    scanf("%d",&pin);
    process();
    printf("\n Your pin is updated..... Login again");
    goto start;
    break;
    
    case 5:
    
    goto End;
    break;
    default:
    printf("\n Sorry !! Wrong Choice");
    
    
    goto End;
}//switch case
}//if case
else{
    pin_try --;
    printf("Invaid Pin..... only %d attempt left",pin_try);
    if (pin_try>=1){
        goto start;
        
    }
}
End:
printf("\nPress 1 to continuee...");
scanf("%d",&ch);
if(ch==1){
    pin_try=3;
    goto start;
}
printf("\nThanks for using ATM software...... ");

}