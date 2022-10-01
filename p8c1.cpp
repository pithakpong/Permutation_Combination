#include <stdio.h> 
int main() 
{ 
    int n,r,n_fac = 1,r_fac,nr_fac; 
    scanf("%d %d",&n,&r);  
    for(int i=0;i<n;i++) 
    { 
        n_fac *= i+1;
        if(i == n-r) 
        { 
            if(n-r > 1)
                nr_fac = n_fac / i+1; 
            else 
                nr_fac = 1;
        }
            

        if(i+1 == r) 
            r_fac = n_fac;
    } 

    int Permutation = n_fac / nr_fac; 
    int Combination = Permutation / r_fac;  
    printf("Permutation = %d\n",Permutation);  
    printf("Combination = %d\n",Combination);

}