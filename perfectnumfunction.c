char perfect(a){
	int b,i,r;
	b=0;
	for (i=1;i<=(a-1);i++){
		r=a%i;
		if (r==0)
		b+=i;
	}
	if (a==b){
	printf("its a perfect no.");
	}
	else{
		printf("its not a perfect no.");
	}
}
main(){
	int a;
	printf("enter number to be chechked");
	scanf("%d",&a);
	perfect(a);                                                                                                                                                               
}
