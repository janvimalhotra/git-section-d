#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<=n-1;i++){
        scanf("%d",&arr[i]);
    }
    int target ;
    scanf("%d",&target);
    //linear search
    for(int i=0;i<=n-1;i++){
        if(arr[i]==target){
            printf("%d",i);
            return 0;
        }
    }
    printf("%d",-1);
}
    // sum
//     int sum=0;
//     for(int i=0;i<=4;i++){
//         sum=sum+arr[i];
//     }
//     printf("%d",sum);
//     // product
//     int product=1;
//     for(int i=0;i<=4;i++){
//         product=product*arr[i];
//     }
//     printf("%d",product);
//     //largest element of array
//     int max=arr[0];
//     for(int i=1;i<=4;i++){
//         if(max<arr[i])max=arr[i];
//     }
//     printf("%d",max);
//     //largest element of array
//     int min=arr[0];
//     for(int i=1;i<=4;i++){
//         if(min>arr[i])min=arr[i];
//     }
//     printf("%d",min);
//     sum=0;
//     for(int i=0;i<=4;i++){
//        if(arr[i]%2==0) sum=sum+arr[i];
//     }
//     printf("%d",sum);
//     //sum of odd elements
//     sum=0;
//     for(int i=0;i<=4;i++){
//        if(arr[i]%2!=0) sum=sum+arr[i];
//     }
//     printf("%d",sum);
//     //sum of evemn idexes
//     sum=0;
//     for(int i=0;i<=4;i+=2){
//         sum=sum+arr[i];
//     }
//     printf("%d",sum);
//     //sum of odd idexes
//     sum=0;
//     for(int i=1;i<=4;i+=2){
//         sum=sum+arr[i];
//     }
//     printf("%d",sum);
//     return 0;
// }