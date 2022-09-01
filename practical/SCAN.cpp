#include<iostream>
using namespace std;

void scan_algo(int left[], int right[], int count , int limit){
    int arr[20];
    int x = count - 1, y = count + 1, c = 0, d= 0, j;
    while(x>-1){
        cout<<" X : "<<x<<endl;
        cout<<" Left[X] :" <<left[x]<<endl;
        arr[d] = left[x];
        x--;
        d++;
    }
    arr[d] = 0;
    while(y < limit+1){
        arr[y] = right[c];
        c++;
        y++;
    }
    cout<<" Scanning Order: ";
    for(j = 0;j<limit + 1;j++){
        cout<<arr[j]<<"\t";
    }
    
}

void division(int elements[] , int limit, int disk_head){
    int count = 0, p,q,m,x;
    int left[20],right[20];
    for(count = 0;count<limit; count ++){
      if(elements[count] > disk_head){
        cout<<" Break Position : "<<elements[count]<<endl;
        break;
      }  
    }
    cout<<" Value : "<<count<<endl;
    q = 1;
    p = 0;
    m = limit;
    left[0] = elements[0];
    cout<<" Left : " <<left[0]<<endl;
    while(q<count){
        cout<<" Element[l] value :"<<elements[q]<<endl;
        left[q] = elements[q];
        cout<<" Left : " <<left[q];
        q++;
        cout<<"l : "<<q<<endl;
    }
    x = count;
    while(x<m){
        right[p] = elements[x];
        cout<<" Right :"<<right[p] <<endl;
        cout<<" Element: "<<elements[x];
        p++;
        x++;
    }
    scan_algo(left, right,count, limit);
}

void sorting(int elements[], int limit){
    int location, count, j, temp, small;
    for(count = 0;count<limit-1; count++){
        small = elements[count];
        location= count;
        for(j =count+1;j<limit;j++){
            if(small > elements[j]){
                small = elements[j];
                location = j;
                
            }
        }
        temp = elements[location];
        elements[location] = elements[count];
        elements[count] = temp;
    }
}


int main(){
    int count, disk_head, elements[20], limit;
    cout<<" Enter total number of locations :";
    cin>>limit;
    cout<<" Enter position of disk head : ";
    cin>>disk_head;
    cout<<" Enter elements of disk head queue : ";
    for(count = 0;count < limit; count++){
        cout<<" Elements["<<count+1<<"] : ";
        cin>>elements[count];
    }
    sorting(elements, limit);
    division(elements, limit, disk_head);
    return 0;
}
