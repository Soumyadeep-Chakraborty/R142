#include <iostream>
using namespace std;

int main(){
int b,c,i,temp;
cout<<"Enter Size Of Array : \n";
cin>>b;
int a[b];
cout<<"Enter Array Elements : \n";
for (i=0;i<b;i++){
cout<<"a["<<i<<"] : ";
cin>>a[i];
cout<<"        \n";
}
for (i=1;i<b;i++){
for (c=0;c<(b-1);c++){
if (a[c]>a[c+1]){
temp=a[c];
a[c]=a[c+1];
a[c+1]=temp;}
}
}
cout<<"the elements has been sorted as : "; 
for(i=0;i<b;i++){
cout<<"a["<<i<<"] : "<< a[i]<<endl;
}

return 0;
}
