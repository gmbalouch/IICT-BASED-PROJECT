#include<iostream>
#include<conio.h>
#include<string>

using namespace std;

class logicalGates{
	private:
		int c;
		int z;
		
	public:
		void viewDetails(){
			int sel;
			do{
				system("cls");
				cout<<endl<<endl<<endl;
				cout<<"\t\t\t\t\t ====================="<<endl;
				cout<<"\t\t\t\t\t|    LEARN GATES      |"<<endl
					<<"\t\t\t\t\t ====================="<<endl<<endl<<endl
					<<"\t\t\t\t ==================================="<<endl
					<<"\t\t\t\t| 1- AND Gate.                      |"<<endl
					<<"\t\t\t\t| 2- OR Gate.                       |"<<endl
					<<"\t\t\t\t| 3- NAND Gate.                     |"<<endl
					<<"\t\t\t\t| 4- NOR Gate.                      |"<<endl
					<<"\t\t\t\t| 5- NOT Gate.                      |"<<endl
					<<"\t\t\t\t| 6- XOR Gate.                      |"<<endl
					<<"\t\t\t\t| 7- XNOR Gate.                     |"<<endl
					<<"\t\t\t\t| 8- Exit.                          |"<<endl
					<<"\t\t\t\t ==================================="<<endl<<endl
					<<"\t\t\t\t Select your topic to learn: ";	
				cin>>sel;
				
				if(sel==1){
					system("cls");
					cout<<"\t\t\t\t\t ============================"<<endl
						<<"\t\t\t\t\t|    LEARN AND GATE HERE     |"<<endl
						<<"\t\t\t\t\t ============================"<<endl<<endl
						<<endl<<"\n\t\t\t\t                   ||DDDDD"<<endl
						<<"\t\t\t\tA==================||     D"<<endl
						<<"\t\t\t\t                   ||      D======== C"<<endl
						<<"\t\t\t\tB==================||     D"<<endl
						<<"\t\t\t\t                   ||DDDDD"<<endl
						<<endl
						<<endl
						<<"An AND gate is a basic digital logic gate that performs the logical"<<endl	
						<<"conjunction operation. It takes in two binary inputs and produces a"<<endl 
						<<"single binary output. The output of an AND gate is true only when all"<<endl
						<<"of its inputs are true. Otherwise, the output is false."<<endl
						<<endl 
						<<"In terms of truth tables, the behavior of an AND gate can be summarized as follows:"<<endl
						
						<<"\t\t\t\t| Input 1 | Input 2 | Output |"<<endl
						<<"\t\t\t\t|---------|---------|--------|"<<endl
						<<"\t\t\t\t|   0     |    0    |   0    |"<<endl
						<<"\t\t\t\t|   0     |    1    |   0    |"<<endl
						<<"\t\t\t\t|   1     |    0    |   0    |"<<endl
						<<"\t\t\t\t|   1     |    1    |   1    |"<<endl;

						getch();
						
				}//end selection 1		
				
				if(sel==2){
					system("cls");
					cout<<"\t\t\t\t\t ============================"<<endl
						<<"\t\t\t\t\t|    LEARN OR GATE HERE      |"<<endl
						<<"\t\t\t\t\t ============================"<<endl<<endl
						
						<<"\t\t\t\t                  DDDDDD"<<endl
						<<"\t\t\t\tA==================\\    DDD"<<endl
						<<"\t\t\t\t                    ||     DD======== C"<<endl
						<<"\t\t\t\tB==================//    DDD"<<endl
						<<"\t\t\t\t                  DDDDDD"<<endl
						<<endl
						<<endl
						<<"An OR gate is a basic digital logic gate that performs the logical"<<endl	
						<<"conjunction operation. It takes in two binary inputs and produces a"<<endl 
						<<"single binary output. The output of an OR gate is true when any"<<endl
						<<"of its input is true. If both inputs are false then output will be false."<<endl
						<<endl 
						<<"In terms of truth tables, the behavior of an AND gate can be summarized as follows:"<<endl<<endl
						
						<<"\t\t\t\t| Input 1 | Input 2 | Output |"<<endl
						<<"\t\t\t\t|---------|---------|--------|"<<endl
						<<"\t\t\t\t|   0     |    0    |   0    |"<<endl
						<<"\t\t\t\t|   0     |    1    |   1    |"<<endl
						<<"\t\t\t\t|   1     |    0    |   1    |"<<endl
						<<"\t\t\t\t|   1     |    1    |   1    |"<<endl;

						getch();
						
				}//end selection 2

				if(sel==3){
					system("cls");
					cout<<"\t\t\t\t\t ============================"<<endl
						<<"\t\t\t\t\t|    LEARN NAND GATE HERE    |"<<endl
						<<"\t\t\t\t\t ============================"<<endl<<endl
						
						<<"\t\t\t\t                   ||DDDDD"<<endl
						<<"\t\t\t\tA==================||     D"<<endl
						<<"\t\t\t\t                   ||      D|O======== C"<<endl
						<<"\t\t\t\tB==================||     D"<<endl
						<<"\t\t\t\t                   ||DDDDD"<<endl
						<<endl
						<<endl
						<<"A NAND gate is another fundamental digital logic gate that stands for"<<endl	
						<<"NOT-AND. It is essentially an AND gate followed by a NOT gate. The"<<endl 
						<<"output of a NAND gate is the negation of the logical AND operation of"<<endl
						<<"its inputs. It produces a low (0) output only when all its inputs are high"<<endl
						<<"(1); otherwise, the output is high (1)"<<endl
						<<endl 
						<<"The truth table for a NAND gate is as follows:"<<endl
						
						<<"\t\t\t\t| Input 1 | Input 2 | Output |"<<endl
						<<"\t\t\t\t|---------|---------|--------|"<<endl
						<<"\t\t\t\t|   0     |    0    |   1    |"<<endl
						<<"\t\t\t\t|   0     |    1    |   1    |"<<endl
						<<"\t\t\t\t|   1     |    0    |   1    |"<<endl
						<<"\t\t\t\t|   1     |    1    |   0    |"<<endl;
						getch();
						
				}//end selection 3
				
				if(sel==4){
					system("cls");
					cout<<"\t\t\t\t\t ============================"<<endl
						<<"\t\t\t\t\t|    LEARN NOR GATE HERE     |"<<endl
						<<"\t\t\t\t\t ============================"<<endl<<endl
						
						<<"\t\t\t\t                  DDDDDD"<<endl
						<<"\t\t\t\tA==================\\    DDD"<<endl
						<<"\t\t\t\t                    ||     DD||O======== C"<<endl
						<<"\t\t\t\tB==================//    DDD"<<endl
						<<"\t\t\t\t                  DDDDDD"<<endl
						<<endl
						<<endl
						<<"A NOR gate, which stands for NOT-OR, is a digital logic gate that "<<endl	
						<<"operates as an OR gate followed by a NOT gate. It produces a low (0)"<<endl 
						<<"output only when all of its inputs are high (1); otherwise, the output is"<<endl
						<<"high (1)."<<endl
						<<endl 
						<<"The truth table for a NOR gate is as follows:"<<endl<<endl
						
						<<"\t\t\t\t| Input 1 | Input 2 | Output |"<<endl
						<<"\t\t\t\t|---------|---------|--------|"<<endl
						<<"\t\t\t\t|   0     |    0    |   1    |"<<endl
						<<"\t\t\t\t|   0     |    1    |   0    |"<<endl
						<<"\t\t\t\t|   1     |    0    |   0    |"<<endl
						<<"\t\t\t\t|   1     |    1    |   0    |"<<endl;

						getch();
						
				}//end selection 4
				
				if(sel==5){
					system("cls");
					cout<<"\t\t\t\t\t ============================"<<endl
						<<"\t\t\t\t\t|    LEARN NOT GATE HERE     |"<<endl
						<<"\t\t\t\t\t ============================"<<endl<<endl
						
						<<"\t\t\t\t                 ||\\ "<<endl
						<<"\t\t\t\tA================|||++O ======== B"<<endl
						<<"\t\t\t\t                 ||//  "<<endl
						<<endl
						<<endl
						<<"A NOT gate, also known as an inverter, is a digital logic gate that has"<<endl	
						<<"only one input and one output. It performs the logical operation of "<<endl 
						<<"negation. In other words, it takes an input signal and produces the"<<endl
						<<"opposite (complementary) output. If the input is high (1), the output is "<<endl
						<<"low (0), and if the input is low (0), the output is high (1). "<<endl
						<<endl 
						<<"The truth table for a NOT gate is as follows:"<<endl
						
						<<"\t\t\t\t| Input 1 | OUTPUT  |"<<endl
						<<"\t\t\t\t|---------|---------|"<<endl
						<<"\t\t\t\t|   0     |    1    |"<<endl
						<<"\t\t\t\t|   1     |    0    |"<<endl;

						getch();
						
				}//end selection 5
				
				if(sel==6){
					system("cls");
					cout<<"\t\t\t\t\t ============================"<<endl
						<<"\t\t\t\t\t|    LEARN XOR GATE HERE     |"<<endl
						<<"\t\t\t\t\t ============================"<<endl<<endl
						
						<<"\t\t\t\t                \\ \\DDDDDD"<<endl
						<<"\t\t\t\tA================\\ \\    DDD"<<endl
						<<"\t\t\t\t                  |  |     DD======== C"<<endl
						<<"\t\t\t\tB================// //    DDD"<<endl
						<<"\t\t\t\t                // //DDDDDD"<<endl
						<<endl
						<<endl
						<<"An XOR gate, which stands for exclusive OR, is a digital logic gate"<<endl	
						<<"that gives a high output (1) only when the number of high inputs is"<<endl 
						<<"odd. It produces a low output (0) if the number of high inputs is even."<<endl
						<<"In other words, the output of an XOR gate is true when the inputs"<<endl
						<<"differ (one is true and the other is false), and false when the inputs are the same."<<endl
						<<endl 
						<<"The truth table for a X-OR gate is as follows:"<<endl<<endl
						
						<<"\t\t\t\t| Input 1 | Input 2 | Output |"<<endl
						<<"\t\t\t\t|---------|---------|--------|"<<endl
						<<"\t\t\t\t|   0     |    0    |   0    |"<<endl
						<<"\t\t\t\t|   0     |    1    |   1    |"<<endl
						<<"\t\t\t\t|   1     |    0    |   1    |"<<endl
						<<"\t\t\t\t|   1     |    1    |   0    |"<<endl;

						getch();
						
				}//end selection 6
								
				if(sel==7){
					system("cls");
					cout<<"\t\t\t\t\t ============================"<<endl
						<<"\t\t\t\t\t|    LEARN XNOR GATE HERE    |"<<endl
						<<"\t\t\t\t\t ============================"<<endl<<endl
						
						<<"\t\t\t\t                \\ \\DDDDDD"<<endl
						<<"\t\t\t\tA================\\ \\    DDD"<<endl
						<<"\t\t\t\t                  |  |     DD||O======== C"<<endl
						<<"\t\t\t\tB================// //    DDD"<<endl
						<<"\t\t\t\t                // //DDDDDD"<<endl
						<<endl
						<<endl
						<<"An XNOR gate, which stands for exclusive NOR, is the complement "<<endl	
						<<"of the XOR gate. It produces a high output (1) if the two binary inputs "<<endl 
						<<"are equal and a low output (0) if the inputs are different. In other "<<endl
						<<"words, the output of an XNOR gate is true when the inputs are the"<<endl
						<<"same, and false when the inputs differ."<<endl
						<<endl 
						<<"The truth table for an XNOR gate is as follows:"<<endl<<endl
						
						<<"\t\t\t\t| Input 1 | Input 2 | Output |"<<endl
						<<"\t\t\t\t|---------|---------|--------|"<<endl
						<<"\t\t\t\t|   0     |    0    |   1    |"<<endl
						<<"\t\t\t\t|   0     |    1    |   0    |"<<endl
						<<"\t\t\t\t|   1     |    0    |   0    |"<<endl
						<<"\t\t\t\t|   1     |    1    |   1    |";

						getch();
						
				}//end selection 7
												
			}while(sel!=8);
		}//end viewDetails
				
