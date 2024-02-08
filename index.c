// qus 2
// #include <stdio.h>

// int main(){
//    int arr[3][3]={{1,2,3},
//                  {4,5,6},
//                  {1,2,3}};
//     int sum=0;
//     int average=0;

//     for(int i=0;i<=2;i++){
//         for(int j=0;j<=2;j++){
//             sum=sum+arr[i][j];
//             average=sum/9;
//         }
//     }
//     printf("sum %d\n",sum);
//      printf("average %d",average);
   
//     return 0;
// }

// qus 3
// #include <stdio.h>

// int main(){
//     int arr[]={1,2,3};

//     for(int i=0;i<=3;i++){
//         if(i%2!=0){
//             printf("odd num %d\n",i);
//         }
//     }
//    return 0;
// }


// qus 4
// #include <stdio.h>
// int main(){
// int arr[]={1,2,3};
// int *p=&arr[i];
// for(int i=0;i<=2;i++){
//     printf("%u",*p);
// }
// }

// qusetion 5
// #include <stdio.h>
// #include <string.h>
// struct Leptop{
//      int price;
//   char company_name[100];
//   char processor[100];

// };
// int main(){
//  struct Leptop n[10];
//  int leptopN;
//  printf("enter leptop number ");
//  scanf("%d",&leptopN);

//  for(int i=0;i<leptopN;i++){
//     printf("enter price ");
//     scanf("%d",&n[i].price);
//     printf("enter company name ");
//     scanf("%s",&n[i].company_name);
//     printf("enter processor ");
//     scanf("%s",&n[i].processor);
//  }

//  for(int i=0;i<leptopN;i++){
//     printf("%d\n",n[i].price);
//     printf("%s\n",n[i].company_name);
//     printf("%s\n",n[i].processor);
    
//  }
// }


// #qus 1
// #include <stdio.h>

// int main(){
//     int sub1=90;
//     int sub2=35;
//     int sub3=50;
//     int sub4=80;
//     int sub5=87;

//     int sumall=sub1+sub2+sub3+sub4+sub5;
//     int averg=sumall/5;
//     printf("sumall %d\n",sumall);
//     printf("average %d",averg);
    
//     printf("\n");
//     if(averg>90){
//         printf("A grade");
//     }else if(averg>70){
//         printf("B grade");
//     }else if (averg>50){
//         printf("C grade");
//     }

//     return 0;
// }


// qus 7
// #include <stdio.h>
// int main(){
//     int arr[5][5]={{10,50,10,50,10},
//                   {10,20,30,9,10},
//                   {10,20,8,9,10},
//                   {10,7,8,9,10},
//                   {6,7,8,9,10}};
 
//   for(int i=0;i<=4;i++){
//     for(int j=0;j<=4;j++){
//         if(i+j==4 || j==4 || i==4 || i==2&&j==3 || i==3&&j==3 || i==3 &&j==2){
//             printf("%d ",arr[i][j]);
//         }else{
//             printf("  ");
//         }
//     }
//     printf("\n");
//   }
//    return 0;
// }
