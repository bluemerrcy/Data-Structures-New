void sort(){
		    int *p1;
		    int *p2;
		    int temp ,i ,j;
		    for(i =0; i<size; i++ ){
		        p1 = arr+i;
		        for(j = i+1; j<size; j++){
		            p2 = arr+j;
		            if(*p1>*p2){
		        temp = *p1;
		        *p1 = *p2;
		        *p2 = temp;}
		        }
		        
		    }
		}   

//---------------------------------------------------------------------------------------------------------
void sort(){
    int*p1
    int*p2;
    int temp,i,j;
    for(i=0;i<length;i++){
        p1=arr+i;
        for(int j=i+i;j<length;j++){
            p2=arr+j;
            if(*p1>*p2){
                temp=*p1;
                *p1=*p2;
                *p2=temp;
            }
        }
    }
}
//- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - 
void sort(){
    int*p1;
    int*p2;
    int temp,i,j;
    for(int i=0;i<length;i++){
        p1=arr+i;
        for(int j=i+1);j<length;j++{
            p2=arr+j;
            if(*p1>*p2){
                temp=*p2;
                *p2=*p1;
                *p1=temp;
            }
        }
    }
}
//- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - 
void sort(){
    int *p1,*p2;
    int temp,i,j;
    for(int i=1;i<length;i++){
        p1=arr+1;
        for(int j=i+1;j<length;j++){
            p2=arr+j
            if(*p1>*p2){
                temp=*p2;
                *p2=*p1;
                *p1=temp;
            }
        }
    }
}
//- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - 
void sorting(){
    int*p1,*p2;
    int temp,i,j;
    for(int i=1;i<length;i++)
    p1=arr+i;
    for(int j=i+1;j<length;j++)
    p2=arr+j;
    temp=*p2;
    *p2=*p1;
    *p1=temp;
}