		void andgate(int a, int b){
			c=a*b;		
			cout<<"\t\t\t\t Out put from "<<a<<" and "<<b<<" is "<<c<<endl;
		}//end andgate()
		
		void orgate(int a,int b){
			c=a+b;
			if(c==2) c=1;		
			cout<<"\t\t\t\t Out put from "<<a<<" and "<<b<<" is "<<c<<endl;
		}//end orgate
		
		void nandgate(int a,int b){
			c=a*b;		
			if(c==1)	c=0;
			else if(c==0)	c=1;	
			cout<<"\t\t\t\t Out put from "<<a<<" and "<<b<<" is "<<c<<endl;
		}//end nandgate
		
		void norgate(int a, int b){
			c=a+b;
			if(c==2) c=0;  //becuase nor is opposite of or,In OR if 1 and 1 means both are true then means condition is true, out be 1, but as mention nor is opposite to or so out will be 0 
			else if(c==0) c=1;		
			cout<<"\t\t\t\t Out put from "<<a<<" and "<<b<<" is "<<c<<endl;
		}//end norgate
		
		void notgate(int a){
			if(a==1) c=0;
			if(a==0) c=1;
			cout<<"\t\t\t\t Out put from "<<a<<" is "<<c<<endl;
		}//end notgate
			
