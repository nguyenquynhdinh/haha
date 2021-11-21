#include <stdio.h>

int main(){
	char LuaChon;
	printf("Con de co may chan nhi?\n");
	printf("A . 1\nB . 2\nC . 3\nD . 4\n");
	printf("Moi ban chon dap an: ");
	LuaChon = getchar();
	switch(LuaChon)
	{
		case 'a':
		case 'A':
		case 'b':
		case 'B':
		case 'c':
		case 'C':{
		   printf("huhu Lua chon cua ban da sai! Vui long chon lai nha hihi");
	       break;
	   }
	   case 'd':
	   	case 'D':{
	   		printf("Xin chuc mung nha ban da lua chon dung !");
	   		break;
	   	}
	   	default:
	   		printf("Dap an ban nhap khong phu hop xin vui long chon lai nhe!");
	     
	}

    return 0;
}

