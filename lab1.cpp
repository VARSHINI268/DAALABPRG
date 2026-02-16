 //1)binary search         
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
}

/*2)selection sort*/
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
 
  
  
  
 /* 3)sequential search #include <iostream>
using namespace std;*/

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
   
     } 

     /*4)travelling salesman problem*/
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
/*5)knapsack*/
#include <iostream> 
using namespace std; 
 
int max(int a, int b) { 
    return (a > b) ? a : b; 
} 
 
int main() { 
    int n, W; 
    cout << "Enter number of items: "; 
    cin >> n; 
 
    int wt[n], val[n];
    cout << "Enter weights:\n"; 
    for(int i = 0; i < n; i++) 
        cin >> wt[i]; 
 
    cout << "Enter values:\n"; 
    for(int i = 0; i < n; i++) 
        cin >> val[i]; 
 
    cout << "Enter capacity of knapsack: "; 
    cin >> W; 
 
    int dp[n + 1][W + 1]; 
 
    for(int i = 0; i <= n; i++) { 
        for(int w = 0; w <= W; w++) { 
            if(i == 0 || w == 0) 
                dp[i][w] = 0; 
            else if(wt[i - 1] <= w) 
                dp[i][w] = max(val[i - 1] + dp[i - 1][w - wt[i - 1]], 
                               dp[i - 1][w]); 
            else 
                dp[i][w] = dp[i - 1][w]; 
        } 
    } 
 
    cout << "Maximum profit: " << dp[n][W]; 
    return 0; 
}
/*6)weighted*/
#include <iostream> 
#include <algorithm> 
using namespace std; 
 
struct Job { 
    int start, finish, profit; 
}; 
 
bool compare(Job a, Job b) { 
    return a.finish < b.finish; 
} 
 
int main() { 
    int n; 
    cout << "Enter number of jobs: "; 
    cin >> n; 
 
    Job jobs[n]; 
    cout << "Enter start, finish, profit:\n"; 
    for(int i = 0; i < n; i++) 
        cin >> jobs[i].start >> jobs[i].finish >> jobs[i].profit; 
 
    sort(jobs, jobs + n, compare); 
 
    int dp[n]; 
    dp[0] = jobs[0].profit; 
 
    for(int i = 1; i < n; i++) { 
        dp[i] = jobs[i].profit; 
        for(int j = 0; j < i; j++) { 
            if(jobs[j].finish <= jobs[i].start) 
                dp[i] = max(dp[i], dp[j] + jobs[i].profit); 
} 
} 
int result = dp[0]; 
for(int i = 1; i < n; i++) 
result = max(result, dp[i]); 
cout << "Maximum profit: " << result; 
return 0; 
}

// 7)merge sort
    #include <iostream>
using namespace std;

void ms(int a[],int l,int r){
    if(l>=r) return;
    int m=(l+r)/2,i=l,j=m+1,k=0,t[50];
    ms(a,l,m); ms(a,m+1,r);
    while(i<=m&&j<=r) t[k++]=(a[i]<a[j])?a[i++]:a[j++];
    while(i<=m) t[k++]=a[i++];
    while(j<=r) t[k++]=a[j++];
    for(i=l,k=0;i<=r;i++,k++) a[i]=t[k];
}

int main(){
    int a[]={4,1,3,2},n=4;
    ms(a,0,n-1);
    for(int i=0;i<n;i++) cout<<a[i]<<" ";
}

//8)Jhonson trotter algorithm
#include <iostream>
using namespace std;

int a[10], d[10]; 
int mobile(int n){
    int pos=0;
    for(int i=1;i<=n;i++)
        if((d[a[i]]==-1 && a[i]>a[i-1]) ||
           (d[a[i]]==1 && a[i]>a[i+1]))
            pos=i;
    return pos;
}

int main(){
    int n=3;
    for(int i=1;i<=n;i++){ a[i]=i; d[i]=-1; }

    while(true){
        for(int i=1;i<=n;i++) cout<<a[i]<<" ";
        cout<<endl;

        int p=mobile(n);
        if(!p) break;

        swap(a[p],a[p+d[a[p]]]);
        for(int i=1;i<=n;i++)
            if(a[i]>a[p]) d[a[i]]*=-1;
    }
}
//9)topological sorting
#include <iostream>
#include <vector>
#include <stack>
using namespace std;

vector<int> g[10];
bool vis[10];
stack<int> st;

void topo(int v){
    vis[v]=true;
    for(int u : g[v])
        if(!vis[u]) topo(u);
    st.push(v);
}

int main(){
    int n=6;
    g[5]={2,0}; g[4]={0,1};
    g[2]={3};   g[3]={1};

    for(int i=0;i<n;i++)
        if(!vis[i]) topo(i);

    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
}

//10)master theorem
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int a, b, k;   
    cin >> a >> b >> k;

    double x = log(a)/log(b); 
    if(k < x)
        cout << "Case 1 : Theta(n^" << x << ")";
    else if(k == x)
        cout << "Case 2 : Theta(n^" << k << " log n)";
    else
        cout << "Case 3 : Theta(n^" << k << ")";

    return 0;
}
  
//instertion sort
#include <iostream>
using namespace std;

int main() {
    int a[]={5,2,4,1,3}, n=5;

    for(int i=1;i<n;i++){
        int key=a[i], j=i-1;
        while(j>=0 && a[j]>key){
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=key;
    }

    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
}