		void xorgate(int a,int b){				
			if(a==0 && b==0 || a==1 && b==1) c=0;
			if(a==0 && b==1 || b==0 && a==1) c=1;
			cout<<"\t\t\t\t Out put from "<<a<<" is "<<c<<endl;		
		}//XOR gate
		
		void xnorgate(int a, int b){				
			if(a==0 && b==0 || a==1 && b==1) c=1;
			if(a==0 && b==1 || b==0 && a==1) c=0;
			cout<<"\t\t\t\t Out put from "<<a<<" is "<<c<<endl;		
		}//XNOR gate
		
		///////////////////////above functions are for two inputs///////////////////////
		
		
		void andgate(int p){
			z=c*p;		
			
			cout<<"\t\t\t\t Out put from "<<c<<" and "<<p<<" is "<<z<<endl;
		}//end andgate()
		
		void orgate(int p){
			z=c+p;
			if(z==2) z=1;		
			cout<<"\t\t\t\t Out put from "<<c<<" and "<<p<<" is "<<z<<endl;
		}//end orgate
		
		void nandgate(int p){
			z=c*p;		
			if(z==1)	z=0;
			else if(z==0)	z=1;	
			cout<<"\t\t\t\t Out put from "<<c<<" and "<<p<<" is "<<z<<endl;
		}//end nandgate
		
