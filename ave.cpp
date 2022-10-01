\* Header, iostream means
 input output stream */
#include <iostream>

/*Syempre gagamit ka ng
namespace na standards 
parang normal chat pero 
may indentation pa den */
using namespace std;


/* int main ayan yung mismong katawan mo
pag wlaa yan walang kwenta header mo chariz */
int main()
{
    /*Eto yung variables para sa mga sub
    integer kase average ang hahanapin naten*/
    int math,english,prog,science,sum,ave;
    
    
    
    //every sub need mo ng cout and cin
    cout<< "Enter a grade for Math:";
    cin >> math;
    cout<< "Enter a grade for English:";
    cin >> english;
    cout<< "Enter a grade for Programming:";
    cin >> prog;
    cout<< "Enter a grade for Science:";
    cin >> science;
    
    
    
   /*dito na papasok yung pag add mo sa mga subject*/
    sum = math + english + prog + science ;
    
    
    
    /*ngayon mag enter mo kung ilang subject meron ka*/
    cout << "Enter numbers of subject to get the Average:";
    cin >> ave;
    
    
    /*then mag set ka ng division dito sa final output mo*/
    cout <<"The average of " << ave << " is "<<sum / ave;
    
    /*system pause, i run nyo na lang para
    malaman nyo */
    system("pause");

    /* return 0 alam nyo naman na siguro yan */
    return 0;
}      
