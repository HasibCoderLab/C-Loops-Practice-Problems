// ==================================================
// =======================  👉👉  🔹🔹 Practice-Problem =========
// ==================================================


// Question - 1. Print the table of a number input by the user 

#include <stdio.h>
int main (){
    int n;
    int t = n;
    printf("Entr Number :");
    scanf("%d",&n);

    int i = 1;
    for(int i = 1 ; i<=n ; i++){
    t = n*i;
    printf("%d\n",t);
    }
    return 0;
}

#include <stdio.h>
int main (){
    int n;
    // int t = n;
    printf("Entr Number :");
    scanf("%d",&n);

    int i = 1;
    for(int i = 1 ; i<=n ; i++){
    i = n*2;
    printf("%d\n",i);
    }
    return 0;
}


#include <stdio.h>
int  main (){
    int n;
    printf("Enter Number  :");
    scanf("%d", &n);

    for(int i = 1 ;  i<=10; i++ ){
        printf("%d\n",n*i);
    }
    return 0 ;
}

//  Question - 1.Keep taking numbers as input from user until user enters an odd  number 

#include <stdio.h>
int main () {
    int n;
    do{
        printf("Enter Number : ");
        scanf("%d" , &n);
        printf("%d\n" , n);
        if( n % 2 != 0 ){
            break ; 
        }
      
    }while(1);
    printf("Bey !\n");
    return 0 ;
}

//  Question - 2.Keep taking numbers as input from user until 
//  user enters a numbers which is  multiple of 7 

#include <stdio.h>
int main(){
    int n;
    do{
        printf("Enter Number :");
        scanf("%d",&n);
        printf("%d\n" , n);

        if(n % 7 == 0){ // multiple of 7 
            break;
        }
    }while(1);
    printf("Sad song\n " );
    return 0 ;
}

// continue

#include <stdio.h>
int main () {
    for(int i = 1 ;  i<=6;i++){
        if(i == 5){ // Skip
            continue;
        }
        printf("%d\n",i);
    }
    return 0 ;
}


//  Question - 3.Print all numbers froms 1 to 10 except  for 6 

#include <stdio.h>
int main () {
   for(int i = 5 ; i<=50 ; i++){
    if(i == 6){ // Skip
        continue;
   }
  
    printf("%d\n",i);
   }
    return 0 ;
}

// Question - 3 Print all the odd numbers 5 to 50 

#include <stdio.h>
int main(){
    for(int i = 5 ; i <=50; i++){
        if(i % 2 !=0){
            printf("%d\n",i);
        }
    }
    return 0 ;
}




// Question - 3 Print the fctorial of  a number n

#include <stdio.h>
int main(){
    int n;
  
   printf("Emter Number : ");
   scanf("%d" , &n);
   int  fac   = 1;
   for(int i = 1 ; i<=n; i++ ){
    fac= fac*i;
  
   }
   printf("Final Output %d\n",fac);
    return 0 ;
}


// Question - 4..  Print reverse of the table for a number 

#include <stdio.h>
int main(){
int n;
printf("Enter Number : ");
scanf("%d", &n);


for(int  i = 10; i>=1; i--){
    // n = i*n;
    printf("%d\n", i*n);
}
    return 0 ;
}


// Question - 5.. Calculate the sum of all numbers between 5 & 50 (including 5 & 50)  

    #include <stdio.h>
    int main(){
         int sum = 0;
         for(int i = 5 ; i<=50 ; i++ ){
          sum = i+sum ;  // sum +=i ;      
         }
         printf("sum is %d\n", sum);
        return 0 ;
    }                               



    // #include <stdio.h>
    // int main(){

    //     return 0 ;
    // }                               






