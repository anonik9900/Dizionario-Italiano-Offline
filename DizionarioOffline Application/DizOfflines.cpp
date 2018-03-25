/*
{
string prova;
cin >> prova;
cout << prova;
}
*/
#include<iostream>
#include<string>

using namespace std;

int main(void)
{



string voc1="a";
string def1="Prima lettera dell'alfabeto";

string voc2="abaca'";
string def2="pianta tropicale delle drusacee tipica delle filippine";

string voc3="abaco";
string def3="libretto che tratta i primi elementi di aritmetica; strumento per calcoli elementari, simile al pallottoliere";

string voc4="abadessa";
string def4="badessa";

string voc5="abadia";
string def5="badia.";

string voc6="ab aeterno	";
string def6="loc. avv.  dall'eternità, da sempre; per estens., fin dai tempi più remoti.";

string voc7="abalieta'";
string def7="s.f.  nella tradizione filosofica medievale, caratteristica di ciò che deve la sua esistenza ad altro.";

string voc8="ab antiquo";
string def8="	ab antiquo anche italianizzato in ab antico , loc. avv.  fin dai tempi antichi, fin dalle origini.";

string voc9="abarico";
string def9=" agg.  [pl.m. -ci] (astr.) si dice di ogni punto in cui la forza gravitazionale terrestre e quella lunare si annullano a vicenda.";

string voc10="abasia";
string def10="s.f.  (med.) incapacità parziale o totale di camminare, spesso di origine psichica.";

string voc11="abate";
string def11="lett. abbate, s.m. \n 1 il superiore di un'abbazia o di un monastero\n 2 nel sec. xviii, chiunque godesse di un beneficio ecclesiastico, pur avendo ricevuto i soli ordini minori. dim. abatino. ";

string voc12="abatino";
string def12=" s.m. \n 1 dim.  di abate  | (iron.) giovane prete amante della vita mondana\n 2 (estens.) persona leziosa e inconcludente\n 3 (region.) seminarista che indossa l'abito ecclesiastico.";




//OUT E INT
string ins1;
string out1;

goto intro;

title:{
cout << "Dizionario Offline V 0.10 Beta \n";
cout << "";
cout << "Creato da Nicholas Impieri \n";
}

inizio:{
cout << "";
cout<<"Scrivi il vocabolo di cui vuoi trovare la definizione"<<endl;
cout<<endl;
}



cin >>ins1;


//a
if (ins1==voc1){
    cout<<def1;
    cout<<endl;
    goto inizio;
    cout<<endl;
}

//abacà
else if (ins1==voc2){
    cout<<def2;
    cout<<endl;
    goto inizio;
    cout<<endl;
}

//abaco
else if (ins1==voc3){
    cout<<def3;
    cout<<endl;
    goto inizio;
    cout<<endl;
}



//abadessa
else if (ins1==voc4){
    cout<<def4;
    cout<<endl;
    goto inizio;
    cout<<endl;
}



//abadia
else if (ins1==voc5){
    cout<<def5;
    cout<<endl;
    goto inizio;
    cout<<endl;
}



//ab aeterno
else if (ins1==voc6){
    cout<<def6;
    cout<<endl;
    goto inizio;
    cout<<endl;
}


//abalieta'
else if (ins1==voc7){
    cout<<def7;
    cout<<endl;
    goto inizio;
    cout<<endl;
}


//ab antiquo
else if (ins1==voc8){
    cout<<def8;
    cout<<endl;
    goto inizio;
    cout<<endl;
}



//abarico
else if (ins1==voc9){
    cout<<def9;
    cout<<endl;
    goto inizio;
    cout<<endl;
}



//abasia
else if (ins1==voc10){
    cout<<def10;
    cout<<endl;
    goto inizio;
    cout<<endl;
}



//abate
else if (ins1==voc11){
    cout<<def11;
    cout<<endl;
    goto inizio;
    cout<<endl;
}



//abatino
else if (ins1==voc12){
    cout<<def12;
    cout<<endl;
    goto inizio;
    cout<<endl;
}






































//ERRATO!
else if (ins1!=voc1,ins1!=voc2,ins1!=voc3){
    cout<<"Non risconosco";
    cout<<endl;
    goto inizio;
    cout<<endl;
}

intro:
    {
        cout<<"Come usare il programma?"<<endl;
        cout<<endl;
        cout<<"1) Guardare il file support.txt per capire quali vocaboli sono supportati"<<endl;
        cout <<endl;
        cout<<"2) Per le lettere accentate inserire l'apostrofo esempio :(è lo dovete scrivere cosi = e')"<<endl;
        cout <<endl;
        cout<<"3) Da usare solo con Windows Xp/Vista/7 e 10"<<endl;
        cout<<endl;
        cout<<"4)Per chiudere il programma premi Ctrl+c"<<endl;
        cout<<endl;
        goto title;
        cout<<endl;
    }


		fflush(stdin);
getchar();

}

