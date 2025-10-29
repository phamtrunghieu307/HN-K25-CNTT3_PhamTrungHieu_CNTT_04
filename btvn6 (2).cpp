#include<stdio.h>
int main(){
int a,b;
int LuaChon;
printf("nhap so dau ");
scanf("%d",&a);
printf("nhau so thu hai ");
scanf("%d",&b);
printf("1.tong 2 so\n2.hieu 2 so\n3.tich 2 so\n4.thuong 2 so\n5.thoat\n");
printf("lua chon cua ban ");
scanf("%d",&LuaChon);
while(LuaChon != 5){
	switch(LuaChon){
		case 1:
			printf("%d + %d = %d\n",a,b,a+b);
			printf("1.tong 2 so\n2.hieu 2 so\n3.tich 2 so\n4.thuong 2 so\n5.thoat\n");
			printf("lua chon cua ban ");
			scanf("%d",&LuaChon);
			break;
		case 2:
			printf("%d - %d = %d\n",a,b,a-b);
			printf("1.tong 2 so\n2.hieu 2 so\n3.tich 2 so\n4.thuong 2 so\n5.thoat\n");
			printf("lua chon cua ban ");
			scanf("%d",&LuaChon);
			break;
		case 3:
			printf("%d * %d = %d\n",a,b,a*b);
			printf("1.tong 2 so\n2.hieu 2 so\n3.tich 2 so\n4.thuong 2 so\n5.thoat\n");
			printf("lua chon cua ban ");
			scanf("%d",&LuaChon);
			break;
			
		case 4:
			printf("%d / %d = %d\n",a,b,a/b);
			printf("1.tong 2 so\n2.hieu 2 so\n3.tich 2 so\n4.thuong 2 so\n5.thoat\n");
			printf("lua chon cua ban ");
			scanf("%d",&LuaChon);
			break;
}
}
	printf("thoat");
	
		
return 0;
}



