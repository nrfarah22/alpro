#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	int m1,m2,m3,m4,m5,m6, bnyk, h1,h2,h3,h4,h5;
	float jrk, totals, totalt,totalakhir, ongkirs, ongkirt, disc;
	cout<<"-----------------------"<<endl;
	cout<<"	MENU RUMAH MAKAN"<<endl;
	cout<<"-----------------------"<<endl;
	cout<<"1. Ayam Geprek : Rp21.000,00"<<endl;
	cout<<"2. Ayam Goreng : Rp17.000,00"<<endl;
	cout<<"3. Udang Goreng : Rp19.000,00"<<endl;
	cout<<"4. Cumi Goreng : Rp20.000,00"<<endl;
	cout<<"5. Ayam Bakar : Rp25.000,00"<<endl<<endl<<endl;
	
	cout<<"Masukkan banyak pesan"<<endl;
	cout<<" Ayam Geprek   = "; cin>>m1;
	h1=21000*m1;
	cout<<" Ayam Goreng   = "; cin>>m2;
	h2=17000*m2;
	cout<<" Udang Goreng  = "; cin>>m3;
	h3=19000*m3;
	cout<<" Cumi Goreng   = "; cin>>m4;
	h4=20000*m4;
	cout<<" Ayam Bakar    = "; cin>>m5;
	h5=25000*m5;
	
	ofstream slp;
	slp.open("Slip.txt", ios::out);
	slp<<endl;
	slp<<"	   RUMAH MAKAN"<<endl;
	slp<<endl;
	slp<<"------------------------------------------"<<endl;
	slp<<m1<<" Ayam Geprek	= Rp"<<h1<<endl;
	slp<<m2<<" Ayam Goreng	= Rp"<<h2<<endl;
	slp<<m3<<" Udang Goreng	= Rp"<<h3<<endl;
	slp<<m4<<" Cumi Goreng	= Rp"<<h4<<endl;
	slp<<m5<<" Ayam Bakar	= Rp"<<h5<<endl;
	slp<<"------------------------------------------"<<endl;

	
	cout<<"Jarak Rumah (km)= "; cin>>jrk;
	if (jrk <= 3)
	{
		ongkirs=15000;
		cout<<"			Ongkir = Rp15000"<<endl;
		slp<<"			Ongkir = Rp15000"<<endl;
	}
	else if (jrk > 3)
	{
		ongkirs=25000;
		cout<<"				Ongkir = Rp25000"<<endl;
		slp<<"				Ongkir = Rp25000"<<endl;
	}
	
	totals=h1+h2+h3+h4+h5;
	cout<<"				Subtotal =Rp"<<totals<<endl;
	slp<<"				Subtotal =Rp"<<totals<<endl;
	if((totals>=25000) && (totals<50000))
	{
		ongkirt=ongkirs-3000;
		totalakhir=totals+ongkirt;
		cout<<"				disc = ongkir -3000"<<endl<<endl;
		slp<<"				disc = ongkir -3000"<<endl<<endl;
		cout<<"				TOTAL = "<<totalakhir;
		slp<<"------------------------------------------"<<endl;
		slp<<"						TOTAL = "<<totalakhir;
		
	}
	else if((totals>=50000) && (totals<150000))
	{
		ongkirt=ongkirs-5000;
		disc=totals*15/100;
		totalt=totals-disc;
		totalakhir=totalt+ongkirt;
		cout<<"				disc = ongkir -5000 + 15%"<<endl<<endl;
		slp<<"				disc = ongkir -5000 + 15%"<<endl<<endl;
		cout<<"				TOTAL = "<<totalakhir;
		slp<<"------------------------------------------"<<endl;
		slp<<"						TOTAL = "<<totalakhir;
	}
	else if(totals>=150000)
	{
		ongkirt=ongkirs-8000;
		disc=totals*35/100;
		totalt=totals-disc;
		totalakhir=totalt+ongkirt;
		cout<<"				disc = ongkir -8000 + 35%"<<endl<<endl;
		slp<<"				disc = ongkir -8000 + 35%"<<endl<<endl;
		cout<<"				TOTAL = "<<totalakhir;
		slp<<"------------------------------------------"<<endl;
		slp<<"						TOTAL = "<<totalakhir;
	}
	
	slp.close();

return 0;	
	
} 
