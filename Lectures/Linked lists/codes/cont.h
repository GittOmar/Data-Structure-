Vector::Vector( int s){N=s;}
void Vector::print(int index){cout<<arr[index];}
void Vector::insert(int value){arr[N+1]=value;N++;}
void Vector::add(Vector b){
int s = N;
for(int i=0,j=s;i<b.N;i++,j++)
{
    arr[j]=b.arr[i];
    N++;
}
}

