#include<stdio.h>         //header file
int i,temp,j,n;           //here i am declaring variable
int Burst_Time[10],process_no[10],bill[10];
void Billing_counter()              //wants to create billing process
{	
printf("******According to the max gifts purchased by each students order of decreasing as follows******\n\t\t\t\t\t\t");   
	    for (i = 0; i < n; i++) 
	        {
	            printf("%d\t",Burst_Time[i]);// arranging gifts in decreasing order	
	            printf("\n\t\t\t\t\t\t");
		    }
		    printf("\n\n");
		printf("\t***Order of billing as per the decreasing order of buying the no of gifts as follows****\n\t\t\t\t\t");
		for (i = 0; i < n; i++) 
		    {
		    	 bill[i]= 100* Burst_Time[i];//multiplying by 100 with the no of gifts so that we can calculate cost
		        printf("\t%d",bill[i]); // found bill in deceasing order 
				 printf("\n\t\t\t\t\t"); 	
		    }
		    printf("\n\n");
  printf("\t!!!!!!!!!!!!!!!^^^Arranging the students in the queue for billing in the decreasing order of gifts^^^!!!!!!!!!!!!!!!!\n\t");
  printf("[ STUDENT NUMBER ]\t\t[ NUMBER OF GIFTS PURCHASED ]\t\t[ TOTAL COAST OF GIFT ]\n\n\t"); 

  for (i = 0; i < n; i++) 

		   { 
		        printf("\tS[%d] \t\t\t\t" ,process_no[i]); 
		        printf("\t%d \t\t\t\t",Burst_Time[i]);                  
		                 //calculating total cost of gifts of each student.
	         	printf("%d (Rs.) \t\t\t",bill[i]); 
	            printf("\n\n\t");
	       }
	       printf("\n\n");
	   
			
		  
    }

void Save() //list of gifts taken by students(entered value by user)
   {

     printf("\n\n");
     printf("\t*******Saving the Data that has taken from the Students******\n\n");
	 printf( "\n\t[ STUDENT NUMBER ]\t\t[ NUMBER OF GIFTS PURCHASED ]\n\t"); 

	    for (i = 0; i < n; i++)  
	      { 
		      printf("\tS[%d] \t\t\t\t" ,process_no[i]); // \t used for spacing between two words of character 
		      printf(" %d \t\t\t",Burst_Time[i]); // \n used for leaving one line.                 
	          printf("\n\n\t");
	      } 
	}

void Bubble_Sorting()    //using bubble sort so that we can arrange students in the decreasing order of gift
   {
	    for(i=0;i<n;i++)
          {
    	      for(j=i+1;j<n;++j)
			     {
		            if(Burst_Time[i]<Burst_Time[j])     //student with max no of gifts is given priority
					{
		                temp=Burst_Time[i];            //swapping the values so that we can arrange students in the
		                 Burst_Time[i]=Burst_Time[j];   //decreasing order of gifts
						Burst_Time[j]=temp;
                        temp=process_no[i];           //temp is temporary variable
                        process_no[i]=process_no[j];   //swapping the process numbers
                        process_no[j]=temp;
                    }
                 }
}          
}




int main() 
{ 
    printf("\n\t!!!!!^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^!!!!\n\t");
    printf("\t\t\t!!!!!^^^NAME-:KM. AYUSHI SINGH^^^!!!!\n\t\t");
    printf("\t\t!!!!!^^^RGISTRATION_NO.-:11806775^^^!!!!\n\t\t");
    printf("\t\t!!!!!^^^ROLL NUMBER-:A17^^^!!!!\n\t\t");
    printf("\t\t!!!!!^^^ASSIGNMENT-:CSE(316)^^^!!!!\n\t\t");
    printf("\t\t!!!!!^^^SUBMITTED TO-:SIR SUMIT MITTU^^^!!!!\n\t\t");
    printf("\n\t!!!!!^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^!!!!\n\n\n");
	printf("\n\t!!!!!^^^^Enter the number of students who wants to purchase gifts from event^^^^!!!!\n\t\t\t\t\t\t");  // process number initialization
     scanf("%d",&n);    //scanf used for taking inputs from keyboard..
     printf("\t!!!!!!!!!!!!!!!^^^So here are the special offers for the Students^^^!!!!!!!!!!!!!!!!\n\t\t\t");
     printf("1.)Price of all gifts are fixed.\n\t\t\t2.)You can buy any no. of the gift.\n\t\t\t");
     printf("3.)Price of every gift is **100** only.\n");
     printf("\t!!!!!^^^^Listing the random no. of gifts of every student has taken ^^^^!!!!\n");
        for(i=0;i<n;i++)    //using for loop for taking student numbers and no of gifts respectively.
          {
              printf("\n\tStudent(%d)\n",i+1);
              printf("\tEnter the no of gift that u have taken-:");
              scanf("%d",&Burst_Time[i]);  //how many gifts student wants to take.
              process_no[i]=i+1;           //generating process number so that we can arrange the order of student
			                              //who is taken same number of gifts. 
			}
        Save();
        Bubble_Sorting();
        Billing_counter();
         
}

