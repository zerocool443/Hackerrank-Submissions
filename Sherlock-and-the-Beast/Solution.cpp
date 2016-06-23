
//SOLUTION 


#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        int n;
        cin >> n;
         int arr[n];
            if(n < 3 || n==4 || n==7 )             // CASES FOR  NO ANSWER 
                cout<<-1;
              else if(n%3 ==1 && n>7)               // CASE n%3 is 1 and n is greater than 7 -> LAST 10 WILL BE 3 REST ALL WILL BE 5 
         {
              for(int i = n-10; i < n;i++)                  
                arr[i]=3;     
            for(int i = 0;i< n-10;i++)
                arr[i]=5;
             for(int i=0;i<n;i++)
               cout<<arr[i];
          
                  
              }
        
        else if(n%3 == 0)                                 // CASE n%3 is 0 -> All five 
             { for(int i=0;i<n;i++)
                 arr[i]=5;
              
              for(int i=0;i<n;i++)
                 cout<<arr[i];
             }
        else if(n%3 == 2 )                                 // CASE  n%3 is 2  -> LAST 5 WILL BE 3 REST ALL WILL BE 5 
               {
            for(int i = n-5; i < n;i++)                  
               arr[i]=3;
                       
            for(int i = 0;i< n-5;i++)
                arr[i]=5;
             for(int i=0;i<n;i++)
                 cout<<arr[i];
          
        
        
        }
            
    
    
    cout<<endl;
    }
    return 0;
}
