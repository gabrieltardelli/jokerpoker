#include <iostream>
#include <locale.h>
#include <sstream>
#include <vector>
#include <time.h>
#include <stdlib.h>
#include <fstream>
#include <windows.h>
#include "gtcm.h"
using namespace std;
int main (){
	setlocale(LC_ALL, "Portuguese");
    srand(time(NULL));
    vector<int> copas;vector<int> ouros;vector<int> espadas;vector<int> paus;
    vector<int> gab;vector<int> fel;vector<int> ju;vector<int> pl;vector<int>mesa;
    int plapos; int gaapos; int flapos; int juapos;
	vector<int>::iterator p;
	int k;
	cout<<"\n                                     POKER\n                                  Joker Poker\n\n\n\n\n\n\n\n\n\n\n\n                 Criado por Gabriel Tardelli\n\n\n";
    system("pause");
    system("cls");
    string nome;
    cout<<" Digite o nome do seu usuário : ";
    cin>>nome;
    system("cls");
    cout<<" Bem-vindo ao Poker 'Joker Poker', "<<nome<<"\n Agora, você conhece as regras dessa variação do Poker ? (1-Sim  2-Não)\n";
    int resposta;
    cin>>resposta;
    if (resposta== 2){
    cout<<"Então vamos às regras\n\n\n";
    system("pause");
	system("cls");
	cout<<"Essa variação segue a mesmas regras do Texas Hod'em\nA diferença é que o jogador não pode 'passar'e o às serve como um coringa,\nportanto o straight flush vale mais que o royal flush e na rodada de apostas,\n cada jogador só pode aumentar a aposta uma vez\ne o jogo acaba quando alguém zera as fichas\n\n";
	system("pause");
	system("cls");}
	else{
	cout<<"Muito bem, vamos começar a jogar !!!\n\n\n";
	system("pause");
	system("cls");}
	cout<<"Você irá enfrentar 3 adversários e todos vão começar com 100 fichas\n\n";
	int fichas0=100;
	int fichas1=100;
	int fichas2=100;
	int fichas3=100;
	int correu0=0;int correu1=0;int correu2=0;int correu3=0;
	system("pause");
	system("cls");
	while ((fichas0>0) && (fichas1>0) &&(fichas2>0) &&(fichas3>0)){
	begin:
	if ((fichas0>0) && (fichas1>0) && (fichas2>0) && (fichas3>0)){
	copas.clear();ouros.clear();espadas.clear();paus.clear();
	for (int n=0;n!=13;n++){
		copas.push_back(1+n);}
	for (int n=0;n!=13;n++){
		ouros.push_back(1+n);}
	for (int n=0;n!=13;n++){
		espadas.push_back(1+n);}
	for (int n=0;n!=13;n++){
		paus.push_back(1+n);}
	int nc0=12,nc1=12,nc2=12,nc3=12;
	int x; //número da carta é y=x+1
	int x1;int x2;int x3;int x4;int xx;int x0;int x00;int xx1;int xx2;int xx3;int xx4;
	int op;int aposta=0;int aposta0;int aposta1;int aposta2;int aposta3;
        cout<<nome<<": "<<fichas0<<"\nGabriel: "<<fichas1<<"\nFelipe: "<<fichas2<<"\nJúlia: "<<fichas3<<endl<<"Monte de aposta: "<<aposta<<endl;
        cout<<"Essas são as suas 2 cartas dessa rodada\n";
	int y0=rand()%4;//naipe (0-copas, 1-ouros, 2-espadas, 3-paus)
	switch (y0){
		case 0:
			x=rand()%nc0;
			p=copas.begin()+x;
			x0=*p-1;;
			copas.erase(p);
			nc0--;
			break;
		case 1:
			x=rand()%nc1;
			p=ouros.begin()+x;
			x0=*p-1;
			ouros.erase(p);
			nc1--;
			break;
    	        case 2:
    		        x=rand()%nc2;
			p=espadas.begin()+x;
			x0=*p-1;
			espadas.erase(p);
			nc2--;
			break;
		case 3:
			x=rand()%nc3;
			p=paus.begin()+x;
			x0=*p-1;
			paus.erase(p);
			nc3--;
			break;}
	int y00=rand()%4;//naipe (0-copas, 1-ouros, 2-espadas, 3-paus)
	switch (y00){
		case 0:
			x=rand()%nc0;
			p=copas.begin()+x;
			x00=*p-1;
			copas.erase(p);
			nc0--;
			break;
		case 1:
			x=rand()%nc1;
			p=ouros.begin()+x;
			x00=*p-1;
			ouros.erase(p);
			nc1--;
			break;
    	        case 2:
    		        x=rand()%nc2;
			p=espadas.begin()+x;
			x00=*p-1;
			espadas.erase(p);
			nc2--;
			break;
		case 3:
			x=rand()%nc3;
			p=paus.begin()+x;
			x00=*p-1;
			paus.erase(p);
			nc3--;
			break;}
	pl.push_back(x0+1);pl.push_back(x00+1);
	//cartarq(x0, y0, x00, y00);
	carta(x0, y0);carta(x00, y00);
	//cout<<" Se você quiser ver suas cartas, abra o arquivo 'cartas' no diretório do jogo\nTodos os jogadores já receberam suas cartas, agora vamos as apostas.\n";
	//vetor(copas);cout<<endl;vetor(ouros);cout<<endl;vetor(espadas);cout<<endl;vetor(paus);cout<<endl;
    //Gabriel (xx,y) (x1,y1)
	int y=rand()%4;//naipe (0-copas, 1-ouros, 2-espadas, 3-paus)
	switch (y){
		case 0:
			x=rand()%nc0;
			p=copas.begin()+x;
			xx=*p-1;;
			copas.erase(p);
			nc0--;
			break;
		case 1:
			x=rand()%nc1;
			p=ouros.begin()+x;
			xx=*p-1;
			ouros.erase(p);
			nc1--;
			break;
    	        case 2:
    		        x=rand()%nc2;
			p=espadas.begin()+x;
			xx=*p-1;
			espadas.erase(p);
			nc2--;
			break;
		case 3:
			x=rand()%nc3;
			p=paus.begin()+x;
			xx=*p-1;
			paus.erase(p);
			nc3--;
			break;}
	int y1=rand()%4;//naipe (0-copas, 1-ouros, 2-espadas, 3-paus)
	switch (y1){
		case 0:
			x=rand()%nc0;
			p=copas.begin()+x;
			x1=*p-1;
			copas.erase(p);
			nc0--;
			break;
		case 1:
			x=rand()%nc1;
			p=ouros.begin()+x;
			x1=*p-1;
			ouros.erase(p);
			nc1--;
			break;
    	        case 2:
    		        x=rand()%nc2;
			p=espadas.begin()+x;
			x1=*p-1;
			espadas.erase(p);
			nc2--;
			break;
		case 3:
			x=rand()%nc3;
			p=paus.begin()+x;
			x1=*p-1;
			paus.erase(p);
			nc3--;
			break;}
                //carta(xx, y);carta(x1, y1);
	//Felipe (xx1,yy1) (xx2,yy2)
	int yy1=rand()%4;//naipe (0-copas, 1-ouros, 2-espadas, 3-paus)
	switch (yy1){
		case 0:
			x=rand()%nc0;
			p=copas.begin()+x;
			xx1=*p-1;;
			copas.erase(p);
			nc0--;
			break;
		case 1:
			x=rand()%nc1;
			p=ouros.begin()+x;
			xx1=*p-1;
			ouros.erase(p);
			nc1--;
			break;
    	        case 2:
    		        x=rand()%nc2;
			p=espadas.begin()+x;
			xx1=*p-1;
			espadas.erase(p);
			nc2--;
			break;
		case 3:
			x=rand()%nc3;
			p=paus.begin()+x;
			xx1=*p-1;
			paus.erase(p);
			nc3--;
			break;}
	int yy2=rand()%4;//naipe (0-copas, 1-ouros, 2-espadas, 3-paus)
	switch (yy2){
		case 0:
			x=rand()%nc0;
			p=copas.begin()+x;
			xx2=*p-1;
			copas.erase(p);
			nc0--;
			break;
		case 1:
			x=rand()%nc1;
			p=ouros.begin()+x;
			xx2=*p-1;
			ouros.erase(p);
			nc1--;
			break;
    	        case 2:
    		        x=rand()%nc2;
			p=espadas.begin()+x;
			xx2=*p-1;
			espadas.erase(p);
			nc2--;
			break;
		case 3:
			x=rand()%nc3;
			p=paus.begin()+x;
			xx2=*p-1;
			paus.erase(p);
			nc3--;
			break;}
                //carta(xx1, yy1);carta(xx2, yy2);
	//Júlia (xx3,yy3) (xx4,yy4)
	int yy3=rand()%4;//naipe (0-copas, 1-ouros, 2-espadas, 3-paus)
	switch (yy3){
		case 0:
			x=rand()%nc0;
			p=copas.begin()+x;
			xx3=*p-1;;
			copas.erase(p);
			nc0--;
			break;
		case 1:
			x=rand()%nc1;
			p=ouros.begin()+x;
			xx3=*p-1;
			ouros.erase(p);
			nc1--;
			break;
    	        case 2:
    		        x=rand()%nc2;
			p=espadas.begin()+x;
			xx3=*p-1;
			espadas.erase(p);
			nc2--;
			break;
		case 3:
			x=rand()%nc3;
			p=paus.begin()+x;
			xx3=*p-1;
			paus.erase(p);
			nc3--;
			break;}
	int yy4=rand()%4;//naipe (0-copas, 1-ouros, 2-espadas, 3-paus)
	switch (yy4){
		case 0:
			x=rand()%nc0;
			p=copas.begin()+x;
			xx4=*p-1;
			copas.erase(p);
			nc0--;
			break;
		case 1:
			x=rand()%nc1;
			p=ouros.begin()+x;
			xx4=*p-1;
			ouros.erase(p);
			nc1--;
			break;
    	        case 2:
    		        x=rand()%nc2;
			p=espadas.begin()+x;
			xx4=*p-1;
			espadas.erase(p);
			nc2--;
			break;
		case 3:
			x=rand()%nc3;
			p=paus.begin()+x;
			xx4=*p-1;
			paus.erase(p);
			nc3--;
			break;}
                //carta(xx3, yy3);carta(xx4, yy4);
	//cout<<"\ncopas";vetor(copas);cout<<endl<<"ouros";vetor(ouros);cout<<endl<<"spade";vetor(espadas);cout<<endl<<"paus ";vetor(paus);cout<<endl;
	cout<<nome<<" começa."<<endl;
	cout<<"1-apostar 10 fichas 2-correr\n";
	cin>>op;
	if (op==1){
	fichas0=fichas0-10;
	aposta=aposta+10;}
	else{
	cout<<"Você correu.\n\n";
	system("pause");
        int plcorreu=rand()%3;
	switch (plcorreu){
		case 0:
		system("cls");
		cout<<"Gabriel ganhou";
		fichas1=fichas1+80;fichas2=fichas2-40;fichas3=fichas3-40;
		break;
		case 1:
		system("cls");
		cout<<"Felipe ganhou";
		fichas1=fichas1-40;fichas2=fichas2+80;fichas3=fichas3-40;
		break;
		case 2:
		system("cls");
		cout<<"Júlia ganhou";
		fichas1=fichas1-40;fichas2=fichas2-40;fichas3=fichas3+80;
		break;}	
	cout<<endl<<endl<<nome<<": "<<fichas0<<"\nGabriel: "<<fichas1<<"\nFelipe: "<<fichas2<<"\nJúlia: "<<fichas3<<endl;
	system("pause");
	system("cls");
	goto begin;}
	cout<<"Vez de Gabriel.";
	Sleep(1500);
	cout<<"apostou 10";
	fichas1=fichas1-10;aposta=aposta+10;
	cout<<"\nVez de Felipe.";
	Sleep(1500);
	cout<<"apostou 10";
	fichas2=fichas2-10;aposta=aposta+10;
	cout<<"\nVez de Júlia.";
	Sleep(1500);
	cout<<"apostou 10\n";
	fichas3=fichas3-10;aposta=aposta+10;
	cout<<"\nTodos já fizeram suas apostas\n";
	system("pause");
	system("cls");
	cout<<nome<<": "<<fichas0<<"\nGabriel: "<<fichas1<<"\nFelipe: "<<fichas2<<"\nJúlia: "<<fichas3<<endl<<"Monte de aposta: "<<aposta<<endl;
	cout<<"\nAgora vamos ao sorteio das 3 primeiras cartas comunitárias\n";
	system("pause");
	int y10=rand()%4;//naipe (0-copas, 1-ouros, 2-espadas, 3-paus)
	switch (y10){
		case 0:
			x=rand()%nc0;
			p=copas.begin()+x;
			xx=*p-1;;
			copas.erase(p);
			nc0--;
			break;
		case 1:
			x=rand()%nc1;
			p=ouros.begin()+x;
			xx=*p-1;
			ouros.erase(p);
			nc1--;
			break;
    	        case 2:
    		        x=rand()%nc2;
			p=espadas.begin()+x;
			xx=*p-1;
			espadas.erase(p);
			nc2--;
			break;
		case 3:
			x=rand()%nc3;
			p=paus.begin()+x;
			xx=*p-1;
			paus.erase(p);
			nc3--;
			break;}
	int y11=rand()%4;//naipe (0-copas, 1-ouros, 2-espadas, 3-paus)
	switch (y11){
		case 0:
			x=rand()%nc0;
			p=copas.begin()+x;
			x1=*p-1;
			copas.erase(p);
			nc0--;
			break;
		case 1:
			x=rand()%nc1;
			p=ouros.begin()+x;
			x1=*p-1;
			ouros.erase(p);
			nc1--;
			break;
    	        case 2:
    		        x=rand()%nc2;
			p=espadas.begin()+x;
			x1=*p-1;
			espadas.erase(p);
			nc2--;
			break;
		case 3:
			x=rand()%nc3;
			p=paus.begin()+x;
			x1=*p-1;
			paus.erase(p);
			nc3--;
			break;}
	int y2=rand()%4;//naipe (0-copas, 1-ouros, 2-espadas, 3-paus)
	switch (y2){
		case 0:
			x=rand()%nc0;
			p=copas.begin()+x;
			x2=*p-1;
			copas.erase(p);
			nc0--;
			break;
		case 1:
			x=rand()%nc1;
			p=ouros.begin()+x;
			x2=*p-1;
			ouros.erase(p);
			nc1--;
			break;
    	        case 2:
    		        x=rand()%nc2;
			p=espadas.begin()+x;
			x2=*p-1;
			espadas.erase(p);
			nc2--;
			break;
		case 3:
			x=rand()%nc3;
			p=paus.begin()+x;
			x2=*p-1;
			paus.erase(p);
			nc3--;
			break;}
	mesa.push_back(xx+1);mesa.push_back(x1+1);mesa.push_back(x2+1);
	carta(xx, y);carta(x1, y1);carta(x2, y2);
	cout<<"Vamos as apostas de novo !\n";
	cout<<nome<<" começa.";
	int apostarbitraria=10;
	cout<<"\nSuas cartas: ";com(x0, y0);com(x00, y00);cout<<endl;
	while (true){
	cout<<"\n1-apostar mínimo 2-apostar quanto quiser 3-correr \n";
	cin>>op;
	switch (op){
		case 1:
			
		    fichas0=fichas0-apostarbitraria;
		    plapos=apostarbitraria;
	        aposta=aposta+apostarbitraria;
	        break;
	    case 2:
	    	cout<<"Quanto você quer apostar: ";
	    	cin>>apostarbitraria;
	    	fichas0=fichas0-apostarbitraria;
	    	plapos=apostarbitraria;
	        aposta=aposta+apostarbitraria;
	        break;
	    case 3:
	    	correu0=1;
		    cout<<"Você correu.\n\n";
		    system("pause");
	int plcorreu=rand()%3;
	switch (plcorreu){
		case 0:
		system("cls");
		cout<<"Gabriel ganhou";
		fichas1=fichas1+100;fichas2=fichas2-30;fichas3=fichas3-30;
		break;
		case 1:
		system("cls");
		cout<<"Felipe ganhou";
		fichas1=fichas1-30;fichas2=fichas2+100;fichas3=fichas3-30;
		break;
		case 2:
		system("cls");
		cout<<"Júlia ganhou";
		fichas1=fichas1-30;fichas2=fichas2-30;fichas3=fichas3+100;
		break;}	
	cout<<endl<<endl<<nome<<": "<<fichas0<<"\nGabriel: "<<fichas1<<"\nFelipe: "<<fichas2<<"\nJúlia: "<<fichas3<<endl;
	system("pause");
	system("cls");
		   goto begin;}	    
	if((fichas0<90)&&(plapos==gaapos))
	break;
	if (correu1==0){
	cout<<"Vez de Gabriel.";//(xx,y) (x1,y1)
	Sleep(3000);
	//int prob1=rand()%100;
	int prob1=80;
	if (prob1<=90){
		    fichas1=fichas1-apostarbitraria;
	        aposta=aposta+apostarbitraria;
	        gaapos=apostarbitraria;
			cout<<"Apostou "<<apostarbitraria<<endl;}
	else{
	apostarbitraria=apostarbitraria+5;
	cout<<"Apostou "<<apostarbitraria<<". Aposta foi aumentada\n";
	gaapos=apostarbitraria;
	fichas1=fichas1-apostarbitraria;
	        aposta=aposta+apostarbitraria;}}
	if((fichas3<90)&&(plapos==flapos))
	break;
		                                              //cout<<fichas0<<endl<<fichas1<<endl<<fichas2<<endl<<fichas3<<endl;
	cout<<"Vez de Felipe.";
	Sleep(3000);
	int prob1=rand()%100;
	//int prob1=40;
	if (prob1<=65){
		    fichas2=fichas2-apostarbitraria;
	        aposta=aposta+apostarbitraria;
	        flapos=apostarbitraria;
			cout<<"Apostou "<<apostarbitraria<<endl;}
	else{
	apostarbitraria=apostarbitraria+5;
	cout<<"Apostou "<<apostarbitraria<<". Aposta foi aumentada\n";
	flapos=apostarbitraria;
	fichas2=fichas2-apostarbitraria;
	        aposta=aposta+apostarbitraria;
		}
	if((plapos==flapos)&&(plapos==juapos))
	break;
	if (correu3!=1){
			                                              //cout<<fichas0<<endl<<fichas1<<endl<<fichas2<<endl<<fichas3<<endl;
	cout<<"Vez de Júlia.";
	Sleep(3000);
	 prob1=rand()%100;
	if (prob1<=95){
		    fichas3=fichas3-apostarbitraria;
	        aposta=aposta+apostarbitraria;
	        juapos=apostarbitraria;
			cout<<"Apostou "<<apostarbitraria<<endl;}
	else{
	apostarbitraria=apostarbitraria+5;
	cout<<"Apostou "<<apostarbitraria<<". Aposta foi aumentada\n";
	fichas3=fichas3-apostarbitraria;
	juapos=apostarbitraria;
	        aposta=aposta+apostarbitraria;}}
		                                              //cout<<fichas0<<endl<<fichas1<<endl<<fichas2<<endl<<fichas3<<endl;
	if((plapos==gaapos)&&(plapos==flapos)&&(plapos==juapos))
	break;}	
	plapos=100;gaapos=150;flapos=200;juapos=250;         	        
	/*system ("pause");	
	system("cls");
	cout<<nome<<": "<<fichas0<<"\nGabriel: "<<fichas1<<"\nFelipe: "<<fichas2<<"\nJúlia: "<<fichas3<<endl<<"Monte de aposta: "<<aposta<<endl;
	cout<<"\nSuas cartas: ";com(x0, y0);com(x00, y00);cout<<endl;
	cout<<"Carta comunitária: ";com(xx, y);com(x1, y1);com(x2, y2);cout<<endl;
	APOSTAS*/
	system ("pause");
	system("cls");
	int y3=rand()%4;//naipe (0-copas, 1-ouros, 2-espadas, 3-paus)
	switch (y3){
		case 0:
			x=rand()%nc0;
			p=copas.begin()+x;
			x3=*p-1;
			copas.erase(p);
			nc0--;
			break;
		case 1:
			x=rand()%nc1;
			p=ouros.begin()+x;
			x3=*p-1;
			ouros.erase(p);
			nc1--;
			break;
    	        case 2:
    		        x=rand()%nc2;
			p=espadas.begin()+x;
			x3=*p-1;
			espadas.erase(p);
			nc2--;
			break;
		case 3:
			x=rand()%nc3;
			p=paus.begin()+x;
			x3=*p-1;
			paus.erase(p);
			nc3--;
			break;}
	mesa.push_back(x3+1);
	cout<<"Mais uma carta comunitária\n";
	carta(xx, y);carta(x1, y1);carta(x2, y2);carta(x3, y3);
	cout<<"Vamos as apostas de novo !\n";
	system ("pause");
	system("cls");
	cout<<nome<<": "<<fichas0<<"\nGabriel: "<<fichas1<<"\nFelipe: "<<fichas2<<"\nJúlia: "<<fichas3<<endl<<"Monte de aposta: "<<aposta<<endl;
	cout<<"\nSuas cartas: ";com(x0, y0);com(x00, y00);cout<<endl;
	cout<<"Carta comunitária: ";com(xx, y);com(x1, y1);com(x2, y2);com(x3, y3);cout<<endl;
	apostarbitraria=0;
	while (true){
	cout<<"\n1-apostar mínimo 2-apostar quanto quiser 3-correr \n";
	cin>>op;
	switch (op){
		case 1:
			apostarbitraria=10+apostarbitraria;
		    fichas0=fichas0-apostarbitraria;
		    plapos=apostarbitraria;
	        aposta=aposta+apostarbitraria;
	        break;
	    case 2:
	    	cout<<"Quanto você quer apostar: ";
	    	cin>>apostarbitraria;
	    	fichas0=fichas0-apostarbitraria;
	    	plapos=apostarbitraria;
	        aposta=aposta+apostarbitraria;
	        break;
	    case 3:
	    	correu0=1;
		cout<<"Você correu.\n\n";
		    system("pause");
	int plcorreu=rand()%3;
	switch (plcorreu){
		case 0:
		system("cls");
		cout<<"Gabriel ganhou";
		fichas1=fichas1+120;fichas2=fichas2-20;fichas3=fichas3-20;
		break;
		case 1:
		system("cls");
		cout<<"Felipe ganhou";
		fichas1=fichas1-20;fichas2=fichas2+120;fichas3=fichas3-20;
		break;
		case 2:
		system("cls");
		cout<<"Júlia ganhou";
		fichas1=fichas1-20;fichas2=fichas2-20;fichas3=fichas3+120;
		break;}	
	cout<<endl<<endl<<nome<<": "<<fichas0<<"\nGabriel: "<<fichas1<<"\nFelipe: "<<fichas2<<"\nJúlia: "<<fichas3<<endl;
	system("pause");
	system("cls");
		   goto begin;}	    
	if((fichas0<90)&&(plapos==gaapos))
	break;
	if (correu1==0){
	cout<<"Vez de Gabriel.";//(xx,y) (x1,y1)
	Sleep(3000);
	//int prob1=rand()%100;
	int prob1=80;
	if (prob1<=90){
		    fichas1=fichas1-apostarbitraria;
	        aposta=aposta+apostarbitraria;
	        gaapos=apostarbitraria;
			cout<<"Apostou "<<apostarbitraria<<endl;}
	else{
	apostarbitraria=apostarbitraria+5;
	gaapos=apostarbitraria;
	cout<<"Apostou "<<apostarbitraria<<". Aposta foi aumentada\n";
	fichas1=fichas1-apostarbitraria;
	        aposta=aposta+apostarbitraria;}}
	if((fichas3<90)&&(plapos==flapos))
	break;
	cout<<"Vez de Felipe.";
	Sleep(3000);
	int prob1=rand()%100;
	//int prob1=40;
	if (prob1<=65){
		    fichas2=fichas2-apostarbitraria;
	        aposta=aposta+apostarbitraria;
	        flapos=apostarbitraria;
			cout<<"Apostou "<<apostarbitraria<<endl;}
	else{
	apostarbitraria=apostarbitraria+5;
	flapos=apostarbitraria;
	cout<<"Apostou "<<apostarbitraria<<". Aposta foi aumentada\n";
	fichas2=fichas2-apostarbitraria;
	        aposta=aposta+apostarbitraria;}
	if((fichas0==fichas2)&&(fichas0==fichas3))
	break;
	if (correu3!=1){
	cout<<"Vez de Júlia.";
	Sleep(3000);
	 prob1=rand()%100;
	if (prob1<=95){
		    fichas3=fichas3-apostarbitraria;
	        aposta=aposta+apostarbitraria;
	        juapos=apostarbitraria;
			cout<<"Apostou "<<apostarbitraria<<endl;}
	else{
	apostarbitraria=apostarbitraria+5;
	juapos=apostarbitraria;
	cout<<"Apostou "<<apostarbitraria<<". Aposta foi aumentada\n";
	fichas3=fichas3-apostarbitraria;
	        aposta=aposta+apostarbitraria;}}
	if((plapos==gaapos)&&(plapos==flapos)&&(plapos==juapos))
	break;}
	plapos=100;gaapos=150;flapos=200;juapos=250; 
        system ("pause");
	system("cls");
	int y4=rand()%4;//naipe (0-copas, 1-ouros, 2-espadas, 3-paus)
	switch (y4){
		case 0:
			x=rand()%nc0;
			p=copas.begin()+x;
			x4=*p-1;
			copas.erase(p);
			nc0--;
			break;
		case 1:
			x=rand()%nc1;
			p=ouros.begin()+x;
			x4=*p-1;
			ouros.erase(p);
			nc1--;
			break;
    	        case 2:
    		        x=rand()%nc2;
			p=espadas.begin()+x;
			x4=*p-1;
			espadas.erase(p);
			nc2--;
			break;
		case 3:
			x=rand()%nc3;
			p=paus.begin()+x;
			x4=*p-1;
			paus.erase(p);
			nc3--;
			break;}
	mesa.push_back(x4+1);
	cout<<"Última carta comunitária foi revelada\n";
	carta(xx, y);carta(x1, y1);carta(x2, y2);carta(x3, y3);carta(x4, y4);
	cout<<"Vamos as apostas de novo !\n";
	system ("pause");
	system("cls");
	cout<<nome<<": "<<fichas0<<"\nGabriel: "<<fichas1<<"\nFelipe: "<<fichas2<<"\nJúlia: "<<fichas3<<endl<<"Monte de aposta: "<<aposta<<endl;
	cout<<"\nSuas cartas: ";com(x0, y0);com(x00, y00);cout<<endl;
	cout<<"Carta comunitária: ";com(xx, y);com(x1, y1);com(x2, y2);com(x3, y3);com(x4, y4);cout<<endl;
	cout<<"Vamos as apostas de novo !\n";
	apostarbitraria=0;
	while (true){
	cout<<"\n1-apostar mínimo 2-apostar quanto quiser 3-correr \n";
	cin>>op;
	switch (op){
		case 1:
			apostarbitraria=10+apostarbitraria;
		    fichas0=fichas0-apostarbitraria;
		    plapos=apostarbitraria;
	        aposta=aposta+apostarbitraria;
	        break;
	    case 2:
	    	cout<<"Quanto você quer apostar: ";
	    	cin>>apostarbitraria;
	    	fichas0=fichas0-apostarbitraria;
	    	plapos=apostarbitraria;
	        aposta=aposta+apostarbitraria;
	        break;
	    case 3:
	    	correu0=1;
		cout<<"Você correu.\n\n";
		    system("pause");
	int plcorreu=rand()%3;
	switch (plcorreu){
		case 0:
		system("cls");
		cout<<"Gabriel ganhou";
		fichas1=fichas1+140;fichas2=fichas2-10;fichas3=fichas3-10;
		break;
		case 1:
		system("cls");
		cout<<"Felipe ganhou";
		fichas1=fichas1-10;fichas2=fichas2+140;fichas3=fichas3-10;
		break;
		case 2:
		system("cls");
		cout<<"Júlia ganhou";
		fichas1=fichas1-10;fichas2=fichas2-10;fichas3=fichas3+140;
		break;}	
	cout<<endl<<endl<<nome<<": "<<fichas0<<"\nGabriel: "<<fichas1<<"\nFelipe: "<<fichas2<<"\nJúlia: "<<fichas3<<endl;
	system("pause");
	system("cls");
		   goto begin;}
	if((fichas0<90)&&(plapos==flapos))
	break;
	if (correu1==0){
	cout<<"Vez de Gabriel.";//(xx,y) (x1,y1)
	Sleep(3000);
	//int prob1=rand()%100;
	int prob1=80;
	if (prob1<=90){
		    fichas1=fichas1-apostarbitraria;
	        aposta=aposta+apostarbitraria;
	        gaapos=apostarbitraria;
			cout<<"Apostou "<<apostarbitraria<<endl;}
	else{
	apostarbitraria=apostarbitraria+5;
	gaapos=apostarbitraria;
	cout<<"Apostou "<<apostarbitraria<<". Aposta foi aumentada\n";
	fichas1=fichas1-apostarbitraria;
	        aposta=aposta+apostarbitraria;
	        }}
	if((fichas3<90)&&(plapos==flapos))
	break;
	cout<<"Vez de Felipe.";
	Sleep(3000);
	int prob1=rand()%100;
	if (prob1<=65){
		    fichas2=fichas2-apostarbitraria;
	        aposta=aposta+apostarbitraria;
	        flapos=apostarbitraria;
			cout<<"Apostou "<<apostarbitraria<<endl;}
	else{
	apostarbitraria=apostarbitraria+5;
	flapos=apostarbitraria;
	cout<<"Apostou "<<apostarbitraria<<". Aposta foi aumentada\n";
	fichas2=fichas2-apostarbitraria;
	        aposta=aposta+apostarbitraria;}
	if((fichas0==fichas2)&&(fichas0==fichas3))
	break;
	if (correu3!=1){
	cout<<"Vez de Júlia.";
	Sleep(3000);
	 prob1=rand()%100;
	if (prob1<=95){
		    fichas3=fichas3-apostarbitraria;
	        aposta=aposta+apostarbitraria;
	        juapos=apostarbitraria;
			cout<<"Apostou "<<apostarbitraria<<endl;}
	else{
	apostarbitraria=apostarbitraria+5;
	juapos=apostarbitraria;
	cout<<"Apostou "<<apostarbitraria<<". Aposta foi aumentada\n";
	fichas3=fichas3-apostarbitraria;
	        aposta=aposta+apostarbitraria;}}
	if((plapos==gaapos)&&(plapos==flapos)&&(plapos==juapos))
	break;}
	plapos=100;gaapos=150;flapos=200;juapos=250;
	system ("pause");
	system("cls");
	int ganha=rand()%4;
	switch (ganha){
		case 0:
		cout<<nome<<" ganhou\n";
		fichas0=fichas0+aposta;
		break;
		case 1:
		cout<<"Gabriel ganhou\n";
		fichas1=fichas1+aposta;
		break;
		case 2:
		cout<<"Felipe ganhou\n";
		fichas2=fichas2+aposta;
		break;
		case 3:
		cout<<"Júlia ganhou\n";
		fichas3=fichas3+aposta;
		break;}
	system ("pause");
	system("cls");
	copas.clear();ouros.clear();espadas.clear();paus.clear();
	for (int n=0;n!=13;n++){
		copas.push_back(1+n);}
	for (int n=0;n!=13;n++){
		ouros.push_back(1+n);}
	for (int n=0;n!=13;n++){
		espadas.push_back(1+n);}
	for (int n=0;n!=13;n++){
		paus.push_back(1+n);}}
		else
		if((fichas0>fichas1) && (fichas0>fichas2) &&(fichas0>fichas3)){
		cout<<nome<<" ganhou";
		break;}
		else if ((fichas1>fichas0) && (fichas1>fichas2) &&(fichas1>fichas3)){
		cout<<"Gabriel ganhou";
		break;}
		else if ((fichas2>fichas0) && (fichas2>fichas1) &&(fichas2>fichas3)){
		cout<<"Felipe ganhou";
		break;}
		else{
		cout<<"Júlia ganhou";
		break;}}
	system("pause");
	system("cls");
	cout<<"\nO jogo acabou\n\n";
	if ((fichas0>fichas1) && (fichas0>fichas2) &&(fichas0>fichas3))
	cout<<nome<<" ganhou com "<<fichas0<<" fichas";
	else if ((fichas1>fichas0) && (fichas1>fichas2) &&(fichas1>fichas3))
	cout<<"Felipe ganhou com "<<fichas1<<" fichas";
	else if ((fichas2>fichas0) && (fichas2>fichas1) &&(fichas2>fichas3))
	cout<<"Gabriel ganhou com "<<fichas2<<" fichas";
	else if ((fichas3>fichas0) && (fichas3>fichas1) &&(fichas3>fichas2))
	cout<<"Júlia ganhou com "<<fichas3<<" fichas";
	else
	cout<<"erro";
	
return 0;}
