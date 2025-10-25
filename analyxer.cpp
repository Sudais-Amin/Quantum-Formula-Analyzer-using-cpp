#include<iostream>

using namespace std;

int main(){
//description	
    cout<<"____________________________________________________________________________________________________________________________________"<<endl;
cout<<" \t \t \t  \t   \t  \t QUANTUM FORMULA ANALYZER"<<endl;
    cout<<"____________________________________________________________________________________________________________________________________"<<endl<<endl;
cout<<" Description: \n \t An efficient Quantum Formula Analyzer designed to determine \n the empirical and molecular formulas of unknown organic compounds. After completing \n the combustion experiment the user simply enters the mass of Carbon (C), mass of \n Hydrogen (H), and the total mass of the compound. The program quickly calculates \n the compounds formula based on elemental ratios and molar masses—making it far more \n time efficient and accurate than manual paper calculations. ";
    
    cout<<endl<<endl; 
    
 //prompt and data_entry.   
double mass_co2,mass_h2o,mass_comp;

cout<<"____________________________________________________________________________________________________________________________________"<<endl;
	cout<<"Enter the mass of Carbondioxide-CO^2 \(in g)"<<endl;
cin>>mass_co2;
	cout<<"Enter the mass of Hydrogendioxide-H^20 \(in g)"<<endl;
cin>>mass_h2o;
	cout<<"Enter the mass of Organic Compound \(in g)"<<endl;
cin>>mass_comp;
cout<<"____________________________________________________________________________________________________________________________________"<<endl;

//percentage composition of each element.
double per_C,per_H,per_O;

	per_C=(mass_co2)/(mass_comp)*(12)/(44)*100;
	per_H=(mass_h2o)/(mass_comp)*(2.016)/(18)*100;
	per_O=100-(per_C+per_H);
	
//number of moles of each element.
double mole_C,mole_H,mole_O;

	mole_C=(per_C)/12;
	mole_H=(per_H)/1.008;
	mole_O=(per_C)/16;
	
//samllest value of number of moles.

double small;
	
	if (mole_C <= mole_H && mole_C<=mole_O )
	{ small= mole_C;
	}
	
	else if(mole_H <= mole_C &&mole_H <=mole_O )
	{ small= mole_H;
	}
	
	else {
		small=mole_O;
	}
	
//mole ratios of each element.
int ratio_H,ratio_O,ratio_C;

ratio_H=(mole_H)/small;
ratio_O=(mole_O)/small;
ratio_C=(mole_C)/small;

cout<<"\tH:O:C\t::\t"<<ratio_H<<" : "<< ratio_O <<" : "<<ratio_C<<endl<<endl;
cout<<"____________________________________________________________________________________________________________________________________"<<endl;
//emperical formula mass.
double emperical_mass=(ratio_H)+(ratio_O*16)+(ratio_C*12);
cout<<"emperical mass is:"<<emperical_mass<<endl;

//asking for permission.
int answer;
 cout<<"____________________________________________________________________________________________________________________________________"<<endl;
cout<<"If you want molecular formula PRESS 1"<<endl;
cin>> answer;
 cout<<"____________________________________________________________________________________________________________________________________"<<endl;
if (answer == 1)
{
//prompt for molecular formula.
double molar_mass;

cout<<"Enter molar mass to calculate molecular formula\(in g\\mol):"<<endl;
cin>>molar_mass;
cout<<"____________________________________________________________________________________________________________________________________"<<endl;
// 'n' for molecular formula.

double n;
n=(molar_mass)/(emperical_mass);

//molecular formula.
int molecular_mass1,molecular_mass2,molecular_mass3;
molecular_mass2= n*ratio_O;
molecular_mass3= n*ratio_C;
cout<<"    H:O:C\t::\t";

molecular_mass1= n*ratio_H;
cout<<molecular_mass1<<" : "<<molecular_mass2<<" : "<<molecular_mass3;}

return 0;
}
