/*#include <iostream>
#include <utility>
#include <type_traits>
#include <typeinfo>
#include <cxxabi.h>
#include <time.h>
#include <stdio.h>      /* printf, NULL */
//#include <stdlib.h>     /* srand, rand */
//using namespace std;

/*

int main()
{
    const auto M = 20;
    const auto N = 40;
    
    // allocate (no initializatoin)
    auto array = new int[M][N];
    
    // the proper way to zero-initialize the array
    array = new int[M][N]();
    
    // seeding random number generator with value from computer cloack
    srand(time(NULL));
    
    // generating numbers between 1 and 6 randomly
    
    
    for(int r = 0; r < M; r++)
    {
        for(int c = 0; c < N; c++)
        {
            int i = (rand()%500);
            
            if (i == 0)
                array[r][c] = 1;
            
            else if ((i > 0) && (i <= 9))
                array[r][c] = 2;
            
            else if ((i > 9) && (i <= 24))
                array[r][c] = 3;
            
            else if ((i > 24) && (i <= 149))
                array[r][c] = 4;
            
            else if ((i > 149) && (i <= 359))
                array[r][c] = 5;
            
            else if ((i > 359)&&(i <= 499))
                array[r][c] = 6;
        }
        
    }
    
    // print array
    for(int r = 0; r < M; r++)
    {
        for(int c = 0; c < N; c++)
            cout << array[r][c];
        cout << endl;
    }
    
    // Populations
    int initialPop1 = 0; // Actinobacteria
    int initialPop2 = 0; // Fusobacteria
    int initialPop3 = 0; // Proteobacteria
    int initialPop4 = 0; // Firimicutes
    int initialPop5 = 0; // Bacteroidetes
    int initialPop6 = 0; // Other
    
    
    
    
    // obtain the number of bacteria in each of the initial populations
    
    for(int r = 0; r < M; r++)
    {
        for(int c = 0; c < N; c++){
            switch (array[r][c]){
                case 1 :
                    initialPop1++;
                    break;
                case 2 :
                    initialPop2++;
                    break;
                case 3 :
                    initialPop3++;
                    break;
                case 4 :
                    initialPop4++;
                    break;
                case 5 :
                    initialPop5++;
                    break;
                case 6 :
                    initialPop6++;
                    break;
            }}}
    // sum of initial populations
    int initialPopTotal = initialPop1 + initialPop2 + initialPop3 + initialPop4 + initialPop5 + initialPop6;
    
    
    
    cout << "Actinobacteria: " << initialPop1 << endl;
    cout << "Fusobacteria: " << initialPop2 << endl;
    cout << "Proteobacteria: " << initialPop3 << endl;
    cout << "Firmicutes: " << initialPop4 << endl;
    cout << "Bacteroidetes: " << initialPop5 << endl;
    cout << "Other: " << initialPop6 << endl;
    
    cout << initialPopTotal << endl;
    
    //calculating and printing percentage populations
    
    double initialPercentagePop1 = (double(initialPop1) / initialPopTotal * 100);
    double initialPercentagePop2 = (double(initialPop2) / initialPopTotal * 100);
    double initialPercentagePop3 = (double(initialPop3) / initialPopTotal * 100);
    double initialPercentagePop4 = (double(initialPop4) / initialPopTotal * 100);
    double initialPercentagePop5 = (double(initialPop5) / initialPopTotal * 100);
    double initialPercentagePop6 = (double(initialPop6) / initialPopTotal * 100);
    
    cout << "% Actinobacteria: " << initialPercentagePop1 << endl;
    cout << "% Fusobacteria: " << initialPercentagePop2 << endl;
    cout << "% Proteobacteria: " << initialPercentagePop3 << endl;
    cout << "% Firmicutes: " << initialPercentagePop4 << endl;
    cout << "% Bacteroidetes: " << initialPercentagePop5 << endl;
    cout << "% Other: " << initialPercentagePop6 << endl;
    cout << "  " << endl;
    
    // iterationg over array, taking into account immediate surroundings
    int surr1 = 0;
    int surr2 = 0;
    int surr3 = 0;
    int surr4 = 0;
    int surr5 = 0;
    int surr6 = 0;
    
    //auto tempArray = new int[M][N];
    
    //tempArray = array;
    
    double noChange; // the variable on which the change is predicated
    double selfConstant = 1.7; // factor that contributes to stability
    double otherConstant = 0.8; // factor that contributes to change
    
    
    for (int i=0; i<3; i++) {
        
        for(int r = 0; r < M; r++)
        {
            for(int c = 0; c < N; c++){
                noChange = 1;
                
                if (array[r-1][c-1] == array[r][c])
                {noChange *= selfConstant;}
                else
                {noChange *= otherConstant;}
                
                if (array[r-1][c] == array[r][c])
                {noChange *= selfConstant;}
                else
                {noChange *= otherConstant;}
                
                if (array[r-1][c+1] == array[r][c])
                {noChange *= selfConstant;}
                else
                {noChange *= otherConstant;}
                
                if (array[r][c-1] == array[r][c])
                {noChange *= selfConstant;}
                else
                {noChange *= otherConstant;}
                
                if (array[r][c+1] == array[r][c])
                {noChange *= selfConstant;}
                else
                {noChange *= otherConstant;}
                
                if (array[r+1][c-1] == array[r][c])
                {noChange *= selfConstant;}
                else
                {noChange *= otherConstant;}
                
                if (array[r+1][c] == array[r][c])
                {noChange *= selfConstant;}
                else
                {noChange *= otherConstant;}
                
                if (array[r+1][c+1] == array[r][c])
                {noChange *= selfConstant;}
                else
                {noChange *= otherConstant;}
                
                if (noChange > 1) {
                    cout << array[r][c];}
                else {
                    array[r][c] = 1;
                    cout << array[r][c];}
                
            }
            cout << endl;
            
        }
        
        cout << "  " << endl;
        
    }
    
    return 0;
} */