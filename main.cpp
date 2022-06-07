#include <iostream>
#define max 50
using namespace std;
class Matriks{
	friend ostream& operator<<(ostream& out, Matriks&);
	friend istream& operator>>(istream& in, Matriks&);
	
	public:
		void input();
		void proses();
		void output();
	
	private:
		int baris, kolom,total;
		char matriks[7][3];
};

void Matriks::input(){
	cout<<"\t\t\t\tStudi Kasus 8\n";
	cout<<"Masukkan Kolom    : ";cin>>kolom;
    cout<<"Masukkan Baris    : ";cin>>baris;
    
}

void Matriks::proses(){
	string matriks[baris][kolom];
        for(int i=0;i<baris;i++){
            for(int j=0;j<kolom;j++){
                cout<<"Masukkan Baris ke - "<<i<<" Kolom ke - "<<j<<" :";cin>>matriks[i][j];
            }
            cout<<endl;
    	}
		cout<<"TABEL PENJUALAN :"<<endl<<endl;
    	for(int i=0;i<baris;i++){
    		cout<<"=========================================================================\n";
        	for(int j=0;j<kolom;j++){
            	cout<<"\t"<<matriks[i][j]<<"\t|\t";
        	}
        cout<<endl;
    	}
    total=(30*200000)+(45*60000)+(55*120000)+(23*400000)+(12*3100000)+(14*2500000);
	
}

void Matriks::output(){
	cout<<"\n\tTotal :"<<total;
	cout<<"\n\tJumlah Kolom : "<<kolom;
	cout<<"\n\tJumlah Baris : "<<baris;
}
int main(void){
	Matriks run;
	run.input();
	run.proses();
	run.output();
}