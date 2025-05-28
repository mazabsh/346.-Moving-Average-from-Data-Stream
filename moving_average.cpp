#include<iostream> 
#include<queue> 
#include<vector> 

using namespace std; 
class MovingAverage {
public: 
    int window_size; 
    double sum; 
    queue<int> q; 
    MovingAverage(int size): window_size(size), sum(0){}
    double next(int val) {
      sum+=val; 
      q.push(val); 
      if(q.size()>window_size){
        sum-=q.front(); 
        q.pop(); 
      }
      return sum/q.size(); 
    }
};
int main(){
  MovingAverage mov(3); 
  cout<< mov.next(1) <<endl; 
  cout << mov.next(10) <<endl; 
  cout << mov.next(3) << endl; 
  cout << mov.next(5) <<endl; 
  return 0; 
  
    
}
