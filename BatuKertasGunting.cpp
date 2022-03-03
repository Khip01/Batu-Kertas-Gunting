#include <iostream> //library dasar
#include <windows.h> //library masuk ke system
//#include <conio.h> //library getch
#include <time.h> //library untuk time
using namespace std;

//fungsi void kesalahan
void kesalahan(){
	cout<<" ---------------------- \n";
	cout<<"| NOTE KESALAHAN       |\n";
	cout<<"| - Input Salah        |\n";
	cout<<"| - Masukkan angka 1-3 |\n";
	cout<<" ---------------------- \n\n";
	
}
int main(){
	awal :
	int player, bot;
	char jwb;
	
	srand(time(0));
	bot = rand()%3;
	system("color a");
	
	cout<<"========SELAMAT DATANG DI GAME========\n";Sleep(800);
	cout<<"Choose Your Charracter\n";Sleep(700);
	cout<<"1";Sleep(100);cout<<">";Sleep(100);cout<<" Batu\n";Sleep(200);
	cout<<"2";Sleep(100);cout<<">";Sleep(100);cout<<" Kertas\n";Sleep(200);
	cout<<"3";Sleep(100);cout<<">";Sleep(100);cout<<" Gunting\n";Sleep(200);
	cout<<"\nP";Sleep(100);cout<<"I";Sleep(100);cout<<"L";Sleep(100);cout<<"I";Sleep(100);cout<<"H";cout<<" ";Sleep(100);cout<<"=";Sleep(100);cout<<"> ";Sleep(100);
	cin>>player;
	
	//If not integer(selain nomor) goto player;
	if(cin.fail()){
		cin.clear();
		cin.ignore();
		system("cls");
		kesalahan();
		goto awal;
	}
	
	//Message Box
	switch (player){
		case 1 :
			MessageBox (NULL, "ANDA MEMILIH BATU", "NOTIFF", MB_OK);
			break;
		case 2 :
			MessageBox (NULL, "ANDA MEMILIH KERTAS", "NOTIFF", MB_OK);
			break;
		case 3 :
			MessageBox (NULL, "ANDA MEMILIH GUNTING", "NOTIFF", MB_OK);
	}
	
	//BATU/KERTAS/GUNTING ??
	if (bot == 0){
		switch (player){
			case 1 :
				cout<<"\nDANNNNN HASILNYAA";Sleep(800);cout<<". ";Sleep(800);cout<<". ";Sleep(800);cout<<". \n\n";
				cout<<"==========>     SERI     <=========="<<endl;system("color 6");Sleep(100);//mengganti color kuning tua/oren
				cout<<"Player = "<<player<<" BATU"<<endl;
				cout<<"Bot    = "<<bot+1<<" BATU"<<endl;
				break;
			case 2 :
				cout<<"\nDANNNNN HASILNYAA";Sleep(800);cout<<". ";Sleep(800);cout<<". ";Sleep(800);cout<<". \n\n";
				cout<<"==========>  ANDA MENANG <=========="<<endl;system("color e");Sleep(100);//mengganti color kuning
				cout<<"Player = "<<player<<" KERTAS"<<endl;
				cout<<"Bot    = "<<bot+1<<" BATU"<<endl;
				break;
			case 3 :
				cout<<"\nDANNNNN HASILNYAA";Sleep(800);cout<<". ";Sleep(800);cout<<". ";Sleep(800);cout<<". \n\n";
				cout<<"==========>  ANDA KALAH  <=========="<<endl;system("color 4");Sleep(100);//mengganti color merah
				cout<<"Player = "<<player<<" GUNTING"<<endl;
				cout<<"Bot    = "<<bot+1<<" BATU"<<endl;
				break;
			default :
				system("cls");
				kesalahan();
				goto awal;
		}
	}else if (bot == 1){
		switch (player){
			case 1 :
				cout<<"\nDANNNNN HASILNYAA";Sleep(800);cout<<". ";Sleep(800);cout<<". ";Sleep(800);cout<<". \n\n";
				cout<<"==========>  ANDA KALAH  <=========="<<endl;system("color 4");Sleep(100);//mengganti color merah
				cout<<"Player = "<<player<<" BATU"<<endl;
				cout<<"Bot    = "<<bot+1<<" KERTAS"<<endl;
				break;
			case 2 :
				cout<<"\nDANNNNN HASILNYAA";Sleep(800);cout<<". ";Sleep(800);cout<<". ";Sleep(800);cout<<". \n\n";
				cout<<"==========>     SERI     <=========="<<endl;system("color 6");Sleep(100);//mengganti color kuning tua/oren
				cout<<"Player = "<<player<<" KERTAS"<<endl;
				cout<<"Bot    = "<<bot+1<<" KERTAS"<<endl;
				break;
			case 3 :
				cout<<"\nDANNNNN HASILNYAA";Sleep(800);cout<<". ";Sleep(800);cout<<". ";Sleep(800);cout<<". \n\n";
				cout<<"==========>  ANDA MENANG <=========="<<endl;system("color e");Sleep(100);//mengganti color kuning
				cout<<"Player = "<<player<<" GUNTING"<<endl;
				cout<<"Bot    = "<<bot+1<<" KERTAS"<<endl;
				break;
			default :
				system("cls");
				kesalahan();
				goto awal;
		}
	}else if (bot == 2){
		switch (player){
			case 1 :
				cout<<"\nDANNNNN HASILNYAA";Sleep(800);cout<<". ";Sleep(800);cout<<". ";Sleep(800);cout<<". \n\n";
				cout<<"==========>  ANDA MENANG <=========="<<endl;system("color e");Sleep(100);//mengganti color kuning
				cout<<"Player = "<<player<<" BATU"<<endl;
				cout<<"Bot    = "<<bot+1<<" GUNTING"<<endl;
				break;
			case 2 :
				cout<<"\nDANNNNN HASILNYAA";Sleep(800);cout<<". ";Sleep(800);cout<<". ";Sleep(800);cout<<". \n\n";
				cout<<"==========>  ANDA KALAH  <=========="<<endl;system("color 4");Sleep(100);//mengganti color merah
				cout<<"Player = "<<player<<" KERTAS"<<endl;
				cout<<"Bot    = "<<bot+1<<" GUNTING"<<endl;
				break;
			case 3 :
				cout<<"\nDANNNNN HASILNYAA";Sleep(800);cout<<". ";Sleep(800);cout<<". ";Sleep(800);cout<<". \n\n";
				cout<<"=========>     SERI     <=========="<<endl;system("color 6");Sleep(100);//mengganti color kuning tua/oren
				cout<<"Player = "<<player<<" GUNTING"<<endl;
				cout<<"Bot    = "<<bot+1<<" GUNTING"<<endl;
				break;
			default :
				system("cls");
				kesalahan();
				goto awal;
		}
	}
	
	//LAGI ??
	//(y/n) =>
	lagi :
	cout<<"\nL";Sleep(200);cout<<"A";Sleep(200);cout<<"G";Sleep(200);cout<<"I";Sleep(200);cout<<"?\n";Sleep(200);cout<<"(y/n) => ";Sleep(200);
	cin>>jwb;
	
	
	if (jwb == 'y'){
		system("cls");
		goto awal;
	} else if (jwb == 'n'){
		cout<<"OKAY BYEE"<<endl;
	}else{
		cout<<"Masukkan salah\n";
		goto lagi;
	}
	
	//PROGRAM BERAKHIR
	MessageBox (NULL, "Terima kasih telah mencoba qaqa\nDatang lagi yaa ^3^", "BAI BAIII", MB_OK);
	
}
