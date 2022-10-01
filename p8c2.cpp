#include <stdio.h>  

int main() 
{ 
    int n,r,sumn = 1,sumnr = 1,sumr = 1; 
    scanf("%d %d",&n,&r); 
    for(int i=1;i<=n;i++) 
    { 
        sumn*=i;
    } 
    for(int i=1;i<=r;i++)  
    { 
        sumr*=i;
    }  
    if(n-r > 0) 
    { 
        for(int i=1;i<=n-r;i++)  
        { 
            sumnr*=i;
        }   
    } 
    else 
        sumnr = 1; 
int Permutation = sumn/sumnr; 
int Combination = Permutation/sumr;
printf("Permutation = %d\n",Permutation); 
printf("Combination = %d\n",Combination);
    
}