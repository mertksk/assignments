/* Mert Özçelik
 2243582 */
#include<stdio.h>
int main(){ 
int i=1,choice=0,base,digit3=0;						
char numsix;
int num=0, decisum, bin=0 ; 
int a, b, c  ;
int rm, location = 1,remain;
int sum,cout,part1,part2,part3;
int digit=0,invalid=0,norm=0,pernum=0;
		while(i=1){																		//We dont want that program closes after taking one computation!
			if(choice==2){
			 printf("\nBye bye!");										
				break; }
			printf("Welcome to Full Adder!");
			printf("\n(1) Compute and Display the Outputs");
			printf("\n(2) Quit");
			printf("\nYou choose: ");
				
			scanf("%d",&choice);
			printf("\nYou've chosen %d",choice);
			switch(choice){			
				case 1: 
					printf("\nWhich base will you use to enter data lines (base 16/8/2)?");
					scanf("%d",&base);
			if(base==2){
				    printf("enter a input");
				    scanf("%d",&num);				    {
			a = num / 100;															
			b = num / 10 - a * 10;									//We're finding a,b,c here	
			c = num - (a * 100 + b * 10);
		    if (a<2 && b<2 && c<2){										//Calculating "Sum" below
				if (a == b){													//We're finding Sum below
					sum = 0;
					if (sum == c){
						sum = 0;
					}
					else{
						sum = 1;					}
				}
				else{
					sum = 1;
					if (sum == c){
						sum = 0;
					}
					else{
						sum = 1;
					}		}	
				printf("Sum:%d", sum);									//Calculating "C-out" below
				if (a == b){										
					part3 = 0;
				}
				else{
					part3 = 1;
				}
				if (c == part3){
					if (c == 1){
						part2 = 1;
					}
					else{
						part2 = 0;
					}
				}
				if (a == b)			{								
					if (a == 1){
						part1 = 1;
					}
					else{
						part1 = 0;
					}
				}
				if (part1 == part2){
					if (part1 == 0){
						cout = 0;
					}
					else{
						cout = 1;
					}
				}
				else{
					cout = 1;
				}
				printf("C-out:%d\n", cout);;
				break;
			}		
			    else{
				    printf("\nThe number that you entered is invalid!\n");
				    break;
			}		}				   } 				    
			else if(base==8){
			        printf("enter a input");
				   	scanf("%d",&num);               
    
                    pernum = num;												//We're controlling some cases whether they are suitable or not!
				    decisum = num;
				     do{        
                        remain=num % 10;
                        num=num/10;
                        if(remain==8 || remain==9){
                            break;
                                    }
                        
                        }while(num > 10 );
                    
					while (decisum>0){										//converting 8 to base 2!
					rm = decisum % 2;
					bin = (rm*location) + bin;
					decisum /= 2;
					location *= 10;				}					
				a = bin / 100;												//finding a,b,c here!
				b = bin / 10 - a * 10;									
				c = bin - (a * 100 + b * 10);
				
			 if (pernum <= 7 && pernum >= 0){				
				if (a == b){													//We're finding Sum below
					sum = 0;
					if (sum == c){
						sum = 0;
					}
					else{
						sum = 1;					}
				}
				else{
					sum = 1;
					if (sum == c){
						sum = 0;
					}
					else{
						sum = 1;
					}		}	
				printf("Sum:%d", sum);
				if (a == b){							
					part3 = 0;
				}
				else{
					part3 = 1;
				}
				if (c == part3){						
					if (c == 1){
						part2 = 1;
					}
					else{
						part2 = 0;
					}
				}
				if (a == b)			{
					if (a == 1){
						part1 = 1;
					}
					else{
						part1 = 0;
					}
				}
				if (part1 == part2){
					if (part1 == 0){
						cout = 0;
					}
					else{
						cout = 1;					}
				}
				else{
					cout = 1;
				}				
				
				printf("C-out:%d\n", cout);
				break;
			}			
		   else if((remain==8||remain==9) && pernum>7) {
				printf("%d is a invalid number in base 8\n",pernum);
				break;
			}
			else{
				printf("%d number cannot be represent 3-digits in base 2!",pernum);
			}	 }
				   
	    	else if(base==16){
                    
				    printf("enter a input");
				    while(getchar() != '\n');												//scaning the value with type char because in base 16 letter A to F are valid!
				    scanf("%c",&numsix);
    		    	pernum=numsix;
    	     		while(numsix!=10){    
    
  
    				if((numsix<=70 && numsix>=65)||(numsix>=56 && numsix<=57)){        
         							digit++;
            						
        									 }   	
    				else if(numsix>=48 && numsix<=57){
        							norm++;        
        							
   									 }    
  				    else if(numsix!=10){
       
     					   invalid++;
      						 break;
   								  }
    	
						scanf("%c",&numsix); }
       if(invalid>0){
           invalid=0;
           norm=0;
           digit=0;
       		printf("This is a invaild number in base 16\n");
       		break;	   }
	   else if(digit>0 || (norm>1))
		{   invalid=0;
            norm=0;
            digit=0;
		    printf("The number that you entered cannot be represented 3 digits in base 2 \n");
			break;						   }
		else if(norm>0){
		            invalid=0;
                    norm=0;
                    digit=0;
					pernum=pernum-48;	   
				   decisum = pernum;
					while (decisum>0){											
					    rm = decisum % 2;											//covering base 16 to binary!
					    bin = (rm*location) + bin;								
					    decisum /= 2;
					    location *= 10;				}					
				a = bin / 100;										
				b = bin / 10 - a * 10;									
				c = bin - (a * 100 + b * 10);
			 if (num <= 7 && num >= 0){				
				if (a == b){							
					sum = 0;											//Calculating "Sum" below!
					if (sum == c){
						sum = 0;
					}
					else{
						sum = 1;
					}				}
				else{
					sum = 1;
					if (sum == c){
						sum = 0;
					}
					else{
						sum = 1;
					}				}
				if (a == b){								//Calculating "C-out" below!
					part3 = 0;
				}
				else{
					part3 = 1;
				}
				if (c == part3){							
					if (c == 1){
						part2 = 1;
					}
					else{
						part2 = 0;					}
				}
				if (a == b)			{
					if (a == 1){
						part1 = 1;
					}
					else{
						part1 = 0;					}
				}
				if (part1 == part2){
					if (part1 == 0){
						cout = 0;
					}
					else{
						cout = 1;					}
				}
				else{
					cout = 1;
				}				
				printf("Sum:%d", sum);
				printf("C-out:%d\n", cout);
				break;
			}			
		   else {
				printf("This number cannot be represented in 3 digits in base 2\n");
				break;
			}	} 
					break;}
				case 2:													//if the user selects 2 this means the end of the program!
					break;
				default:												//if the user enters number except 1 or 2 , We let her ,him know!
					printf("\nThis number has no fuction!");
					break;
					}	} 	return 0;}
