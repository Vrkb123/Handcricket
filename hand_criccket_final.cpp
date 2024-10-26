#include <iostream>
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int ubob;
int cbob;
int main() {
/*  code to generate random numbers between 1 and 6
     srand(time(0));
    int random_number = (rand() % 6) + 1; */


/* 1 and 2
    srand(time(0));
    int random_number = (rand() % 2) + 1; 
 */
    
    srand(time(0));
    int toss = (rand() % 2) + 1; 

    int utoss;
    cout<<"enter 1 for heads and 2 for tails"<<endl;
    cin>>utoss;

    int uball,ubat,cball,cbat,totalubat=0,totalcbat=0;


    if(utoss==toss){
        cout<<"you won the toss"<<endl;
        cout<<"enter 1 for bat and 2 for bowl"<<endl;
        cin>>ubob;

        
        if(ubob==1){
            cout<<"you are batting now - "<<endl;
            
            do{
                srand(time(0));
                int cball = (rand() % 6) + 1;
                cout<<"enter runs to hit the ball:"<<endl;
                cin>>ubat;
                cout<<"comp:"<<cball<<endl;

                if(cball==ubat){
                    cout<<"you are out"<<endl;
                    cout<<"your total runs are :"<<totalubat<<endl;
                    cout<<"now you are bowling -"<<endl;
                    break;
                }
                totalubat=totalubat+ubat;
                
            }while(true);

            do{
                srand(time(0));
                int cbat = (rand() % 6) + 1;
                cout<<"enter runs to bowl the computer:"<<endl;
                cin>>uball;
                cout<<"comp:"<<cbat;
                if(cbat==uball){
                    cout<<"the comp is out"<<endl;
                    cout<<"the total runs scored by the computer is :"<<totalcbat<<endl;
                    cout<<"the total runs scored by you is :"<<totalubat<<endl;
                    if(totalcbat>totalubat){
                        cout<<"you lost todays match"<<endl;
                    }
                    else if(totalcbat<totalubat){
                        cout<<"congrats, u won today match"<<endl;
                    }
                    else{
                        cout<<"this is match is drawn"<<endl;
                    }
                    break;
                }

                totalcbat=totalcbat+cbat;
            }while(true);


        }

        else{
            cout<<"you are bowling now - "<<endl;
            do{
                srand(time(0));
                int cbat = (rand() % 6) + 1;
                cout<<"enter runs to bowl the computer:"<<endl;
                cin>>uball;
                cout<<"comp:"<<cbat;

                if(cbat==uball){
                    cout<<"the comp is out"<<endl;
                    cout<<"the total runs scored by the comp is : "<<totalcbat<<endl;
                    cout<<"now you are batting"<<endl;
                    break;
                }
                totalcbat=totalcbat+cbat;

                
            }while(true);


            do{
                srand(time(0));
                int cball = (rand() % 6) + 1;
                cout<<"enter runs to hit ball:"<<endl;
                cin>>ubat;
                cout<<"comp:"<<cball;
                if(ubat==cball){
                    cout<<"you are out"<<endl;
                    cout<<"your total runs are:"<<totalubat;
                    cout<<"the computer scored runs:"<<totalcbat;
                    
                    if(totalcbat>totalubat){
                        cout<<"the computer won the match by"<<totalcbat-totalubat<<" runs"<<endl;

                    }

                    else if(totalcbat<totalubat){
                        cout<<"congrats, you won the match by"<<totalubat-totalcbat<<" runs"<<endl;
                    }

                    else{
                        cout<<"this match is a draw"<<endl;
                    }
                    break;
                }

                totalubat=totalubat+ubat;
            }while(true);
        }









    }

    else{
        cout<<"you lost the toss"<<endl;

            srand(time(0));
            cbob = (rand() % 2) + 1;

            if(cbob==1){
                cout<<"the computer has chosen to bat"<<endl;
                cout<<"you bowl to comp"<<endl;
                do{
                    srand(time(0));
                int cbat = (rand() % 6) + 1;
                    cout<<"enter runs to bowl comp"<<endl;
                    cin>>uball;
                    cout<<"comp:"<<cbat<<endl;

                    if(cbat==uball){
                        cout<<"the computer is out"<<endl;
                        cout<<"the total runs scored by this comp is:"<<totalcbat<<endl;
                        cout<<"now you are going to bat"<<endl;
                        break;
                    }

                    totalcbat=totalcbat+cbat;

                }while(true);


                do{
                    srand(time(0));
                int cball = (rand() % 6) + 1;
                cout<<"enter runs to hit the balls "<<endl;
                cin>>ubat;
                cout<<"comp:"<<cball<<endl;

                if(ubat==cball){
                    cout<<"you are out"<<endl;
                    cout<<"your total runs are this:"<<totalubat<<endl;
                    cout<<"the comps total runs are:"<<totalcbat<<endl;
                    if(totalcbat>totalubat){
                        cout<<"you lost the match"<<endl;
                    }

                    else if(totalcbat<totalubat){
                        cout<<"congrats, you have won this match "<<endl;

                    }

                    else{
                        cout<<"this match is a drawn"<<endl;
                    }
                    break;
                }

                totalubat=totalubat+ubat;
                }while(true);

            } 

            else{
                cout<<"the computer has chose to bowl"<<endl;
                cout<<"now you are batting"<<endl;

                do{
                    srand(time(0));
                int cball = (rand() % 6) + 1;
                    cout<<"enter runs to hit the ball by comp"<<endl;
                    cin>>ubat;
                    cout<<"comp:"<<cball;
                    if(ubat==cball){

                        cout<<"you are out"<<endl;
                        cout<<"your total runs are:"<<totalubat<<endl;
                        cout<<"now you are going to bowl this comp"<<endl;
                        break;
                    }

                    totalubat=totalubat+ubat;

                }while(true);


                do{
                    srand(time(0));
                int cbat = (rand() % 6) + 1;

                cout<<"enter runs to bowl this comp now"<<endl;
                cin>>uball;
                cout<<"comp:"<<cbat<<endl;
                if(uball==cbat){
                    cout<<"the comp is out now"<<endl;
                    cout<<"the total runs scored by ths comp in current match:"<<totalcbat<<endl;
                    cout<<"your current runs in this match:"<<totalubat<<endl;

                    if(totalcbat>totalubat){
                        cout<<"you have lost this match"<<endl;
                    }

                    else if(totalcbat<totalubat){
                        cout<<"congratulations, you have won this match"<<endl;
                    }

                    else{
                        cout<<"this match is a tie"<<endl;
                    }
                    break;
                }

                totalcbat=totalcbat+cbat;
                }while(true);
            }


    }

    return 0;
}