		void norgate(int p){
			z=c+p;
			if(z==2) z=0;  //becuase nor is opposite of or,In OR if 1 and 1 means both are true then means condition is true, out be 1, but as mention nor is opposite to or so out will be 0 
			else if(z==0) z=1;		
			cout<<"\t\t\t\t Out put from "<<c<<" and "<<p<<" is "<<z<<endl;
		}//end norgate
		
		void notgate(){
			if(c==1) z=0;
			if(c==0) z=1;
			cout<<"\t\t\t\t Out put from "<<c<<" is "<<z<<endl;
		}//end notgate
			
		void xorgate(int p){				
			if(c==0 && p==0 || c==1 && p==1) z=0;
			if(c==0 && p==1 || p==0 && c==1) z=1;
			cout<<"\t\t\t\t Out put from "<<c<<" and "<<p<<" is "<<z<<endl;		
		}//XOR gate
		
		void xnorgate(int p){				
			if(c==0 && p==0 || c==1 && p==1) z=1;
			if(c==0 && p==1 || p==0 && c==1) z=0;
			cout<<"\t\t\t\t Out put from "<<c<<" and "<<p<<" is "<<c<<endl;		
		}//XNOR gate
		
		//////////////above functions are for 3rd for single inputs/////////////
		
		void operatorOnGates(){
			int sel;
			int a,b;
			
			do{
				system("cls");
				cout<<endl<<endl<<endl;
				cout<<"\t\t\t\t\t ============================="<<endl;
				cout<<"\t\t\t\t\t|    OPERATIONS IN GATES      |"<<endl
					<<"\t\t\t\t\t ============================="<<endl<<endl<<endl
					
					<<"\t\t\t\t ========================================="<<endl
					<<"\t\t\t\t|     1- AND Gate operation.              |"<<endl
					<<"\t\t\t\t|     2- OR Gate operation.               |"<<endl
					<<"\t\t\t\t|     3- NAND Gate operation.             |"<<endl
					<<"\t\t\t\t|     4- NOR Gate oepration.              |"<<endl
					<<"\t\t\t\t|     5- NOT Gate oepration.              |"<<endl
					<<"\t\t\t\t|     6- XOR Gate oepration.              |"<<endl
					<<"\t\t\t\t|     7- XNOR Gate oepration.             |"<<endl
					<<"\t\t\t\t|     8- Exit                             |"<<endl
					<<"\t\t\t\t ========================================="<<endl<<endl
					<<"\t\t\t\t Enter your selection: ";	
					cin>>sel;
				
				if(sel!=8 && sel<8){
					upA: 
					cout<<"\t\t\t\t Enter input(0 or 1) for A: ";
					cin>>a;
					if(a!=0 && a!=1){
						cout<<"\t\t\t\t You did not enter correct input......\n";
						goto upA;
					}	
				
					if(sel!=5){
						upB:		
						cout<<"\t\t\t\t Enter input(0 or 1) for B: ";
						cin>>b;	
					}			
					
					if(b!=0 && b!=1){
						cout<<"\t\t\t\t You did not enter correct input......\n";
						goto upB;
					}	
				}
				
				if(sel==1) andgate(a,b);
				if(sel==2) orgate(a,b);
				if(sel==3) nandgate(a,b);
				if(sel==4) norgate(a,b);
				if(sel==5) notgate(a);				
				if(sel==6) xorgate(a,b);
				if(sel==7) xnorgate(a,b);
			
				getch();
			}while(sel!=8);
			
		}//method operations			
		
