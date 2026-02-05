 //binary search             
/*#include <iostream> 
using namespace std; 
 
int main() { 
    int n; 
    cout << "Enter number of elements: "; 
    cin >> n; 
 
    int a[n]; 
    cout << "Enter elements:\n"; 
    for(int i = 0; i < n; i++) 
        cin >> a[i]; 
 
    for(int i = 0; i < n - 1; i++) { 
        for(int j = 0; j < n - i - 1; j++) { 
            if(a[j] > a[j + 1]) { 
                int temp = a[j]; 
                a[j] = a[j + 1]; 
                a[j + 1] = temp; 
            } 
        } 
    } 
 
    cout << "Sorted array:\n"; 
    for(int i = 0; i < n; i++) 
        cout << a[i] << " "; 
 
    return 0; 
}*/

/*selection sort
#include <iostream> 
using namespace std; 
 
int main() { 
    int n; 
    cout << "Enter number of elements: "; 
    cin >> n; 
 
    int a[n]; 
    cout << "Enter elements:\n"; 
    for(int i = 0; i < n; i++) 
        cin >> a[i]; 
 
    for(int i = 0; i < n - 1; i++) { 
        int minIndex = i; 
        for(int j = i + 1; j < n; j++) { 
            if(a[j] < a[minIndex]) 
                minIndex = j; 
        } 
        int temp = a[i]; 
        a[i] = a[minIndex]; 
        a[minIndex] = temp; 
    } 
 
    cout << "Sorted array:\n"; 
    for(int i = 0; i < n; i++) 
        cout << a[i] << " "; 
 
    return 0; 
} 
 
  */
  
  
 /* sequential search #include <iostream>
using namespace std;

int main(){
  
  int n, key;
  cout<<"enter numbers";
  cin>>n;
   
   int a[n];
   cout<<"enter numbers:\n";
   for(int i=0;i<n;i++)
   cin>>a[i];
   cout<<"Enter elements to search";
   cin>>key;
   
   for(int i=0;i<n;i++){
     if(a[i]==key){
       cout<<"element found at position"<<i+1;
       return 0;
     }
   }
   cout<<"Element not found";
   return 0;
   
     } */

     /*travelling salesman problem*/
#include <iostream> 
#include <climits> 
using namespace std; 
 
int n; 
int dist[10][10]; 
int dp[1 << 10][10]; 
 
int min(int a, int b) { 
    return (a < b) ? a : b; 
} 
 
int tsp(int mask, int pos) { 
    if(mask == (1 << n) - 1) 
        return dist[pos][0]; 
 
    if(dp[mask][pos] != -1)
      if(dp[mask][pos] != -1) 
        return dp[mask][pos]; 
 
    int ans = INT_MAX; 
    for(int city = 0; city < n; city++) { 
        if((mask & (1 << city)) == 0) { 
            int newAns = dist[pos][city] + 
                         tsp(mask | (1 << city), city); 
            ans = min(ans, newAns); 
        } 
    } 
 
    return dp[mask][pos] = ans; 
} 
int main() { 
    cout << "Enter number of cities: "; 
    cin >> n; 
 
    cout << "Enter distance matrix:\n"; 
    for(int i = 0; i < n; i++) 
        for(int j = 0; j < n; j++) 
            cin >> dist[i][j]; 
 
    for(int i = 0; i < (1 << n); i++) 
        for(int j = 0; j < n; j++) 
            dp[i][j] = -1; 
 
    cout << "Minimum travel cost: " << tsp(1, 0); 
    return 0; 
} 


   
   
      