int swap(int a,intb){
	a=a+b;
	b=a-b;
	a=a-b;
	printf("after swapping %d %d",a,b);
	printf("\n");
}

int wap(int*a,int *b){
	*a=*a+*b;
	*b=*a-*b;
	*a=*a-*b;
	printf("after swapping %d %d",*a,*b);
}

int main(){
	int a=10,b=20;
	printf("before swapping %d %d",a,b);
	printf("\n");
	swap(a,b);
	wap(&a,&b);
}