		void threeInputs(){
			int in;
			int a,b,d;
			int firstIn;
			int secondIn;
			
			do{
				system("cls");
				cout<<endl<<endl<<endl;
				cout<<"\t\t\t\t\t  ======================================"<<endl;
				cout<<"\t\t\t\t\t |   THREE INPUT OPERATIONS IN GATES    |"<<endl;
				cout<<"\t\t\t\t\t  ======================================"<<endl<<endl<<endl;			
				cout<<"\t\t\t\t ============================================"<<endl;
				cout<<"\t\t\t\t| 1- AND Gate operati.                       |"<<endl
					<<"\t\t\t\t| 2- OR Gate operation.                      |"<<endl
					<<"\t\t\t\t| 3- NAND Gate operation.                    |"<<endl
					<<"\t\t\t\t| 4- NOR Gate oepration.                     |"<<endl
					<<"\t\t\t\t| 5- NOT Gate oepration.                     |"<<endl
					<<"\t\t\t\t| 6- XOR Gate oepration.                     |"<<endl
					<<"\t\t\t\t| 7- XNOR Gate oepration.                    |"<<endl
					<<"\t\t\t\t| 8- Exit.                                   |"<<endl
					<<"\t\t\t\t ============================================"<<endl
					<<"\t\t\t\t Select First Input gate for A and B: ";	
					cin>>firstIn;
					if(firstIn>8){
						upA: 
						cout<<"\t\t\t\t Enter input(0 or 1) for A: ";
						cin>>a;
						if(a!=0 && a!=1)	goto upA;
				
						if(firstIn!=5){
							upB:		
							cout<<"\t\t\t\t Enter input(0 or 1) for B:  ";
							cin>>b;	
						}
							
						if(b!=0 && b!=1)	goto upB;
				
						if(firstIn==1) andgate(a,b);
						if(firstIn==2) orgate(a,b);
						if(firstIn==3) nandgate(a,b);
						if(firstIn==4) norgate(a,b);
						if(firstIn==5) notgate();				
						if(firstIn==6) xorgate(a,b);
						if(firstIn==7) xnorgate(a,b);
			///////////////////above for two inputs
						cout<<"\t\t\t\t ============================================"<<endl;
						cout<<"\t\t\t\t| 1- AND Gate operation.                     | "<<endl
							<<"\t\t\t\t| 2- OR Gate operation.                      |"<<endl
							<<"\t\t\t\t| 3- NAND Gate operation.                    |"<<endl
							<<"\t\t\t\t| 4- NOR Gate oepration.                     |"<<endl
							<<"\t\t\t\t| 5- NOT Gate oepration.                     |"<<endl
							<<"\t\t\t\t| 6- XOR Gate oepration.                     |"<<endl
							<<"\t\t\t\t| 7- XNOR Gate oepration.                    |"<<endl
							<<"\t\t\t\t| 8- Exit.                                   |"<<endl
							<<"\t\t\t\t ============================================"<<endl
							<<"\t\t\t\t Select Second Input gate for D: ";
						cin>>secondIn;		
		
						upD:		
						cout<<"\t\t\t\t Enter input(0 or 1) for D:  ";
						cin>>d;	
						if(d!=0 && d!=1)	goto upD;
				
						if(firstIn==1) andgate(d);
						if(firstIn==2) orgate(d);
						if(firstIn==3) nandgate(d);
						if(firstIn==4) norgate(d);
						if(firstIn==5) notgate(d);				
						if(firstIn==6) xorgate(d);
						if(firstIn==7) xnorgate(d);
					
						getch();
					}	
			}while(firstIn!=8 && secondIn!=8);
							
		}//end MultiInputs
		
