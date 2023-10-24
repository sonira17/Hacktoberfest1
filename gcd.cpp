# include <iostream>
using namespace std;
int gcd(int x,int y){
   if(x==0) return y;
   if(y==0) return x;
   while(x>0&&y>0){
        if(x>y){
            x=x-y;
        }
        else{
            y=y-x;
        }
   }
   return x==0?y:x;
}
int main(){
   int x=72;
   int y=24;
   cout<<"Greatest common factor :"<<gcd(x,y)<<endl;
}