		void viewInputTables(){
			int noOfInputs;
			int enteries=1;
			
			cout<<"\t\t\t\t Enter no: of Inputs: ";
			cin>>noOfInputs;
			
				cout<<"\t\t\t\t ";
			for(int i=1; i<=noOfInputs; i++){
				enteries=enteries*2;
				cout<<(char(i+64))<<"\t";	
				
			}//end i
			cout<<endl;
		
			for(int j=0; j<enteries; j++){
				int bin,num=j;
				
				string binstr;
				while(num>0){
					bin=num%2;
					binstr+=to_string(bin);
					num/=2;
				}
					
				int length=binstr.length();           
				cout<<"\t\t\t\t ";
				if(length<noOfInputs)
					for(int z=1; z<=noOfInputs-length; z++){
						cout<<0<<"\t";
					}
					
				for(int i=length-1; i>=0; i--){
					
					cout<<binstr[i]<<"\t";
				}
				cout<<endl;										

			}//end j
			
			getch();
		}//end viewInputTables
		
		void groupmembers(){
			system("cls");
			cout<<endl<<"\n\n\t\t\t\t\t   IICT PROJECT"<<endl<<endl<<endl;
			cout<<"\t\t\t\t    1- MR: ALI MEER KALHORO"<<endl<<"\t\t\t\t    2- MR: AAYAN HEMANI"<<endl<<"\t\t\t\t    3- MR: MEHDI KHOSO"<<endl<<"\t\t\t\t    4- MR: ZAIN SIYAL"<<endl<<"\t\t\t\t    5- GM BALOCH"<<endl;
			getch();
		}
		
};


int main(){
	int sel;
	do{
		system("cls");
		cout<<endl<<endl<<endl;
		cout<<"\t\t\t\t\t ====================="<<endl;
		cout<<"\t\t\t\t\t|     IICT PROJECT    |"<<endl;
		cout<<"\t\t\t\t\t ====================="<<endl<<endl<<endl;
		
		cout<<"\t\t\t\t =========================================="<<endl
		    <<"\t\t\t\t| 1- Learn Logical Gates.                  |"<<endl
			<<"\t\t\t\t| 2- Operation of gates with two input.    |"<<endl
			<<"\t\t\t\t| 3- Operation of gates for three inputs.  |"<<endl
			<<"\t\t\t\t| 4- View Input tables for no: of Input.   |"<<endl
			<<"\t\t\t\t| 5- VIEW GROUP MEMBERS                    |"<<endl
			<<"\t\t\t\t| 6- Exit.                                 |"<<endl
		    <<"\t\t\t\t =========================================="<<endl	
			<<"\t\t\t\t Enter your selection: ";	
		cin>>sel;
	
		logicalGates lg;
		if(sel==1) 		 lg.viewDetails();
		else if(sel==2)  lg.operatorOnGates();
		else if(sel==3)  lg.threeInputs();
		else if(sel==4)  lg.viewInputTables();
		else if(sel==5)  lg.groupmembers();
		else if(sel==6)  exit(0);
		else cout<<"\t\t\t\t Invalid Input";
		
	}while(sel!=6);
	
}//end main